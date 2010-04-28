import iulib,ocropus,numpy,pdb

com=ocropus.make_IModel("latin")
A=iulib.narray;

com.pset("junkchar",2);
ds=ocropus.make_IExtDataset("rowdataset8")

for i in range(1026):
    input = numpy.random.uniform(0.0,1.0,size=3)
    c = i%3
    c=iulib.argmax(A(input))
    ds.add(A(input),c);

#print ds.nfeatures();
#print ds.nclasses();
#print ds.nsamples();
com.train(ds)

ocropus.save_component("test.model",com)
model=ocropus.load_IModel("test.model");
model.train(ds)

err=0
total=0

for i in range(60):
    input = numpy.random.uniform(0.0,1.0,size=3)
    c = i%3
    iulib.argmax(A(input))
    pred = com.classify(A(input))
    if c!=pred: err += 1
    total += 1



#from iulib import * ;
#from ocropus import * ;
#rec=make_IRecognizeLine("linerec");
#errorstr="Icomponent fails:"

#fst=make_OcroFST();
#image=bytearray();
#iimage=intarray();
#read_image_gray(image,"TestImages/line.segments.png")
#read_image_packed(iimage,"TestImages/line.segments.png");
#nustrg=nustring('University of Maine at Orono');
#ustrgout=ustrg();

#start training
#rec.startTraining("");
#make_line_segmentation_black(iimage);
#rec.addTrainingLine(iimage,image,nustrg);
#rec.finishTraining();

#now recognise the same line back
#rec.recognizeLine(fst,image);
#fst.bestpath(ustrgout)
#assert ustrgout.as_string()==nustrg.as_string(),errorstr;


#pdb.set_trace()

#for i in range(bin_image.dim(0)):
#    for j in range(bin_image.dim(1)):
#        assert (bin_image.at(i,j)==0 or bin_image.at(i,j)==255), errorstr +"Not a binary image.";

#ocropus::BinarizeByOtsu::binarize(colib::narray<unsigned char>&, colib::narray<unsigned char>&)
#ocropus::BinarizeByRange::binarize(colib::narray<unsigned char>&, colib::narray<unsigned char>&)
#ocropus::ComponentListIOWrapper<ocropus::IRecognizeLine>::load(_IO_FILE*)
#ocropus::BinarizeByRange::binarize(colib::narray<unsigned char>&, colib::narray<unsigned char>&)
#ocropus::IComponent::load(char const*)
