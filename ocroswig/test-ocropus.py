import unittest
import iulib,ocropus
import numpy,os,pdb

RUN=1;

class CreateComponentsTests(unittest.TestCase):
    def testComponents(self):
        ocropus.make_IGrouper("StandardGrouper")
        ocropus.make_IModel("cmlp")
        ocropus.make_IModel("mapped")
        ocropus.make_ISegmentLine("DpSegmenter")
        #ocropus.make_ICleanupGray("Degradation")
        # ocropus.make_ISegmentLine("SegmentWords")
        ocropus.make_IModel("mappedmlp")
        ocropus.make_ISegmentLine("SegmentLineByProjection")
        ocropus.make_ICleanupBinary("DocClean")
        # make_IBinarize("BinarizeBySauvola")
        # TODO add more tests for the components from "ocropus components"
        
suite = unittest.makeSuite(CreateComponentsTests,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);


#unittests for function common to all components.
class Icomponent(unittest.TestCase):
    myName = 0;
    myname = 0;
    myComponent = 0;
    myClassName = 0;
    myFileName = 0;
    myDescription = 0;

    def setUp(self):
        print;#dummy command
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);
    
    #################
    #test the common classes of the Icomponent
    #################
    def testprintname(self):        
        print ("Running tests for component " + self.myClassName +" type " + self.myName);


    #Name of the component is the generated automatically and is not consistent over different systems
    def testname(self):   
        #print (self.myClassName, self.myName);
       errorstring='function name in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: failss';
       assert self.myComponent.name() == self.myname, errorstring;

    #dummy tests have to implement these and other functions of components fully
    def testdescription(self):   # description and info have same functionality. Checking one should be enough
        errorstring ='funtion description in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        assert self.myComponent.description() == self.myDescription, errorstring;

    def testpdef(self):
        self.myComponent.pdef("dummy_string","abc","dummy")
        self.myComponent.pdef("dummy_int",8,"dummy")
        self.myComponent.pdef("dummy_float",2.3,"dummy")

    def testpget(self):
        errorstring ='function pdef/pget in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        temp=self.myComponent.pget("dummy_string");
        assert temp == "abc",errorstring;

        temp=self.myComponent.pget("dummy_int");
        assert temp == '8',errorstring;

        temp=self.myComponent.pget("dummy_float");
        assert temp == '2.3' ,errorstring;

    def testpset(self):
        errorstring ='function pset in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        self.myComponent.pset("dummy_string","ABC");
        temp=self.myComponent.pget("dummy_string");
        assert temp == "ABC",errorstring;

        self.myComponent.pset("dummy_int",100);
        temp=self.myComponent.pget("dummy_int");
        assert temp == '100',errorstring;

        self.myComponent.pset("dummy_float",10.6);
        temp=self.myComponent.pget("dummy_float");
        assert temp == '10.6', errorstring;

    #Not all components support load and save. These are dummy functions. 
    def testload(self):
        errorstring ='function save in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        assert 1 == 1, errorstring;
        
    def testsave(self):
        errorstring ='function load in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        assert 1 == 1, errorstring;

    #cannot test these functions below as their return type is void
    #def testpprint(self):
    #    errorstring ='function pprint in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
    #    assert type(self.myComponent.pprint()) == type("string"), errorstring;

    #def testprint_(self):
    #    errorstring ='function print_ in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
    #    assert type(self.myComponent.print_()) == type("string"), errorstring;

    #def testinfo(self):
    #    errorstring ='function info in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
    #    assert type(self.myComponent.info()) == type("string"), errorstring;
    
    # command, pload, psave, pexist are not tested. 


#components which segements the lines in a page. 
class TestISegmentPageLines(Icomponent):
    dummy_i = 0;
    dummy_f = 1;
    myClassName = 0;
    myName = 0;
    myname = 0;
    myComponent = 0;
    myFileName = 0;
    myDescription = 0;

    def setUp(self):
        self.dummy_i = 0;
        self.dummy_f = 1;
        #iulib.dinit(640,480,1)
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

    #test the special classes of components
    def testsegmenter(self):
        segmenter = self.myComponent;
        image = iulib.bytearray()
        iulib.read_image_gray(image,"TestImages/simple.png")
        seg = iulib.intarray()
        segmenter.segment(seg,image)
        iulib.dshowr(seg);
        iulib.dwait();
        assert iulib.max(seg)==0xffffff
        assert iulib.min(seg)==0x010001, "minumum value is " + str(iulib.min(seg))
        correct = iulib.intarray()
        iulib.read_image_packed(correct,self.myFileName)
        iulib.sub(correct,seg)
        iulib.dshowr(correct);
        iulib.dwait();
        assert iulib.max(correct)==0, "max is " + str(iulib.max(correct))
        for i in range(640):
            for j in range(480):
                if (seg.at(i,j) > 0x010008): assert seg.at(i,j) == 0xffffff, " %06x" % (seg.at(i,j));
                #assert  (seg.at(i,j) == 0xffffff) or (seg.at(i,j) <= 0x010008) and (seg.at(i,j) >= 0x010001 ), " %06x" % (seg.at(i,j));

    #test pget and pset are not tested as no parameters are exposed for Isegment.

class TestSegmentPageByRast(TestISegmentPageLines):
    myName = "SegmentPageByRAST";
    myname = "segrast";
    myClassName = "ISegmentPage";
    myComponent = ocropus.make_ISegmentPage(myName);
    myFileName = "TestImages/simple.rast.pseg.png";
    myDescription = "Segment page by RAST";
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);


suite = unittest.makeSuite(TestSegmentPageByRast,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);


class TestSegmentPageByMorphTrivial(TestISegmentPageLines):
    myName = "SegmentPageByMorphTrivial";
    myClassName = "ISegmentPage";
    myname = "segmorphtriv";
    myComponent = ocropus.make_ISegmentPage(myName);
    myFileName = "TestImages/simple.morphtri.pseg.png";
    myDescription = 'segment characters by horizontal projection (assumes single column)\n'

    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

suite = unittest.makeSuite(TestSegmentPageByMorphTrivial,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);

class TestSegmentPageBy1CP(TestISegmentPageLines):
    myName = "SegmentPageBy1CP";
    myClassName = "ISegmentPage";
    myname = "seg1cp";
    myComponent = ocropus.make_ISegmentPage(myName);
    myFileName = "TestImages/simple.rast.pseg.png";
    myDescription = 'segment characters by horizontal projection (assumes single column)\n'
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

