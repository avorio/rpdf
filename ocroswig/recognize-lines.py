import sys,os,re,glob
import iulib,ocropus

linerec = ocropus.load_linerec("latin3-full.model")
lmodel = ocropus.make_OcroFST()
lmodel.load("ocr-dict-case.fst")

for line in sys.argv[1:]:
    image = iulib.bytearray()
    iulib.read_image_gray(image,line)
    fst = ocropus.make_OcroFST()
    linerec.recognizeLine(fst,image)
    s = iulib.nustring()
    # fst.bestpath(s)
    cost = ocropus.beam_search(s,fst,lmodel,1000)
    print cost,s.length(),s.as_string()
