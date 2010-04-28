// -*- C++ -*-

%{
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#pragma GCC diagnostic ignored "-Wuninitialized"
%}

%module ocropus
%include "typemaps.i"
%include "cstring.i"
%{
#include <malloc.h>
#include <string.h>
#include <colib/checks.h>
#include <colib/narray.h>
#include <colib/narray-ops.h>
#include <colib/narray-util.h>
#include <iulib/iulib.h>
#include <iulib/imgio.h>
#include <ocropus/ocropus.h>
#include <ocropus/glinerec.h>
#include <ocropus/glclass.h>
#include <ocropus/glfmaps.h>
#include <ocropus/gldataset.h>
#include <ocropus/ocr-pfst.h>
#include <ocropus/ocr-utils.h>
#include <ocropus/docproc.h>

using namespace colib;
using namespace iulib;
using namespace narray_ops;
using namespace ocropus;
using namespace glinerec;
%}
%import iulib.i

#ifdef SWIGPYTHON
%exception {
    try {
        $action
    }
    catch(const char *s) {
        PyErr_SetString(PyExc_IndexError,s);
        return NULL;
    }
    catch(...) {
        PyErr_SetString(PyExc_IndexError,"unknown exception in iulib");
        return NULL;
    }
}
#endif

struct OutputVector {
    int len;
    intarray keys;
    floatarray values;
    OutputVector();
    OutputVector(int n);
    void clear();
    void copy(floatarray &v,float eps=1e-11);
    int length();
    int dim(int i);
    float &operator()(int index);
    void operator/=(float value);
    int argmax();
    float max();
    floatarray as_array();
    void as_array(floatarray &result);
    int nkeys();
    int key(int i);
    float value(int i);
};

float sum(OutputVector &v);
void ctranslate_vec(OutputVector &v,intarray &translation);

%feature("director") IComponent;
struct IComponent {
    IComponent();
    virtual void reinit();
    virtual const char *name() = 0; // FIXME -- making this non-abstract makes things fail
    virtual const char *description();
    virtual const char *interface();
%rename(print_) print;
    virtual void print();
    virtual void info(int depth=0,FILE *stream=stdout);
    virtual void save(FILE *stream);
    virtual void load(FILE *stream);
    virtual void save(const char *path);
    virtual void load(const char *path);
    void pdef(const char *name,const char *value,const char *doc);
    void pdef(const char *name,double value,const char *doc);
    void pdef(const char *name,int value,const char *doc);
    void pdef(const char *name,bool value,const char *doc);
    virtual bool pexists(const char *name);
    virtual void pset(const char *name,const char *value);
    virtual void pset(const char *name,double value);
    void pset(const char *name,int value);
    void pset(const char *name,bool value);
    const char *pget(const char *name);
    double pgetf(const char *name);
    void psave(FILE *stream);
    void pload(FILE *stream);
    void pprint(FILE *stream=stdout,int depth=0);
    virtual ~IComponent();
    virtual const char *command(const char **argv);
    virtual const char *command(const char *cmd, const char *arg1=0, const char *arg2=0, const char *arg3=0);
    int plength();
    const char *pname(int i);
    IComponent *persist_get(const char *);
    int persist_length();
    const char *persist_name(int i);
    void persist_set(const char *,IComponent *);
    void persist_init(const char *,const char *);
    void persist_pset(const char *,const char *,const char *);
    const char *persist_pget(const char *,const char *);
    double persist_pgetf(const char *,const char *);
};

%feature("director") ICleanupGray;
struct ICleanupGray : IComponent {
    ICleanupGray();
    virtual void cleanup_gray(bytearray &out,bytearray &in);
};

%feature("director") ICleanupBinary;
struct ICleanupBinary : IComponent {
    virtual void cleanup(bytearray &out,bytearray &in);
};

%feature("director") ITextImageClassification;
struct ITextImageClassification : IComponent {
    virtual void textImageProbabilities(intarray &out,bytearray &in);
};