suite = unittest.makeSuite(TestSegmentPageBy1CP,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);

#component which segements the page into paras. 
class TestISegmentPageParas(Icomponent):
    dummy_i = 0;
    dummy_f = 1;
    myClassName = 0;
    myName = 0;
    myname = 0;
    myComponent = 0;
    myFileName = 0;
    myDescription = 0;
    mymin=0;
    mymax=0;

    def setUp(self):
        self.dummy_i = 0;
        self.dummy_f = 1;
        #iulib.dinit(2550,3508,1)
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

    #test the special classes of components
    def testsegmenter(self):
        segmenter = self.myComponent;
        image = iulib.bytearray()
        iulib.read_image_binary(image,"TestImages/1col-300.png")
        seg = iulib.intarray()
        segmenter.segment(seg,image)
        iulib.dshowr(seg);
        iulib.dwait();
        assert iulib.max(seg)==0xffffff
        assert iulib.min(seg)==self.mymin, "minumum value is  %06x" % iulib.min(seg)
        correct = iulib.intarray()
        #iulib.read_image_packed(correct,self.myFileName)
        #iulib.sub(correct,seg)
        iulib.dshowr(correct);
        iulib.dwait();
        #assert iulib.max(correct)==0, "max is " + str(iulib.max(correct))
        for i in range(2550):
            for j in range(3508):
                if (seg.at(i,j) > self.mymax): assert seg.at(i,j) == 0xffffff, " %06x" % (seg.at(i,j));
                #assert  (seg.at(i,j) == 0xffffff) or (seg.at(i,j) <= 0x000005) and (seg.at(i,j) >= 0x000001 ), " %06x" % (seg.at(i,j));


    #test pget and pset are not tested as no parameters are exposed.


class TestSegmentPageByXYCUTS(TestISegmentPageParas):
    myName = "SegmentPageByXYCUTS";
    myClassName = "ISegmentPage";
    myname = "segxy";
    myComponent = ocropus.make_ISegmentPage(myName);
    #myFileName = "TestImages/simple.rast.pseg.png";
    myDescription ='segment page by XY-Cut algorithm\nDefault parameters: \n\ttnx=78, tny=32, tcx=35, tcy=54\n\ttnx,tny: cleaning trhesholds\n\ttcx,tcy = min gap size hor. and ver.\n' 
    mymin=0x010001;
    mymax=0x010001;
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);


suite = unittest.makeSuite(TestSegmentPageByXYCUTS,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);


class TestSegmentPageByVORONOI(TestISegmentPageParas):
    myName = "SegmentPageByVORONOI";
    myClassName = "ISegmentPage";
    myname = "segvoronoi";
    myComponent = ocropus.make_ISegmentPage(myName);
    #myFileName = "TestImages/simple.rast.pseg.png";
    myDescription ='segment page by Voronoi algorithm\n'
    mymin=0x000001;
    mymax=0x000005;
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);


suite = unittest.makeSuite(TestSegmentPageByVORONOI,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);

#components which segements the pages into words. 
class TestISegmentPageWord(Icomponent):
    dummy_i = 0;
    dummy_f = 1;
    myClassName = 0;
    myName = 0;
    myname = 0;
    myComponent = 0;
    myFileName = 0;
    myDescription = 0;

    def setUp(self):
        self.dummy_i = 0;
        self.dummy_f = 1;
        #iulib.dinit(640,480,1)
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

    #test the special classes of components
    def testsegmenter(self):
        segmenter = self.myComponent;
        image = iulib.bytearray()
        iulib.read_image_gray(image,"TestImages/textbox.png")
        seg = iulib.intarray()
        segmenter.segment(seg,image)
        iulib.dshowr(seg);
        iulib.dwait();
        assert iulib.max(seg)==0xffffff, "maximum value is " + str(iulib.max(seg))
        assert iulib.min(seg)==0x000001, "minumum value is " + str(iulib.min(seg))
        #correct = iulib.intarray()
        #iulib.read_image_packed(correct,self.myFileName)
        #iulib.sub(correct,seg)
        #iulib.dshowr(correct);
        #iulib.dwait();
        #assert iulib.max(correct)==0, "max is " + str(iulib.max(correct))
        for i in range(image.dim(0)):
            for j in range(image.dim(1)):
                if (seg.at(i,j) > 0x0000B0): assert seg.at(i,j) == 0xffffff, " %06x" % (seg.at(i,j));

    #test pget and pset are not tested as no parameters are exposed for Isegment.

class TestSegmentWords(TestISegmentPageWord):
    myName = "SegmentWords";
    myname = "segwords";
    myClassName = "ISegmentPage";
    myComponent = ocropus.make_ISegmentPage(myName);
    myFileName = "TestImages/textbox.png";
    myDescription = "segment words by smearing\n";
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

suite = unittest.makeSuite(TestSegmentWords,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);

#components which do the binarization job . 
class TestIBinarize(Icomponent):
    dummy_i = 0;
    dummy_f = 1;
    myClassName = 0;
    myName = 0;
    myname = 0;
    myComponent = 0;
    myFileName = 0;
    myDescription = 0;

    def setUp(self):
        self.dummy_i = 0;
        self.dummy_f = 1;
        #iulib.dinit(640,480,1)
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

    #test the special classes of components
    def testbinarizer(self):
        errorstr="Icomponent " + self.myClassName +"("+ self.myName +") fails:"
        binarizer = self.myComponent;
        image = iulib.bytearray()
        iulib.read_image_gray(image,"TestImages/lena.jpg")
        bin_image = iulib.bytearray()
        #pdb.set_trace()
        binarizer.binarize(bin_image,image)
        iulib.check_binary(bin_image);
        for i in range(bin_image.dim(0)):
            for j in range(bin_image.dim(1)):
                assert (bin_image.at(i,j)==0 or bin_image.at(i,j)==255), errorstr +"Not a binary image.";

    #test pget and pset are not tested as no parameters are exposed for IBinarize.


class TestBinarizeByRange(TestIBinarize):
    myName = "BinarizeByRange";
    myClassName = "IBinarize";
    myname = "binarizerange";
    myComponent = ocropus.make_IBinarize(myName);
    #myFileName = "TestImages/simple.rast.pseg.png";
    myDescription ='binarize by thresholding the range between min(image) and max(image)\n'
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);


suite = unittest.makeSuite(TestBinarizeByRange,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);

