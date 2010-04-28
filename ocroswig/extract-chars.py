import sys,os,re,glob
import iulib,ocropus
from numpy import *
from pylab import *
from ocroutil import *

segmenter = ocropus.make_ISegmentLine("CurvedCutWithCcSegmenter")
grouper = ocropus.make_IGrouper("StandardGrouper")
fmap = ocropus.make_IFeatureMap("sfmap")
fmap.pset("ftypes","bej")
fmap.pset("csize","40")
fmap.pset("aa","0")

image = iulib.bytearray()
seg = iulib.intarray()
char = iulib.bytearray()
mask = iulib.bytearray()
fvec = iulib.floatarray()

gray()

for line in sys.argv[1:]:
    iulib.read_image_binary(image,line)
    segmenter.charseg(seg,image)
    grouper.setSegmentation(seg)
    print grouper.length()
    fmap.setLine(image)
    for i in range(0,min(16,grouper.length())):
        b = grouper.boundingBox(i)
        print b.x0,b.y0,b.x1,b.y1
        grouper.extract(char,mask,image,i)
        subplot(4,4,i+1)
        fmap.extractFeatures(fvec,b,mask)
        v = floatarray2numpy(fvec)
        imshow(transpose(v.reshape(len(v)/40,40))[::-1,:],interpolation='nearest')

show()
