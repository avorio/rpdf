# make the clustering class-specific

import sys,os,re,glob,math,glob
import iulib,ocropus
from pylab import *

N = iulib.numpy
def NI(image): return transpose(N(image))[::-1,...]

segmenter = ocropus.make_ISegmentLine("DpSegmenter")
featuremap = ocropus.make_IFeatureMap("sfmap")
grouper = ocropus.make_IGrouper("SimpleGrouper")
classifier = None

def chars(files):
    for file in files:
        print "# loading",file
        image = iulib.bytearray()
        iulib.read_image_gray(image,file)
        segmentation = iulib.intarray()
        segmenter.charseg(segmentation,image)
        ocropus.make_line_segmentation_black(segmentation)
        iulib.renumber_labels(segmentation,1)
        grouper.setSegmentation(segmentation)

        iulib.sub(255,image)
        for i in range(grouper.length()):
            segments = iulib.intarray()
            grouper.getSegments(segments,i)
            raw = iulib.bytearray()
            mask = iulib.bytearray()
            grouper.extractWithMask(raw,mask,image,i,1)
            # print "component",i,N(segments),amax(N(raw)),raw.dim(0),raw.dim(1)
            # imshow(NI(raw)); gray(); show()
            yield raw,mask

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
    def __init__(self,eps=10,reps=0.05):
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

binned = BinnedNN()

for char,mask in chars(sorted(glob.glob("lines/????/????.png"))):
    char = pad_bin(NI(char))
    char = char/float(amax(char))
    binned.add(char)