class TestBinarizeByOtsu(TestIBinarize):
    myName = "BinarizeByOtsu";
    myClassName = "IBinarize";
    myname = "binotsu";
    myComponent = ocropus.make_IBinarize(myName);
    #myFileName = "TestImages/simple.rast.pseg.png";
    myDescription ='An implementation of Otsu\'s binarization algorithm.\n'
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);


suite = unittest.makeSuite(TestBinarizeByOtsu,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);


class TestBinarizeBySauvola(TestIBinarize):
    myName = "BinarizeBySauvola";
    myClassName = "IBinarize";
    myname = "binsauvola";
    myComponent = ocropus.make_IBinarize(myName);
    #myFileName = "TestImages/simple.rast.pseg.png";
    myDescription ='An efficient implementation of the Sauvola\'s document binarization algorithm based on integral images.\n'
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);


suite = unittest.makeSuite(TestBinarizeBySauvola,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);


#components which do the Cleaning. 
class TestIClean(Icomponent):
    dummy_i = 0;
    dummy_f = 1;
    myClassName = 0;
    myName = 0;
    myname = 0;
    myComponent = 0;
    myFileName = 0;
    myDescription = 0;

    def setUp(self):
        self.dummy_i = 0;
        self.dummy_f = 1;
        #iulib.dinit(640,480,1)
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

    #test the special classes of components
    def testcleanup(self):
        errorstr="Icomponent " + self.myClassName +"("+ self.myName +") fails:"
        cleaner = self.myComponent;
        image = iulib.bytearray()
        out_image = iulib.bytearray()
        sto_image = iulib.bytearray()
        
        if self.myClassName == "ICleanupBinary":
            iulib.read_image_binary(image,"TestImages/textbox.png")
            cleaner.cleanup(out_image,image)
        else:
            iulib.read_image_gray(image,"TestImages/textbox.png")
            cleaner.cleanup_gray(out_image,image)

        iulib.read_image_gray(sto_image,self.myFileName)
        assert sto_image == out_image, errorstr+" Cleaned image does not match with " + self.myFileName +".";

    #test pget and pset are not tested as no parameters are exposed for ICleanup.

class TestDegradation(TestIClean):
    myName = "Degradation";
    myClassName = "ICleanupGray";
    myname = "degradation";
    myComponent = ocropus.make_ICleanupGray(myName);
    myFileName = "TestImages/clean.degrade.png";
    myDescription ='N7ocropus11DegradationE'
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);
   #test pget and pset are not tested as no parameters are exposed for IBinarize.
    def testpget(self):
        errorstring ='function pget in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        temp=self.myComponent.pget("sensitivity_sigma"); assert temp == '0.4',errorstring;
        temp=self.myComponent.pget("sensitivity_mean"); assert temp == '0.125',errorstring;
        temp=self.myComponent.pget("threshold_sigma"); assert temp == '0.04',errorstring;
        temp=self.myComponent.pget("threshold_mean"); assert temp == '0.4',errorstring;
        temp=self.myComponent.pget("jitter_sigma"); assert temp == '0.1',errorstring;
        temp=self.myComponent.pget("jitter_mean"); assert temp == '0.2',errorstring;


    def testpset(self):
        errorstring ='function pset in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        self.myComponent.pset("sensitivity_sigma","0.1");
        temp=self.myComponent.pget("sensitivity_sigma");assert temp == "0.1",errorstring;

        self.myComponent.pset("threshold_sigma","0.1");
        temp=self.myComponent.pget("sensitivity_sigma");assert temp == "0.1",errorstring;

        self.myComponent.pset("jitter_sigma","0.1");
        temp=self.myComponent.pget("sensitivity_sigma");assert temp == "0.1",errorstring;


suite = unittest.makeSuite(TestDegradation,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);


class TestDocClean(TestIClean):
    myName = "DocClean";
    myClassName = "ICleanupBinary";
    myname = "docclean";
    myComponent = ocropus.make_ICleanupBinary(myName);
    myFileName = "TestImages/clean.docclean.png";
    myDescription ='Running black filter,white filter on the image  thus removing noise \n'
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);


suite = unittest.makeSuite(TestDocClean,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);

class TestPageFrameRAST(TestIClean):
    myName = "PageFrameRAST";
    myClassName = "ICleanupBinary";
    myname = "rastframe";
    myComponent = ocropus.make_ICleanupBinary(myName);
    myFileName = "TestImages/clean.rastframe.png";
    myDescription ='remove marginal noise using page frame detection \n'
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

#This gives segmentation fault on repeated runs.
suite = unittest.makeSuite(TestPageFrameRAST,'test')
runner = unittest.TextTestRunner()
#if RUN: runner.run(suite);


#This component is removed from the ocropus.
#class TestRemoveImageRegionsBinary(TestIClean):
#    myName = "RemoveImageRegionsBinary";
#    myClassName = "ICleanupBinary";
#    myname = "removeimageregions";
#    myComponent = ocropus.make_ICleanupBinary(myName);
#    myFileName = "TestImages/clean.remimgbin.png";
#    myDescription ='Remove text or non-text zones\n'
#    #def setUp(self):
#        #print ("Running tests for component " + self.myClassName +" type " + self.myName);
#
#
#suite = unittest.makeSuite(TestRemoveImageRegionsBinary,'test')
#runner = unittest.TextTestRunner()
#runner.run(suite)

#class TestRemoveImageRegionsGray(TestIClean):
#    myName = "RemoveImageRegionsGray";
#    myClassName = "ICleanupBinary";
#    myname = "removeimageregions";
#    myComponent = ocropus.make_ICleanupGray(myName);
#    myFileName = "TestImages/clean.remimggray.png";
#    myDescription ='Remove text or non-text zones\n'
#    #def setUp(self):
#       #print ("Running tests for component " + self.myClassName +" type " + self.myName);
#
#
#suite = unittest.makeSuite(TestRemoveImageRegionsGray,'test')
#runner = unittest.TextTestRunner()
#runner.run(suite)

class TestDeskewGrayPageByRast(TestIClean):
    myName = "DeskewGrayPageByRAST";
    myClassName = "ICleanupGray";
    myname = "deskewrast";
    myComponent = ocropus.make_ICleanupGray(myName);
    myFileName = "TestImages/clean.deskewgray.png";
    myDescription ='Deskew page image by RAST\n'
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);


suite = unittest.makeSuite(TestDeskewGrayPageByRast,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);

class TestDeskewPageByRast(TestIClean):
    myName = "DeskewPageByRAST";
    myClassName = "ICleanupBinary";
    myname = "deskewrast";
    myComponent = ocropus.make_ICleanupBinary(myName);
    myFileName = "TestImages/clean.deskew.png";
    myDescription ='Deskew page image by RAST\n'
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);