%feature("director") IBinarize;
struct IBinarize : IComponent {
    virtual void binarize(bytearray &out,bytearray &in);
    virtual void binarize(bytearray &out,bytearray &gray,bytearray &in);
};

%feature("director") ISegmentPage;
struct ISegmentPage : IComponent {
    virtual void segment(intarray &out,bytearray &in);
    virtual void segment(intarray &out,bytearray &in,rectarray &obstacles);
};

%feature("director") ISegmentLine;
struct ISegmentLine : IComponent {
    virtual void charseg(intarray &out,bytearray &in);
};

%feature("director") IGenericFst;
struct IGenericFst : virtual IComponent {
    virtual void clear() = 0;
    virtual int newState();
    virtual void addTransition(int from,int to,int output,float cost,int input);
    virtual void addTransition(int from,int to,int symbol,float cost);
    virtual void setStart(int node);
    virtual void setAccept(int node,float cost=0.0);
    virtual int special(const char *s);
    virtual void bestpath(ustrg &result);
    virtual ~IGenericFst();
    virtual void setString(ustrg &text,floatarray &costs,intarray &ids);
    virtual int nStates();
    virtual int getStart();
    virtual float getAcceptCost(int node);
    virtual bool isAccepting(int node);
    virtual void getTransitions(intarray &tos,intarray &symbols,floatarray &costs,intarray &inputs,int from);
    virtual void rescore(int from,int to,int output,float new_cost,int input);
    virtual void rescore(int from, int to, int symbol, float new_cost);
    virtual void load(const char *file);
    virtual void save(const char *file);
};

#if 0
struct ICharacterClassifier : IComponent {
    virtual void setImage(bytearray &input_image) = 0;
    virtual void setImage(bytearray &image,int base_y, int xheight_y, int descender_y, int ascender_y);
    virtual int length();
    virtual void cls(nustring &result, int i);
    virtual float cost(int i);
    virtual void startTraining(const char *type="adaptation");
    virtual void addTrainingChar(bytearray &input_image,nustring &characters);
    virtual void addTrainingChar(bytearray &image,int base_y, int xheight_y, int descender_y, int ascender_y,nustring &characters);
    virtual void addTrainingChar(bytearray &image,bytearray &mask,nustring &characters);
    virtual void finishTraining();
    virtual void save(FILE *stream);
    void save(const char *path);
    virtual void load(FILE *stream);
    void load(const char *path);
    virtual void best(nustring &result);
    virtual ~ICharacterClassifier();
};
#endif

%feature("director") IRecognizeLine;
struct IRecognizeLine : IComponent {
    virtual void recognizeLine(IGenericFst &result,bytearray &image) = 0;
    virtual void startTraining(const char *type="adaptation");
    virtual void addTrainingLine(bytearray &image,nustring &transcription);
    virtual void addTrainingLine(intarray &segmentation, bytearray &image_grayscale, nustring &transcription);
    virtual void align(nustring &chars,intarray &seg,floatarray &costs, bytearray &image,IGenericFst &transcription);
    virtual void finishTraining();
    virtual void save(FILE *stream);
    void save(const char *path);
    virtual void load(FILE *stream);
    void load(const char *path);
    virtual ~IRecognizeLine();
    virtual void recognizeLine(intarray &segmentation,IGenericFst &result,bytearray &image);
};

%feature("director") IDataset;
struct IDataset : IComponent {
    virtual int nsamples() = 0;
    virtual int nclasses() = 0;
    virtual int nfeatures() = 0;
    virtual void input(floatarray &v,int i) = 0;
    virtual int cls(int i) = 0;
    virtual int id(int i) = 0;
};

%feature("director") IExtDataset;
struct IExtDataset : IDataset {
    virtual void add(floatarray &v,int c);
    virtual void add(floatarray &ds,intarray &cs);
    virtual void clear();
};

%feature("director") IExtractor;
struct IExtractor : virtual IComponent {
    virtual void extract(narray<floatarray> &out,floatarray &in);
    virtual void extract(floatarray &out,floatarray &in);
    virtual void extract(bytearray &out,bytearray &in);
};

