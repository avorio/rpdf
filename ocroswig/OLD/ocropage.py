import matplotlib
matplotlib.rcParams["interactive"] = 1
matplotlib.use('TkAgg') # Qt4Agg
import sys,os,re,glob
import iulib,ocropus
from pylab import *

ion()
hold(False)

N = iulib.numpy
def NI(image): return transpose(N(image))[::-1,...]

preproc = ocropus.make_IBinarize("StandardPreprocessing")
segmenter = ocropus.make_ISegmentPage("SegmentPageByRAST")
prefix = "/usr/local/share/ocropus/models/"
linerec = ocropus.load_linerec(prefix+"default.model")
langmod = ocropus.make_OcroFST()
langmod.load(prefix+"default.fst")

for pagefile in sys.argv[1:]:
    page_gray = iulib.bytearray()
    iulib.read_image_gray(page_gray,pagefile)
    page_bin = iulib.bytearray()
    preproc.binarize(page_bin,page_gray)
    page_seg = iulib.intarray()
    segmenter.segment(page_seg,page_bin)
    regions = ocropus.RegionExtractor()
    regions.setPageLines(page_seg)
    print "#",pagefile,"lines:",regions.length()
    for i in range(1,regions.length()):
        line = iulib.bytearray()
        regions.extract(line,page_bin,i,1) # might use page_gray
        result = ocropus.make_OcroFST()
        imshow(NI(line)); gray(); draw()
        try:
            linerec.recognizeLine(result,line)
            s = iulib.ustrg()
            result.bestpath(s)
        except:
            print "# recognition failed"
            pass
        print "".join([chr(s.ord(i)) for i in range(s.length())])
h())])