suite = unittest.makeSuite(TestDeskewPageByRast,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);

#components which segements the pages into words. 
class TestISegmentLine(Icomponent):
    dummy_i = 0;
    dummy_f = 1;
    myClassName = 0;
    myName = 0;
    myname = 0;
    myComponent = 0;
    myFileName = 0;
    myDescription = 0;
    mymin=0;
    mymax=0;

    def setUp(self):
        self.dummy_i = 0;
        self.dummy_f = 1;
        #iulib.dinit(640,480,1)
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

    #test the special classes of components
    def testcharseg(self):
        errorstring ='function charseg in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        segmenter = self.myComponent;
        image = iulib.bytearray()
        iulib.read_image_gray(image,"TestImages/textbox.png")
        seg = iulib.intarray()
        storedImg = iulib.intarray()
        segmenter.charseg(seg,image)
        iulib.dshowr(seg);
        iulib.dwait();
        assert iulib.max(seg)==self.mymax, "maximum value is " + str(iulib.max(seg))
        assert iulib.min(seg)==self.mymin, "minumum value is " + str(iulib.min(seg))
        #correct = iulib.intarray()
        iulib.read_image_packed(storedImg,self.myFileName)
        assert storedImg == seg, errorstring;
        
    #test pget and pset are not tested as no parameters are exposed for Isegment.

class TestSegmentLineBySkelSegmenter(TestISegmentLine):
    myName = "SkelSegmenter";
    myname = "skelseg";
    myClassName = "ISegmentLine";
    myComponent = ocropus.make_ISegmentLine(myName);
    myFileName = "TestImages/textbox.skelseg.png";
    myDescription = "skeleton segmenter";
    mymax=0x000b42;
    mymin=0x000000;
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);


suite = unittest.makeSuite(TestSegmentLineBySkelSegmenter,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);

class TestSegmentLineByCurvedCutWithCcSegmenter(TestISegmentLine):
    myName = "CurvedCutWithCcSegmenter";
    myname = "curvedcut";
    myClassName = "ISegmentLine";
    myComponent = ocropus.make_ISegmentLine(myName);
    myFileName = "TestImages/textbox.curcutcc.png";
    myDescription = "curved cut segmenter";
    mymax=0xffffff;
    mymin=0x000001;
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);


suite = unittest.makeSuite(TestSegmentLineByCurvedCutWithCcSegmenter,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);

class TestSegmentLineByCurvedCutSegmenter(TestISegmentLine):
    myName = "CurvedCutSegmenter";
    myname = "curvedcut";
    myClassName = "ISegmentLine";
    myComponent = ocropus.make_ISegmentLine(myName);
    myFileName = "TestImages/textbox.curcut.png";
    myDescription = "curved cut segmenter";
    mymax=0xffffff;
    mymin=0x000002;
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);


suite = unittest.makeSuite(TestSegmentLineByCurvedCutSegmenter,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);

class TestSegmentLineByDpSegmenter(TestISegmentLine):
    myName = "DpSegmenter";
    myname = "dpseg";
    myClassName = "ISegmentLine";
    myComponent = ocropus.make_ISegmentLine(myName);
    myFileName = "TestImages/textbox.dpseg.png";
    myDescription = "curved cut segmenter";
    mymin=0x000001;
    mymax=0xffffff;
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

suite = unittest.makeSuite(TestSegmentLineByDpSegmenter,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);

class TestSegmentLineByConnectedComponentSegmenter(TestISegmentLine):
    myName = "ConnectedComponentSegmenter";
    myname = "segccs";
    myClassName = "ISegmentLine";
    myComponent = ocropus.make_ISegmentLine(myName);
    myFileName = "TestImages/textbox.conncomseg.png";
    myDescription = "connected component segmenter";
    mymin=0x000000;
    mymax=0x000353;
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);


suite = unittest.makeSuite(TestSegmentLineByConnectedComponentSegmenter,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);

class TestSegmentLineByCCS(TestISegmentLine):
    myName = "SegmentLineByCCS";
    myname = "segccs";
    myClassName = "ISegmentLine";
    myComponent = ocropus.make_ISegmentLine(myName);
    myFileName = "TestImages/textbox.segbyccs.png";
    myDescription = "connected component segmenter using morphology for grouping\n";
    mymin=0x001001;
    mymax=0xffffff;
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);


suite = unittest.makeSuite(TestSegmentLineByCCS,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);

class TestSegmentLineByProjection(TestISegmentLine):
    myName = "SegmentLineByProjection";
    myname = "projseg";
    myClassName = "ISegmentLine";
    myComponent = ocropus.make_ISegmentLine(myName);
    myFileName = "TestImages/textbox.projseg.png";
    myDescription = "segment characters by 1D projection\n";
    mymin=0x001001;
    mymax=0xffffff;
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);


suite = unittest.makeSuite(TestSegmentLineByProjection,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);


#components which segements the page into chars and image.
class TestITextImageClassification(Icomponent):
    dummy_i = 0;
    dummy_f = 1;
    myClassName = 0;
    myName = 0;
    myname = 0;
    myComponent = 0;
    myFileName = 0;
    myDescription = 0;
    mymin=0;
    mymax=0;

    def setUp(self):
        self.dummy_i = 0;
        self.dummy_f = 1;
        #iulib.dinit(640,480,1)
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

    #test the special classes of components
    def testtextImageProbabilities(self):
        errorstring ='function charseg in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        segmenter = self.myComponent;
        image = iulib.bytearray()
        iulib.read_image_gray(image,"scan_TextImage_embedded.png")
        seg = iulib.intarray()
        storedImg = iulib.intarray()
        segmenter.textImageProbabilities(seg,image)
        iulib.dshowr(seg);
        iulib.dwait();
        assert iulib.max(seg)==self.mymax, "maximum value is " + str(iulib.max(seg))
        assert iulib.min(seg)==self.mymin, "minumum value is " + str(iulib.min(seg))
        #correct = iulib.intarray()
        iulib.read_image_packed(storedImg,self.myFileName)
        assert storedImg == seg, errorstring;
        
    #test pget and pset are not tested as no parameters are exposed for Isegment.

class TestTextImageSegByLogReg(TestITextImageClassification):
    myName = "TextImageSegByLogReg";
    myname = "tiseglogreg";
    myClassName = "ITextImageClassification";
    myComponent = ocropus.make_ITextImageClassification(myName);
    myFileName = "TestImages/textimgseg.bylogreg.png";
    myDescription = "Get text/image probability map\n";
    mymax=0xffffff;
    mymin=0x1f1f1f;
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);