%rename(train) IModel::xtrain;
%rename(outputs) IModel::xoutputs;
%rename(add) IModel::xadd;

%feature("director") IModel;
struct IModel : IComponent {
    virtual int nfeatures();
    virtual int nclasses();
    virtual void setExtractor(const char *);
    virtual IExtractor *getExtractor();
    virtual void xtrain(IDataset &dataset);
    virtual float xoutputs(OutputVector &result,floatarray &v);
    virtual void xadd(floatarray &v,int c);
    virtual void updateModel();
    virtual void copy(IModel &);
    virtual int nprotos();
    virtual void getproto(floatarray &v,int i,int variant);
    virtual int nmodels();
    virtual void setModel(IModel *,int i);
    virtual IComponent &getModel(int i);
    virtual int classify(floatarray &v);
};

%pythoncode %{
def IModel_ord(self,cls):
    """Convert a string into an integer.  Multicharacter ASCII strings
    are converted into large integers that are different from regular
    Unicode characters."""
    c = None
    if len(cls)==1:
        c = ord(cls)
    elif len(cls)==2:
        c = 0x01000000 + ord(cls[0])*0x100 + ord(cls[1])
    elif len(cls)==3:
        c = 0x01000000 + ord(cls[0])*0x10000 + ord(cls[1])*0x100 + ord(cls[2])
    else:
        raise Exception("multi_ord only works for len=1...3")
    return c

def IModel_chr(self,c):
    """Convert an integer returned by multi_ord back into a string."""
    if c<256: return chr(c)
    if c&0xff000000!=0x01000000:
        raise Exception("bad multi_chr decoding")
    if c&0x00ff0000:
        return chr((c&0xff0000) / 0x10000) + \
               chr((c&0xff00) / 0x100) + \
               chr(c&0xff)
    else:
        return chr((c&0xff00) / 0x100) + \
               chr(c&0xff)


def IModel_cadd(self,v,cls):
    """Add a training example; the class is a character
    string."""
    self.add(v,self.ord(cls))

def IModel_coutputs(self,v):
    """Compute the outputs from the classifier; the return
    value is a list of (string,probability) pairs."""
    out = OutputVector()
    self.outputs(out,v);
    result = []
    for i in range(out.nkeys()):
        result.append((self.chr(out.key(i)),out.value(i)))
    return result

def IModel_cclassify(self,v):
    """Compute the outputs from the classifier; the return
    value is a list of (string,probability) pairs."""
    c = self.classify(v)
    return self.chr(c)

### Add these convenience methods to the IModel class.

IModel.ord = IModel_ord
IModel.chr = IModel_chr
IModel.cadd = IModel_cadd
IModel.coutputs = IModel_coutputs
IModel.cclassify = IModel_cclassify
%}

struct IGrouper : IComponent {
    virtual void setSegmentation(intarray &segmentation) = 0;
    virtual void setCSegmentation(intarray &segmentation) = 0;
    virtual int length() = 0;
    virtual void getMask(rectangle &r,bytearray &mask,int i,int margin) = 0;
    virtual void getMaskAt(bytearray &mask,int index,rectangle &b) = 0;
    virtual rectangle boundingBox(int i) = 0;
    virtual int start(int index) = 0;
    virtual int end(int index) = 0;
    virtual void getSegments(intarray &result,int index) = 0;
    virtual void extractWithMask(bytearray &out,bytearray &mask,
                         bytearray &source,int i,int grow=0) = 0;
    virtual void extract(bytearray &out,bytearray &source,
                         byte dflt,int i,int grow=0) = 0;
    virtual void extractWithMask(floatarray &out,bytearray &mask,
                         floatarray &source,int i,int grow=0) = 0;
    virtual void extract(floatarray &out,floatarray &source,
                         float dflt,int i,int grow=0) = 0;
    virtual void extractSliced(bytearray &out,bytearray &mask,
                               bytearray &source,int index,int grow=0) = 0;
    virtual void extractSliced(bytearray &out,bytearray &source,
                               byte dflt,int index,int grow=0) = 0;
    virtual void extractSliced(floatarray &out,bytearray &mask,
                               floatarray &source,int index,int grow=0) = 0;
    virtual void extractSliced(floatarray &out,floatarray &source,
                               float dflt,int index,int grow=0) = 0;
    void setClass(int i,int cls,float cost);
    virtual void setClass(int i,ustrg &cls,float cost) = 0;
    virtual int pixelSpace(int i) = 0;
    virtual void setSpaceCost(int index,float yes,float no) = 0;
    virtual void getLattice(IGenericFst &fst) = 0;
    // optional ground truth related methods
    virtual void setSegmentationAndGt(intarray &segmentation,intarray &cseg,ustrg &text) {
        throw Unimplemented();
    }
    virtual int getGtIndex(int index) { throw Unimplemented(); }
    virtual int getGtClass(int index) { throw Unimplemented(); }

};

