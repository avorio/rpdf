# let the grouper handle ground truth and ground truth segmentation
# let the feature extractor handle size normalization etc

# make the chars iterator return multiple classes if cseg is available
# make the clustering class-specific
#     generic classifier: distinguish c/e
#     specific classifier/retraining: font generation
#     reject non-characters (or keep them to distinguish reject/unknown)
# don't average, just keep a representative and a list of similar chars
# differences should be isolated pixels only
#     one way: err after small component removal in delta
#     large # components in difference, small total difference
# differences should not change topology
# self-tune error statistics
# abstract per-bin NN
#     switch to hierarchical, tree VQ per bin
#     write as C++ classifier...
# train per-bin classifiers (maybe with looser bounds)
# stop on first match (?)
# learn common character clusters

import sys,os,re,glob,math,glob
import iulib,ocropus
from pylab import *

# Convert an iulib array to numpy
N = iulib.numpy

# Convert an iulib array to a numpy image (changes the coordinates)
def NI(image): return transpose(N(image))[::-1,...]

segmenter = ocropus.make_ISegmentLine("DpSegmenter")
featuremap = ocropus.make_IFeatureMap("sfmap")
grouper = ocropus.make_IGrouper("SimpleGrouper")
classifier = None

# Compute the correspondences between the cseg and the rseg.
# This simply computes which rseg segments a cseg segment
# overlaps.
#
# FIXME make this a little more robust in case the cseg
# and rseg are slightly different around the edges

def segmentation_correspondences(segmentation,cseg):
    a = ravel(array(N(segmentation),'i'))
    b = ravel(array(N(cseg),'i'))
    h = {}
    for i in range(len(a)):
        if b[i]==0: continue
        if a[i]==0: continue
        h[b[i]] = h.get(b[i],{})
        h[b[i]][a[i]] = 1
    n = amax(h.keys())+1
    result = [None]*n
    for i in h.keys():
        result[i] = tuple(sorted(h[i].keys()))
    return result

# Given the files, produce a stream of characters.

def load_gt0(file):
    # check for the presence of cseg and txt file
    # and use them to label characters if available

    cfile = re.sub(r'\.png$','.cseg.gt.png',file)
    tfile = re.sub(r'\.png$','.gt.txt',file)
    if not os.path.exists(cfile):
        cfile = re.sub(r'\.png$','.cseg.png',file)
        tfile = re.sub(r'\.png$','.txt',file)
    if os.path.exists(cfile):
        cseg = iulib.intarray()
        iulib.read_image_packed(cseg,cfile)
        segments = segmentation_correspondences(segmentation,cseg)
        # print segments
    else:
        cseg = None
    if os.path.exists(tfile):
        text = open(tfile).read()
        if len(text)>len(segments)-1:
            text = re.sub(r'\s','',text)
        if len(text)!=len(segments)-1:
            text = None
    else:
        text = None
    return segments,text

def load_gt(file):
    # check for the presence of cseg and txt file
    # and use them to label characters if available

    cfile = re.sub(r'\.png$','.cseg.gt.png',file)
    tfile = re.sub(r'\.png$','.gt.txt',file)
    if not os.path.exists(cfile):
        cfile = re.sub(r'\.png$','.cseg.png',file)
        tfile = re.sub(r'\.png$','.txt',file)
    if os.path.exists(cfile):
        cseg = iulib.intarray()
        iulib.read_image_packed(cseg,cfile)
        ocropus.make_line_segmentation_black(cseg)
    else:
        cseg = None
    if os.path.exists(tfile):
        text = open(tfile).read()
    else:
        text = None
    return cseg,text

def chars(files):
    for file in files:
        print "# loading",file
        image = iulib.bytearray()
        iulib.read_image_gray(image,file)

        # perform the segmentation
        segmentation = iulib.intarray()
        segmenter.charseg(segmentation,image)

        # transform it into something we can hand to the grouper
        ocropus.make_line_segmentation_black(segmentation)
        iulib.renumber_labels(segmentation,1)
        cseg,text = load_gt(file)
        if cseg is not None and text is not None:
            utext = iulib.ustrg()
            utext.assign(text) # FIXME should do UTF8 or u""
            grouper.setSegmentationAndGt(segmentation,cseg,utext)
        else:
            grouper.setSegmentation(segmentation)

        # invert the image, since that's the way we're doing
        # all the remaining processing
        iulib.sub(255,image)

        # now iterate through the segments of the line
        for i in range(grouper.length()):
            cls = None
            if cseg is not None and text is not None:
                cls = grouper.getGtClass(i)
                if cls==-1:
                    cls = ""
                else:
                    cls = chr(cls)
            raw = iulib.bytearray()
            mask = iulib.bytearray()
            grouper.extractWithMask(raw,mask,image,i,1)
            # print "component",i,N(segments),amax(N(raw)),raw.dim(0),raw.dim(1)
            # imshow(NI(raw)); gray(); show()
            yield raw,mask,cls

def pad_to(image,w,h):
    iw,ih = image.shape
    wd = int(w-iw)
    assert wd>=0
    w0 = wd/2
    w1 = wd-w0
    hd = int(h-ih)
    assert hd>=0
    h0 = hd/2
    h1 = hd-h0
    result = zeros((w,h))
    result[w0:w0+iw,h0:h0+ih] = image
    return result

def pad_bin(char,r=10):
    w,h = char.shape
    w = r*int((w+r-1)/r)
    h = r*int((h+r-1)/r)
    return pad_to(char,w,h)

class BinnedNN:
    def __init__(self,eps=7,reps=0.03):
        self.bins = {}
        self.counts = {}
        self.eps = eps
        self.reps = reps
    def find(self,image):
        key = image.shape
        items = self.bins.get(key,[])
        best_i = -1
        best_err = 1e38
        for i in range(len(items)):
            item = items[i]
            err = math.sqrt(sum((item-image)**2))
            if err>=best_err: continue
            best_err = err
            best_i = i
        if best_i>=0:
            return (best_err,(key,best_i))
        else:
            return None
    def add(self,image):
        result = self.find(image)
        if result is None:
            key = image.shape
            self.bins[key] = self.bins.get(key,[]) + [image[:,:]]
        else:
            err,(key,i) = result
            total = min(sum(self.bins[key][i]**2),sum(image**2))
            rerr = err/total
            # print err,rerr,key,i
            if err>self.eps or rerr>self.reps:
                self.bins[key] = self.bins.get(key,[]) + [image[:,:]]
            else:
                n = self.counts.get((key,i),1)
                self.bins[key][i] = (n*self.bins[key][i]+image)/float(n+1)
                self.counts[(key,i)] = n+1

def biniter(self,mincount=10):
    for key in self.bins.keys():
        for i in range(len(self.bins[key])):
            count = self.counts.get((key,i),1)
            if count<mincount: continue
            yield key,i,count,self.bins[key][i]

def bintotal(self,mincount=3):
    bins = 0
    total = 0
    for key,i,count,image in biniter(self,mincount=0):
        total += count
        if count<mincount: continue
        bins += 1
    print bins,total

def binshow(binned):
    for x in biniter(binned,mincount=3):
        cla()
        imshow(1-x[3])
        gray()
        show()
        print x[:3]

binned = BinnedNN()

for char,mask,cls in chars(sorted(glob.glob("lines/????/????.png"))):
    if cls is not None: print cls,
    if cls is None: continue
    char = pad_bin(NI(char))
    char = char/float(amax(char))
    binned.add(char)

binshow(binned)