suite = unittest.makeSuite(TestTextImageSegByLogReg,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);


#Grouper components.
class TestIGrouper(Icomponent):
    dummy_i = 0;
    dummy_f = 1;
    myClassName = 0;
    myName = 0;
    myname = 0;
    myComponent = 0;
    myFileName = 0;
    myDescription = 0;
    

    def setUp(self):
        self.dummy_i = 0;
        self.dummy_f = 1;
        image = iulib.intarray()
        iulib.read_image_packed(image,"TestImages/line.segments.png");
        self.myComponent.setSegmentation(image);
        #iulib.dinit(640,480,1)
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

    def testLength(self):
        assert self.myComponent.length()==59, "Fail: Correct length value is " + str(self.myComponent.length())

    def testboundingBox(self):
        errorstring ='function boundingBox in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        rect=iulib.rectangle();
        rect=self.myComponent.boundingBox(0);
        assert (rect.x0==1 and rect.x1==20 and rect.y0==8 and rect.y1==40),errorstring;
        
    def testgetSegments(self):
        errorstring ='function getSegments in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        isegs=iulib.intarray();
        self.myComponent.getSegments(isegs,4);
        assert (isegs.length()==2 and isegs.at(0)==3 and isegs.at(1)==4), errorstring
        self.myComponent.getSegments(isegs,5);
        assert (isegs.length()==1 and isegs.at(0)==4), errorstring

    def testpixelSpace(self):
        assert self.myComponent.pixelSpace(2)==3, "Fail: Correct pixelSpace value at (2) is " + str(self.myComponent.length())

    def testgetMask(self):
        errorstring ='function getMask in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        rect=iulib.rectangle();
        mask=iulib.bytearray();
        self.myComponent.getMask(rect,mask,8,0)
        assert rect.area()==mask.length(),errorstring;
        assert (rect.x1-rect.x0==mask.dim(0) and rect.y1-rect.y0==mask.dim(1)),errorstring;

    def testgetMaskAt(self):
        errorstring ='function getMaskAt in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        rect=iulib.rectangle();
        mask=iulib.bytearray();
        rect=self.myComponent.boundingBox(7);
        self.myComponent.getMaskAt(mask,7,rect)
        assert rect.area()==mask.length(),errorstring;
        assert (rect.x1-rect.x0==mask.dim(0) and rect.y1-rect.y0==mask.dim(1)),errorstring;

    def testextract(self):
        errorstring ='function extract in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        mask=iulib.bytearray();
        bsegs=iulib.bytearray();
        image=iulib.bytearray();
        iulib.read_image_gray(image,"TestImages/line.segments.png");
        self.myComponent.extractWithMask(bsegs,mask,image,8,0);
        assert bsegs.length()==mask.length(),errorstring;

    #test pget and pset are not tested as no parameters are exposed for Isegment.


class TestStandardGrouper(TestIGrouper):
    myName = "StandardGrouper";
    myname = "simplegrouper";
    myClassName = "IGrouper";
    myComponent = ocropus.make_IGrouper(myName);
    myFileName = 0;
    myDescription = "SimpleGrouper";
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);


suite = unittest.makeSuite(TestStandardGrouper,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);

class TestSimpleGrouper(TestIGrouper):
    myName = "SimpleGrouper";
    myname = "simplegrouper";
    myClassName = "IGrouper";
    myComponent = ocropus.make_IGrouper(myName);
    myFileName = 0;
    myDescription = "SimpleGrouper";
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);


suite = unittest.makeSuite(TestSimpleGrouper,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);

####################################
##CODE TO Generate the data file of IDataset.
####################################
#A = iulib.narray
#com = ocropus.make_IModel("float8buffer")
#for i in range(10000):
#    input = numpy.random.uniform(0.0,1.0,size=10)
#    c = argmax(input)
#    com.add(A(input),int(c))
#
#com.pset("datafile","dataset.dat")
#com.updateModel()
###Finally edit the dataset.dat file manually to remove the first line(Tag) and Tag at end.
###

#Grouper components.
class TestIDataset(Icomponent):
    dummy_i = 0;
    dummy_f = 0;
    myClassName = 0;
    myName = 0;
    myname = 0;
    myComponent = 0;
    myFileName = 0;
    myDescription = 0;
    

    def setUp(self):
        self.dummy_i = 0;
        self.dummy_f = 1;
        self.myComponent.load("dataset.dat");
        #iulib.dinit(640,480,1)
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

    def testnfeatures(self):
        errorstring ='function nfeatures in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        assert self.myComponent.nfeatures()==10, errorstring

    def testnclasses(self):
        errorstring ='function nclasses in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        assert self.myComponent.nfeatures()==10, errorstring
        
    def testnsamples(self):
        errorstring ='function nsamples in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        #Actual nsamples is 10000 but since setUp() runs 9 times before and loads same file 9 times.
        assert self.myComponent.nsamples()==90000, errorstring

    def testcls(self):
        errorstring ='function cls in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        for i in range(10000):
            assert (self.myComponent.cls(i)<10 or self.myComponent.cls(i)>=0), errorstring

    def testid(self):
        errorstring ='function id in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        assert self.myComponent.id(100)==100,errorstring;

    def testinput(self):
        errorstring ='function input in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        array=iulib.floatarray();
        mask=iulib.bytearray();
        self.myComponent.input(array,12)
        assert (array.length()==10 and  array.rank()==1),errorstring;

    def testsave(self):
        errorstring ='function save in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        mask=iulib.bytearray();
        bsegs=iulib.bytearray();
        image=iulib.bytearray();
        iulib.read_image_gray(image,"TestImages/line.segments.png");
        self.myComponent.save("temp.dat");
        assert os.path.isfile("temp.dat"),errorstring;
        os.remove("temp.dat")

    #test pget and pset are not tested as no parameters are exposed for Isegment.

class Testrowdataset8(TestIDataset):
    myName = "rowdataset8";
    myname = "rowdataset";
    myClassName = "IDataset";
    myComponent = ocropus.make_IDataset(myName);
    myFileName = 0;
    myDescription = "N8glinerec10RowDatasetINS_6float8EEE";
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

suite = unittest.makeSuite(Testrowdataset8,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);