struct OmpClassifier {
    void clear();
    void classify();
    int input(floatarray &a);
    void output(OutputVector &ov,int i);
    void load(const char *file);
};

// IModel *make_model(const char *name);
%newobject make_component;
template <class T> T *make_component(const char *name);
%template(make_ICleanupGray) make_component<ICleanupGray>;
%template(make_ICleanupBinary) make_component<ICleanupBinary>;
%template(make_ITextImageClassification) make_component<ITextImageClassification>;
%template(make_IRecognizeLine) make_component<IRecognizeLine>;
%template(make_IBinarize) make_component<IBinarize>;
%template(make_ISegmentPage) make_component<ISegmentPage>;
%template(make_ISegmentLine) make_component<ISegmentLine>;
%template(make_IExtractor) make_component<IExtractor>;
%template(make_IModel) make_component<IModel>;
%template(make_IComponent) make_component<IComponent>;
%template(make_IDataset) make_component<IDataset>;
%template(make_IExtDataset) make_component<IExtDataset>;
%template(make_IFeatureMap) make_component<IFeatureMap>;
%template(make_IGrouper) make_component<IGrouper>;
%template(make_IDistComp) make_component<IDistComp>;

// void save_component(FILE *stream,IComponent *component);
// IComponent *load_component(FILE *stream);

// TODO check that these actually work for the inline functions below
%newobject load_linerec;

%inline %{
    void save_component(const char *file,IComponent *component) {
        stdio stream(file,"wb");
        save_component(stream,component);
    }
    namespace glinerec {
        IRecognizeLine *make_Linerec();
    }
    IRecognizeLine *load_linerec0(const char *file) {
        autodel<IRecognizeLine> result;
        result = make_Linerec();
        if(!result) throw "couldn't allocate linerec";
        stdio stream(file,"rb");
        result->load(stream);
        return result.move();
    }
    template <class T>
    T *load_component_(const char *file) {
        stdio stream(file,"rb");
        IComponent *component = load_component(stream);
        if(!component) throwf("%s: failed to load component");
        T *result = dynamic_cast<T*>(component);
        if(!result) {
            throwf("loaded component of wrong type (%s)\n",component->name());
            delete component;
        }
        return result;
    }
    namespace glinerec {
        IRecognizeLine *make_Linerec();
    }
    //IRecognizeLine *load_linerec(const char *file) {
    //    autodel<IRecognizeLine> result;
    //    result = make_Linerec();
    //    if(!result) throw "couldn't allocate linerec";
    //    stdio stream(file,"rb");
    //    result->load(stream);
    //    return result.move();
    //}
%}

