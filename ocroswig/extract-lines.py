import sys,os,re,glob
import iulib,ocropus

pageseg = ocropus.make_ISegmentPage("SegmentPageByRAST")

count = 0

for page in sys.argv[1:]:
    image = iulib.bytearray()
    iulib.read_image_binary(image,page)
    pseg = iulib.intarray()
    pageseg.segment(pseg,image)
    rex = ocropus.RegionExtractor()
    rex.setPageLines(pseg)
    line = iulib.bytearray()
    for i in range(1,rex.length()):
        print rex.x0(i),rex.y0(i),rex.x1(i),rex.y1(i)
        rex.extract(line,image,i)
        iulib.write_image_gray("_%06d.png"%count,line)
        count += 1