#Grouper components.
class TestIFeatureMap(Icomponent):
    dummy_i = 0;
    dummy_f = 0;
    myClassName = 0;
    myName = 0;
    myname = 0;
    myComponent = 0;
    myFileName = 0;
    myDescription = 0;
    

    def setUp(self):
        self.dummy_i = 0;
        self.dummy_f = 1;
        image=iulib.bytearray();
        iulib.read_image_gray(image,"TestImages/line.segments.png");
        self.myComponent.setLine(image);
        #iulib.dinit(640,480,1)
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

    def testextractFeatures(self):
        errorstring ='function extractFeatures in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        features=iulib.floatarray();
        vec = ocropus.InputVector();
        vec.append(features,"a");
        mask=iulib.bytearray();
        rect=iulib.rectangle();
        iimage=iulib.intarray();

        iulib.read_image_packed(iimage,"TestImages/line.segments.png");
        grouper = ocropus.make_IGrouper("StandardGrouper");
        grouper.setSegmentation(iimage);
        parm=self.myparm;

        #pdb.set_trace()

        for i in range(grouper.length()):
            features.resize(0);
            grouper.getMask(rect,mask,i,0);
            self.myComponent.extractFeatures(vec,rect,mask);
            features=vec.chunk(0);
            assert vec.nchunks()==int(parm[0]),errorstring+"number of chunks =" + str(vec.nchunks());
            assert vec.name(0)==parm[1] and  vec.name(1)==parm[2] and vec.name(2)==parm[3] and vec.name(3)==parm[4] ,errorstring;
            assert features.length()==1600,errorstring+"feature length =" + str(features.length());
            assert features.rank()==2,errorstring+"feature rank =" + str(features.rank());
            assert iulib.max(features)<=1.0,errorstring;
            assert iulib.min(features)>=0.0,errorstring;
        

    #test pget and pset are not tested as no parameters are exposed for Isegment.

class Testsfmap(TestIFeatureMap):
    myName = "sfmap";
    myname = "sfmap";
    myClassName = "IFeatureMap";
    myComponent = ocropus.make_IFeatureMap(myName);
    myparm = "4bhje";
    myDescription = "N8glinerec16SimpleFeatureMapE";
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

suite = unittest.makeSuite(Testsfmap,'test')
runner = unittest.TextTestRunner()
#RUN=1
if RUN: runner.run(suite);
#RUN=0


class Testcfmap(TestIFeatureMap):
    myName = "cfmap";
    myname = "cfmap";
    myClassName = "IFeatureMap";
    myComponent = ocropus.make_IFeatureMap(myName);
    myparm = "5bhje";
    myDescription = "N8glinerec16CenterFeatureMapE";
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

suite = unittest.makeSuite(Testcfmap,'test')
runner = unittest.TextTestRunner()
#RUN=1
if RUN: runner.run(suite);
#RUN=0


#Grouper components.
class TestIRecognizeLine(Icomponent):
    dummy_i = 0;
    dummy_f = 0;
    myClassName = 0;
    myName = 0;
    myname = 0;
    myComponent = 0;
    myFileName = 0;
    myDescription = 0;
    

    def setUp(self):
        self.dummy_i = 0;
        self.dummy_f = 1;
        #iulib.dinit(640,480,1)
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

    #this tests weather linereconginser can start, add a training line, train, recognise and finally save the model.
    def testTraining(self):
        errorstring ='something failed while training in {component \"'+ self.myClassName +'(' +self.myName+ ')\"} ';
        #initialize everything
        fst=ocropus.make_OcroFST();
        image=iulib.bytearray();
        iimage=iulib.intarray();
        iulib.read_image_gray(image,"TestImages/0084.cseg.gt.png")
        iulib.read_image_packed(iimage,"TestImages/0084.cseg.gt.png");
        nustrg=iulib.nustring('Figure7-6.ControlanddatatransferintheKESSexecutiveprogram.');
        ustrgout=iulib.ustrg();

        #start training
        self.myComponent.startTraining();
        ocropus.make_line_segmentation_black(iimage);
        for i in range(2):
            self.myComponent.addTrainingLine(iimage,image,nustrg);
        self.myComponent.finishTraining();

        #now recognise the same line back
        self.myComponent.recognizeLine(fst,image);
        fst.bestpath(ustrgout)
        nustrg=iulib.nustring('Figure 7-6. Control and data transfe r in the KESS executive program.');
        count=0;
        assert ustrgout.length()==nustrg.length(),errorstring;
        for i in range(nustrg.length()):
            if nustrg.ord(i)!=ustrgout.ord(i): count=count+1;
        
        errorstring ='Mismatch percent is greater than 10 {component \"'+ self.myClassName +'(' +self.myName+ ')\"} :';
        assert 100.0*count/ustrgout.length() < 10,errorstring+str(100.0*count/ustrgout.length());

        #save the model
        errorstring ='save() in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}';
        self.myComponent.save("temp.model");
        assert os.path.isfile("temp.model"),errorstring;
        os.remove("temp.model")


    #this tests weather it can load a prebuilt model and recognise.
    def testrecognizeLine(self):
        errorstring ='recognizing using default model in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        fst=ocropus.make_OcroFST();
        image=iulib.bytearray();
        iulib.read_image_gray(image,"TestImages/0084.cseg.gt.png")
        nustrg=iulib.ustrg('Figure 7-6. Control and data transfe r in the KESS executive program.');
        #nustrg=iulib.ustrg('Figure7-6.ControlanddatatransferintheKESSexecutiveprogram.');
        nustrgout=iulib.ustrg();

        self.myComponent=ocropus.load_IRecognizeLine("default.model");#create the new model using default.model
        self.myComponent.recognizeLine(fst,image);
        fst.bestpath(nustrgout)
        assert nustrgout.as_string()==nustrg.as_string(),errorstring;
        

    #test pget and pset are not tested as no parameters are exposed for Isegment.

class Testlinerec(TestIRecognizeLine):
    myName = "linerec";
    myname = "linerec";
    myClassName = "IRecognizeLine";
    myComponent = ocropus.make_IRecognizeLine(myName);
    myFileName = 0;
    myDescription = "Linerec";
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

#RUN=0
suite = unittest.makeSuite(Testlinerec,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);
#RUN=1


class Testnulllinerec(TestIRecognizeLine):
    myName = "nulllinerec";
    myname = "nulllinerec";
    myClassName = "IRecognizeLine";
    myComponent = ocropus.make_IRecognizeLine(myName);
    myFileName = 0;
    myDescription = "N8glinerec11NullLinerecE";
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