%newobject load_component_;
template <class T> T *load_component_(const char *name);
%template(load_ICleanupGray) load_component_<ICleanupGray>;
%template(load_ICleanupBinary) load_component_<ICleanupBinary>;
%template(load_ITextImageClassification) load_component_<ITextImageClassification>;
/* %template(load_ICharacterClassifier) %load_component_<ICharacterClassifier>; */
%template(load_IRecognizeLine) load_component_<IRecognizeLine>;
%template(load_IBinarize) load_component_<IBinarize>;
%template(load_ISegmentPage) load_component_<ISegmentPage>;
%template(load_ISegmentLine) load_component_<ISegmentLine>;
%template(load_IExtractor) load_component_<IExtractor>;
%template(load_IModel) load_component_<IModel>;
%template(load_IComponent) load_component_<IComponent>;
%template(load_IDataset) load_component_<IDataset>;
%template(load_IFeatureMap) load_component_<IFeatureMap>;
%template(load_IGrouper) load_component_<IGrouper>;
IRecognizeLine *load_linerec(const char *file);

/* This code is there to make pickling/unpickling work in Python.
   We have to write the object to a temporary disk file, then
   read that back in, and then let the pickler take over.
   Finding the constructor is kind of tricky and relies on
   the naming conventions used in OCRopus.  That is, we
   assume there is a make_INTERFACE(component_name) function. */


%pythoncode
%{
def IComponent_create(constructor_name,component_name,data):
    print "[creating",constructor_name,component_name,len(data),"]"
    object = eval(constructor_name)(component_name)
    with NamedTemporaryFile() as file:
        file.write(data)
        file.flush()
        object.load(file.name)
    return object

from tempfile import NamedTemporaryFile
import ocropus

def IComponent_reduce(self):
    t = type(self)
    constructor_name = t.__module__+".make_"+t.__name__
    assert eval(constructor_name,globals(),{}) is not None
    with NamedTemporaryFile() as file:
        file.close() # we just need the name
        self.save(file.name)
        with open(file.name,"r") as stream:
            data = stream.read()
    return (IComponent_create,(constructor_name,self.name(),data,),)

import new
IComponent.__reduce__ = new.instancemethod(IComponent_reduce,None,IComponent)
%}

enum {
    L_SIGMA = -4,
    L_RHO = -3,
    L_PHI = -2,
    L_EPSILON = 0,
};

struct OcroFST : IGenericFst {
};

OcroFST *make_OcroFST();
void make_line_segmentation_black(intarray &a);

void scale_fst(OcroFST &,float);


%inline %{
    double beam_search(ustrg &s,IGenericFst &u,IGenericFst &v,int n) {
        OcroFST *uo = dynamic_cast<OcroFST*>(&u);
        CHECK(uo!=0);
        OcroFST *vo = dynamic_cast<OcroFST*>(&v);
        CHECK(vo!=0);
        return beam_search(s,*uo,*vo,n);
    }
    void beam_search(intarray &v1,intarray &v2,intarray &ins,intarray &outs,floatarray &costs,IGenericFst &u,IGenericFst &v,int n) {
        OcroFST *uo = dynamic_cast<OcroFST*>(&u);
        CHECK(uo!=0);
        OcroFST *vo = dynamic_cast<OcroFST*>(&v);
        CHECK(vo!=0);
        beam_search(v1,v2,ins,outs,costs,*uo,*vo,n);
    }
%}

struct RegionExtractor {
    void setImage(intarray &image);
    void setImageMasked(intarray &image,int mask,int lo,int hi);
    void setPageColumns(intarray &image);
    void setPageParagraphs(intarray &image);
    void setPageLines(intarray &image);
    int length();
    rectangle bbox(int i);
    int id(int i);
    int x0(int i);
    int y0(int i);
    int x1(int i);
    int y1(int i);
    void extract(bytearray &output,bytearray &input,int index,int margin=0);
    void mask(bytearray &output,int index,int margin=0);
    void extract_masked(bytearray &output,bytearray &input,int index,int grow,int bgvalue,int margin=0);
};

struct IFeatureMap : IComponent {
    virtual void setLine(bytearray &image) = 0;
    virtual void extractFeatures(floatarray &v,
                                 rectangle b,
                                 bytearray &mask) = 0;
};