RUN=0
suite = unittest.makeSuite(Testnulllinerec,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);
RUN=1


class Testmetalinerec(TestIRecognizeLine):
    myName = "metalinerec";
    myname = "metalinerec";
    myClassName = "IRecognizeLine";
    myComponent = ocropus.make_IRecognizeLine(myName);
    myFileName = 0;
    myDescription = "N8glinerec11MetaLinerecE";
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

RUN=0
suite = unittest.makeSuite(Testmetalinerec,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);
#RUN=1

#Region extractor
class TestRegionExtrator(unittest.TestCase):
    myComponent = ocropus.RegionExtractor();
    iimage=iulib.intarray();
    image=iulib.bytearray();
    iulib.read_image_gray(image,"TestImages/line.segments.png")
    iulib.read_image_packed(iimage,"TestImages/line.segments.png");
    myComponent.setImage(iimage);

    def testaprint(self):
        print ('Testing RegionExtractor')

    
    def testlength(self):
        errorstring ='RegionExtractor: length() failed: ';
        assert self.myComponent.length()==0x1000000,errorstring+str(self.myComponent.length());

    #testing mask()
    def testmask(self):
        mask=iulib.bytearray();
        self.myComponent.mask(mask,1);
        assert (mask.length() == 608 and mask.rank() ==2),'RegionExtractor: mask() failed'

    #testing extract()
    def testextract(self):
        mask=iulib.bytearray();
        self.myComponent.extract(mask,self.image,1);
        assert (mask.length() == 608 and mask.rank() ==2),'RegionExtractor: extract() failed'

    #testing bbox()
    def testbbox(self):
        rect=self.myComponent.bbox(1);
        assert (rect.area() == 608 and rect.x0 ==1 and rect.x1 ==20 and rect.y0 ==8),'RegionExtractor: bbox() failed'

    #testing x0(), x1(), y0(), y1()
    def testbox(self):
        a=self.myComponent.x0(1);
        b=self.myComponent.x1(1);
        c=self.myComponent.y0(1);
        d=self.myComponent.y1(1);
        rect=self.myComponent.bbox(1);
        assert (rect.x0 ==a),'RegionExtractor: x0() failed'
        assert (rect.x1 ==b),'RegionExtractor: x1() failed'
        assert (rect.y0 ==c),'RegionExtractor: y0() failed'
        assert (rect.y1 ==d),'RegionExtractor: y1() failed'
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

#RUN=1
suite = unittest.makeSuite(TestRegionExtrator,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);


#InputVector
class TestInputVector(unittest.TestCase):

    def testaprint(self):
        print ('Testing InputVector')

    def testlength(self):
        farray=iulib.floatarray();
        iulib.iota(farray,3);
        vec = ocropus.InputVector(farray);
        errorstring ='InputVector: length() failed: ';
        assert vec.length()==3,errorstring+str(vec.length());

    def testclear(self):
        farray=iulib.floatarray();
        iulib.iota(farray,3);
        vec = ocropus.InputVector(farray);
        vec.clear();
        errorstring ='InputVector: clear() failed: ';
        assert vec.length()==0,errorstring+str(vec.length());

    def testappend(self):
        farray=iulib.floatarray();
        iulib.iota(farray,3);
        vec = ocropus.InputVector(farray);
        iulib.iota(farray,4);
        vec.append(farray,'a');
        errorstring ='InputVector: append() failed: ';
        assert vec.length()==7,errorstring+str(vec.length());

    def testrest(self):
        farray=iulib.floatarray();
        vec = ocropus.InputVector();
        iulib.iota(farray,4);
        vec.append(farray,'a');
        vec.append(farray,'b');
        vec.append(farray,'c');
        errorstring ='InputVector: nchunk() failed: ';
        assert vec.nchunks()==3,errorstring+str(vec.nchunks());

        errorstring ='InputVector: chunk() failed: ';
        farray1=vec.chunk(1);      
        assert farray==farray1,errorstring;

        errorstring ='InputVector: name() failed: ';
        assert vec.name(1)=='b',errorstring+str(vec.chunk(1));

        vec.ravel(farray);
        errorstring ='InputVector: as_array() failed: ';
        assert farray.length()==12,errorstring;

#RUN=1
suite = unittest.makeSuite(TestInputVector,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);


#IModel components.
class TestIModel(Icomponent):
    dummy_i = 0;
    dummy_f = 0;
    myClassName = 0;
    myName = 0;
    myname = 0;
    myComponent = 0;
    myFileName = 0;
    myDescription = 0;
    myclasses = 0;
    myfeatures = 0;
    mynmodels=0;

    def setUp(self):
        self.dummy_i = 0;
        self.dummy_f = 1;
        #iulib.dinit(640,480,1)
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

    def testadd_updateModel(self):
        errorstring ='Add and updateModel in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}';
        ocropus.save_component("test.model",self.myComponent)
        A = iulib.narray
        for i in range(1000):
            input = numpy.random.uniform(0.0,1.0,size=3)
            c = numpy.argmax(input)
            self.myComponent.add(A(input),int(c))
        #assert self.myComponent.nfeatures()==0 and self.myComponent.nclasses()==0, errorstring
        self.myComponent.updateModel()
        self.nfeatures()
        self.nclasses()
        #self.complexity() #number of hidden layers is not consistent, sometimes it varies sometimes not
        #self.crossValidatedError() # Same here
        self.nmodels()

    def nfeatures(self):
        errorstring ='nfeatures in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        assert self.myComponent.nfeatures()==3, errorstring

    def nclasses(self):
        errorstring ='nclasses in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        assert self.myComponent.nclasses()==3, errorstring

    def complexity(self):
        errorstring ='complexity in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        assert self.myComponent.complexity()==33.0, errorstring

    def crossValidatedError(self):
        errorstring ='crossValidatedError in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        assert self.myComponent.crossValidatedError()==0.0, errorstring

    def nmodels(self):
        errorstring ='nmodels in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        assert self.myComponent.nmodels()==self.mynmodels, errorstring

    def testcost(self):
        errorstring ='cost in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        A = iulib.narray
        input = numpy.random.uniform(0.0,1.0,size=3)
        B = iulib.floatarray()
        cost=self.myComponent.outputs(B,A(input));
        assert cost==self.myComponent.cost(A(input)), errorstring

    def outputs_classify(self):
        errorstring ='outputs/classify in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}: fails';
        A = iulib.narray
        input = numpy.random.uniform(0.0,1.0,size=3)
        B = iulib.floatarray()
        cost=self.myComponent.outputs(B,A(input));
        #c = numpy.argmax(input)
        assert B.length()==3 and B.rank()==1, errorstring
        result = self.myComponent.classify(A(input));
        assert result==iulib.argmax(B), errorstring

    def testclassify(self):
        A = iulib.narray
        #model=ocropus.load_IModel("test.model")
        err=0
        total=0
        for i in range(100):
            input = numpy.random.uniform(0.0,1.0,size=3)
            c = numpy.argmax(input)
            pred = self.myComponent.classify(A(input))
            if c!=pred: err += 1
            total += 1

        assert err < 10, str(err)+": Percentage of error is high in " +  self.myClassName +'(' +self.myName + ')';

    def testtrain(self):
        errorstring ='train failed in {component \"'+ self.myClassName +'(' +self.myName+ ')\"}';
        #pdb.set_trace();
        model=ocropus.load_IModel("test.model");
        A = iulib.narray;
        ds=ocropus.make_IExtDataset("rowdataset8");
        for i in range(1000):
            input = numpy.random.uniform(0.0,1.0,size=3)
            c = iulib.argmax(A(input))
            ds.add(A(input),c);

        model.train(ds)
        assert model.nfeatures()==model.nclasses() and model.nfeatures()==3, errorstring

    #Dont know how to test this one.
    #def testcopy(self):


    #finally delete the test model
    def testzzz(self):
        os.remove("test.model")        

    #test pget and pset are not tested as no parameters are exposed for Isegment.