struct IDistComp : IModel {
    virtual void add(floatarray &obj);
    virtual void distances(floatarray &ds,floatarray &obj);
    virtual void merge(int i,floatarray &obj,float weight);
    virtual int counts(int i);
    virtual void vector(floatarray &v,int i);
    int nearest(floatarray &obj);
};

%{
    namespace ocropus {
        extern void align_segmentation(intarray &segmentation,narray<rectangle> &bboxes);
        extern void make_line_segmentation_black(intarray &);
        extern void make_line_segmentation_white(intarray &);
        extern void make_page_segmentation_black(intarray &);
        extern void make_page_segmentation_white(intarray &);
        // extern void renumber_labels(intarray &,int);
    }
%}
void align_segmentation(intarray &segmentation,rectarray &bboxes);
void make_line_segmentation_black(intarray &);
void make_line_segmentation_white(intarray &);
void make_page_segmentation_black(intarray &);
void make_page_segmentation_white(intarray &);
// void renumber_labels(intarray &,int);
void skeletal_features(bytearray &endpoints,
                       bytearray &junctions,
                       bytearray &image,
                       float presmooth=0.0,
                       float skelsmooth=0.0);
void skeletal_feature_counts(int &nendpoints,
                             int &njunctions,
                             bytearray &image,
                             float presmooth=0.0,
                             float skelsmooth=0.0);

%inline %{
    int skeletal_feature_hack(bytearray &image,
                              float presmooth=0.0,
                              float skelsmooth=0.0) {
        int ne,nj;
        skeletal_feature_counts(ne,nj,image,presmooth,skelsmooth);
        return 1000*ne+nj;
    }
%}

#if 0
struct WhitespaceCover {
    WhitespaceCover();
    WhitespaceCover(colib::rectangle image_boundary);
    ~WhitespaceCover() {}
    void init();
    const char *description();
    void clear();
    void compute(colib::rectarray &whitespaces, colib::rectarray &obstacles);
    void addRect(colib::rectangle r);
    void setMaxResults(int value);
    void setMinWeight(float value);
    void setMinWidth(float value);
    void setMinHeight(float value);
    void setBounds(int x0,int y0,int x1,int y1);
    void setVerbose(int value);
    void setGreedy(bool value);
    void setMaxOverlap(float value);
    void setAspectRange(float min,float max);
    void setLogminAspect(float m);
    void setQfunc(qfunc t);
    void snugBounds();
    int nSolutions();
    void solution(int index,int &x0,int &y0,int &x1,int &y1);
};
%extend WhitespaceCover {
    int x0(int index) {
        int x0,y0,x1,y1;
        solution(index,x0,y0,x1,y1);
        return x0;
    }
    int y0(int index) {
        int x0,y0,x1,y1;
        solution(index,x0,y0,x1,y1);
        return y0;
    }
    int x1(int index) {
        int x0,y0,x1,y1;
        solution(index,x0,y0,x1,y1);
        return x1;
    }
    int y1(int index) {
        int x0,y0,x1,y1;
        solution(index,x0,y0,x1,y1);
        return y1;
    }
    rectangle solution(int index) {
        int x0,y0,x1,y1;
        solution(index,x0,y0,x1,y1);
        return rectangle(x0,y0,x1,y1);
    }
}

WhitespaceCover *make_WhitespaceCover(colib::rectangle &r);
WhitespaceCover *make_WhitespaceCover(int x0, int y0, int x1, int y1);

#endif

%inline %{
    struct ComponentList {
    private:
        narray<const char *> names;
        narray<strg> kinds;
        narray<strg> descriptions;
        void init() {
            list_components(names);
            for(int i=0;i<names.length();i++) {
                try {
                    autodel<IComponent> p;
                    p = component_construct(names[i]);
                    kinds.push() = p->interface();
                    descriptions.push() = p->description();
                } catch(const char *err) {
                    printf("FAILED to instantiate %-32s (%s)\n",names[i],err);
                } catch(const char *err) {
                    printf("FAILED to instantiate %s: %s\n",names[i],err);
                }
            }
        };
    public:
        ComponentList() {
            init();
        }
        int length() {
            return names.length();
        }
        const char *name(int i) {
            return names[i];
        }
        const char *kind(int i) {
            return kinds[i].c_str();
        }
        const char *description(int i) {
            return descriptions[i].c_str();
        }
    };
%}

float edit_distance(ustrg &str1, ustrg &str2, float del_cost=1, float ins_cost=1, float sub_cost=1);
float edit_distance(intarray &confusion, ustrg &str1, ustrg &str2,
                    float del_cost=1, float ins_cost=1, float sub_cost=1);
float block_move_edit_cost(ustrg &from, ustrg &to, float c);
float block_move_edit_distance(ustrg &a, ustrg &b, float c);
float block_move_edit_cost_record_jumps(intarray &jumps_from,
                                        intarray &jumps_to,
                                        ustrg &from,
                                        ustrg &to, float c);
void analyze_jumps(bytearray &area_covered_by_non_jumps,
                   intarray &from, intarray &to, int source_length);
void get_text_jumped_over(ustrg &result, bytearray &covered, ustrg &text);
float edit_cost_for_layout(intarray &jumps_from, intarray &jumps_to,
                           ustrg &from, ustrg &to, float c);

/// <ocropus/docproc.h>

void count_neighbors(colib::bytearray &result,colib::bytearray &image);
void find_endpoints(colib::bytearray &result,colib::bytearray &image);
void find_junctions(colib::bytearray &result,colib::bytearray &image);
void remove_singular_points(colib::bytearray &image,int d);
void invert(bytearray &a);
int average_on_border(bytearray &a);
void optional_check_background_is_darker(bytearray &a);
void optional_check_background_is_lighter(bytearray &a);
void plot_hist(FILE *stream, floatarray &hist);
void get_line_info(float &baseline, float &xheight, float &descender, float &ascender, intarray &seg);
template <class T> void remove_small_components(narray<T> &bimage,int mw,int mh);
template <class T> void remove_marginal_components(narray<T> &bimage,int x0,int y0,int x1,int y1);
void split_string(narray<strg> &components, const char *path, const char *delimiters);
int binarize_simple(bytearray &result, bytearray &image);
int binarize_simple(bytearray &image);
void binarize_with_threshold(bytearray &out, bytearray &in, int threshold);
void binarize_with_threshold(bytearray &in, int threshold);
void runlength_histogram(floatarray &hist, bytearray &img, rectangle box, bool white=false,bool vert=false);
void runlength_histogram(floatarray &hist, bytearray &image, bool white=false, bool vert=false);
float estimate_linesize(bytearray &image,float f=0.5,float minsize=5.0);
float estimate_strokewidth(bytearray &image,float f=0.6);
float estimate_size_by_box(bytearray &image,float f=0.5);

template<class T> void rotate_90(narray<T> &out, narray<T> &in);
template<class T> void rotate_180(narray<T> &out, narray<T> &in);
template<class T> void rotate_270(narray<T> &out, narray<T> &in);
%template(rotate_90) rotate_90<byte>;
%template(rotate_90) rotate_90<int>;
%template(rotate_90) rotate_90<float>;
%template(rotate_180) rotate_180<byte>;
%template(rotate_180) rotate_180<int>;
%template(rotate_180) rotate_180<float>;
%template(rotate_270) rotate_270<byte>;
%template(rotate_270) rotate_270<int>;
%template(rotate_270) rotate_270<float>;
template <class T> void copy_rect(narray<T> &dst,int x,int y,narray<T> &src,int x0,int y0,int x1,int y1);
%template(copy_rect) copy_rect<byte>;
%template(copy_rect) copy_rect<int>;
%template(copy_rect) copy_rect<float>;

%init %{
init_ocropus_components();
init_glclass();
init_glfmaps();
init_linerec();
%}