class Testmlp(TestIModel):
    myName = "mlp";
    myname = "mlp";
    myClassName = "IModel";
    myComponent = ocropus.make_IModel(myName);
    myFileName = 0;
    myDescription = "N8glinerec17AutoMlpClassifierE";
    myclasses = 0;
    myfeatures = 0;
    mynmodels=0;
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

#RUN=1
suite = unittest.makeSuite(Testmlp,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);
#RUN=0


class Testcmlp(TestIModel):
    myName = "cmlp";
    myname = "cmlp";
    myClassName = "IModel";
    myComponent = ocropus.make_IModel(myName);
    myFileName = 0;
    myDescription = "N8glinerec11CascadedMLPE";
    myclasses = 0;
    myfeatures = 0;
    mynmodels=0;
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

#RUN=1
suite = unittest.makeSuite(Testcmlp,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);
#RUN=0

class Testlatin(TestIModel):
    myName = "latin";
    myname = "latin";
    myClassName = "IModel";
    myComponent = ocropus.make_IModel(myName);
    myFileName = 0;
    myDescription = "N8glinerec15LatinClassifierE";
    myclasses = 0;
    myfeatures = 0;
    mynmodels=2;
    myComponent.pset("junkchar",2);
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

#RUN=1
suite = unittest.makeSuite(Testlatin,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);
#RUN=0

class Testbit(TestIModel):
    myName = "bit";
    myname = "bit";
    myClassName = "IModel";
    myComponent = ocropus.make_IModel(myName);
    myFileName = 0;
    myDescription = "N8glinerec5BitNNE";
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

#RUN=1
suite = unittest.makeSuite(Testbit,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);
#RUN=0

#Disable the following. TODO need to debug these.
RUN=0
class Testknn(TestIModel):
    myName = "knn";
    myname = "knn";
    myClassName = "IModel";
    myComponent = ocropus.make_IModel(myName);
    myFileName = 0;
    myDescription = "N8glinerec13KnnClassifierE";
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

#RUN=1 # gives out narray error. Need to fix it
suite = unittest.makeSuite(Testknn,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);
#RUN=0

class Testadaboost(TestIModel):
    myName = "adaboost";
    myname = "adaboost";
    myClassName = "IModel";
    myComponent = ocropus.make_IModel(myName);
    myFileName = 0;
    myDescription = "N8glinerec8AdaBoostE";
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

#RUN=1 #updateModel not implemented, train and updateModel fials, 
suite = unittest.makeSuite(Testadaboost,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);
#RUN=0

class Testavgclass(TestIModel):
    myName = "avgclass";
    myname = "avgclass";
    myClassName = "IModel";
    myComponent = ocropus.make_IModel(myName);
    myFileName = 0;
    myDescription = "N8glinerec19AveragingClassifierE";
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

#RUN=1 # Says insufficient data for 1k data.
suite = unittest.makeSuite(Testavgclass,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);
#RUN=0

class Testboosted(TestIModel):
    myName = "boosted";
    myname = "mapped";
    myClassName = "IModel";
    myComponent = ocropus.make_IModel(myName);
    myFileName = 0;
    myDescription = "N8glinerec16MappedClassifierE";
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

#RUN=1 # gives segfault mapped 
suite = unittest.makeSuite(Testboosted,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);
#RUN=0


class Testcascadedmlp(TestIModel):
    myName = "cascadedmlp";
    myname = "mapped";
    myClassName = "IModel";
    myComponent = ocropus.make_IModel(myName);
    myFileName = 0;
    myDescription = "N8glinerec16MappedClassifierE";
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

#RUN=1 # gives seg fault.
suite = unittest.makeSuite(Testcascadedmlp,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);
#RUN=0



class Testfloat8buffer(TestIModel):
    myName = "float8buffer";
    myname = "float8buffer";
    myClassName = "IModel";
    myComponent = ocropus.make_IModel(myName);
    myFileName = 0;
    myDescription = "N8glinerec12Float8BufferE";
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

#RUN=1 #This DOES NOT RUN. Need to check if it is classifier.
suite = unittest.makeSuite(Testfloat8buffer,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);
#RUN=0


class Testmappedmlp(TestIModel):
    myName = "mappedmlp";
    myname = "mapped";
    myClassName = "IModel";
    myComponent = ocropus.make_IModel(myName);
    myFileName = 0;
    myDescription = "N8glinerec16MappedClassifierE";
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

#RUN=1 # gives segfault mapped 
suite = unittest.makeSuite(Testmappedmlp,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);
#RUN=0

class Testmapped(TestIModel):
    myName = "mapped";
    myname = "mapped";
    myClassName = "IModel";
    myComponent = ocropus.make_IModel(myName);
    myFileName = 0;
    myDescription = "N8glinerec16MappedClassifierE";
    #def setUp(self):
        #print ("Running tests for component " + self.myClassName +" type " + self.myName);

#RUN=1 # gives segfault mapped 
suite = unittest.makeSuite(Testmapped,'test')
runner = unittest.TextTestRunner()
if RUN: runner.run(suite);
#RUN=0

