/* -*- C++ -*- */

/* This is a binding of narray to Python that allows NumPy arrays
   to be passed by reference.  It's not used right now because
   there are a bunch of corner cases that are a bit hard to fix
   and I don't want to support this right now.  For now, use
   explicit conversions. */

#ifdef SWIGPYTHON

%module _narray

%{
#include "numpy/arrayobject.h"
%}

%init %{
// needed to make PyArray_Check work (=not crash)
import_array();
%}

%{
    int pyarray_typenum(unsigned char*) {
        return PyArray_UBYTE;
    }
    int pyarray_typenum(short*) {
        return PyArray_SHORT;
    }
    int pyarray_typenum(int*) {
        return PyArray_INT;
    }
    int pyarray_typenum(float*) {
        return PyArray_FLOAT;
    }
    template <class T> struct pyarray : public narray<T> {
        typedef narray<T> B;
        int dummy;
        PyArrayObject *obj;
        void pysync() {
            if(obj->descr->type_num!=pyarray_typenum(B::data)) throw "array is of the wrong type";
            if(!(obj->flags&NPY_CONTIGUOUS)) throw "array is not contiguous";
            if(!(obj->flags&NPY_WRITEABLE)) throw "array is not writable";
            if(obj->nd<1) throw "rank <1";
            if(obj->nd>4) throw "rank >4";
            B::data = (T*)obj->data;
            B::total = 1;
            for(int i=0;i<obj->nd;i++) {
                B::dims[i] = obj->dimensions[i];
                B::total *= obj->dimensions[i];
            }
            B::allocated = B::total;
            B::dims[obj->nd] = 0;
        }

        pyarray(PyArrayObject *obj) {
            fprintf(stderr,"creating PyArrayObject proxy %p\n",obj);
            // Py_INCREF(obj);
            this->obj = obj;
            pysync();
        }

        virtual ~pyarray() {
            fprintf(stderr,"destroying PyArrayObject proxy %p\n",obj);
            // Py_DECREF(obj);
            obj = 0;
            B::data = 0;
            B::total = 0;
            B::allocated = 0;
        }

        // initialize an object from scratch

        virtual void init_() {
            B::data = 0;
            for(int i=0;i<5;i++) B::dims[i] = 0;
            B::total = 0;
            B::allocated = 0;
        }

        // change the dimensions of the object; this never allocates storage;
        // the resulting size can be smaller than the actual size

        virtual void setdims_(index_t d0,index_t d1=0,index_t d2=0,index_t d3=0) {
            int dims[5] = {d0,d1,d2,d3,0};
            PyArray_Dims shape;
            shape.ptr = dims;
            shape.len = d3?4:d2?3:d1?2:d0?1:0;
            PyArrayObject *nobj = (PyArrayObject*)PyArray_Resize(obj,&shape,1,PyArray_CORDER);
            if(!nobj) throw "resize failed";
            pysync();
        }

        // allocate space for an array with the given dimensions

        virtual void alloc_(index_t d0,index_t d1=0,index_t d2=0,index_t d3=0) {
            int dims[5] = {d0,d1,d2,d3,0};
            PyArray_Dims shape;
            shape.ptr = dims;
            shape.len = d3?4:d2?3:d1?2:d0?1:0;
            PyArrayObject *nobj = (PyArrayObject*)PyArray_Resize(obj,&shape,1,PyArray_CORDER);
            if(!nobj) throw "resize failed";
            pysync();
        }

        // deallocate all the space associated with the object

        virtual void dealloc() {
            int dims[5] = {1,0};
            PyArray_Dims shape;
            shape.ptr = dims;
            shape.len = 1;
            PyArrayObject *nobj = (PyArrayObject*)PyArray_Resize(obj,&shape,1,PyArray_CORDER);
            if(!nobj) throw "resize failed";
            pysync();
        }

        // resize the array in place, possibly destroying the data

        virtual narray<T> &resize(index_t d0,index_t d1=0,index_t d2=0,index_t d3=0) {
            int dims[5] = {d0,d1,d2,d3,0};
            PyArray_Dims shape;
            shape.ptr = dims;
            shape.len = d3?4:d2?3:d1?2:d0?1:0;
            PyArrayObject *nobj = (PyArrayObject*)PyArray_Resize(obj,&shape,1,PyArray_CORDER);
            if(!nobj) throw "resize failed";
            pysync();
            return *this;
        }

        // reserve space so that there is space for the given number
        // of elements

        virtual void reserve(index_t n) {
            int dims[5] = {n,0};
            PyArray_Dims shape;
            shape.ptr = dims;
            shape.len = 1;
            PyArrayObject *nobj = (PyArrayObject*)PyArray_Resize(obj,&shape,1,PyArray_CORDER);
            if(!nobj) throw "resize failed";
            pysync();
        }

        virtual void move(narray<T> &src) {
            throw "unimplemented";
        }

        virtual void swap(narray<T> &src) {
            throw "unimplemented";
        }
    };
%}


%clear bytearray&;

%typemap(typecheck,precedence=100) bytearray& {
    /* bytearray-typecheck */
    void *argp;
    $1 = 0;
    if(SWIG_ConvertPtr($input,&argp,SWIGTYPE_p_narrayT_unsigned_char_t,0 )!=-1) {
        $1 = 1;
    }
    else if($input && PyArray_Check($input)) {
        if(((PyArrayObject*)$input)->descr->type_num==PyArray_UBYTE)
            $1 = PyArray_ISCARRAY($input);
    }
}

%typemap(in) bytearray& {
    /* bytearray-typemap */
    void *argp = 0;
    if(SWIG_ConvertPtr($input,&argp,SWIGTYPE_p_narrayT_unsigned_char_t,0 )!=-1) {
        bytearray *arg = reinterpret_cast<bytearray*>(argp);
        $1 = arg;
    }
    else if($input && PyArray_Check($input)) {
        try {
            $1 = new pyarray<unsigned char>((PyArrayObject*)$input);
        } catch(const char *err) {
            PyErr_SetString(PyExc_ValueError,err);
            $1 = NULL;
            return NULL;
        } catch(...) {
            PyErr_SetString(PyExc_ValueError,"unknown exception during pyarray<> creation");
            $1 = NULL;
            return NULL;
        }
    }
}

%typemap(freearg) bytearray& {
    pyarray<unsigned char> *arg = dynamic_cast<pyarray<unsigned char>*>($1);
    if(arg) delete arg;
}

%apply bytearray& { narray<unsigned char> & }

%clear intarray&;

%typemap(typecheck,precedence=100) intarray& {
    /* intarray-typecheck */
    void *argp;
    $1 = 0;
    if(SWIG_ConvertPtr($input,&argp,SWIGTYPE_p_narrayT_int_t,0 )!=-1) {
        $1 = 1;
    }
    else if($input && PyArray_Check($input)) {
        if(((PyArrayObject*)$input)->descr->type_num==PyArray_INT)
            $1 = PyArray_ISCARRAY($input);
    }
}

/* Convert from Python --> C */
%typemap(in) intarray& {
    /* intarray-typemap */
    void *argp = 0;
    if(SWIG_ConvertPtr($input,&argp,SWIGTYPE_p_narrayT_float_t,0 )!=-1) {
        intarray *arg = reinterpret_cast<intarray*>(argp);
        $1 = arg;
    }
    else if($input && PyArray_Check($input)) {
        try {
            $1 = new pyarray<int>((PyArrayObject*)$input);
        } catch(const char *err) {
            PyErr_SetString(PyExc_ValueError,err);
            $1 = NULL;
            return NULL;
        } catch(...) {
            PyErr_SetString(PyExc_ValueError,"unknown exception during pyarray<> creation");
            $1 = NULL;
            return NULL;
        }
    }
}

%typemap(freearg) intarray& {
    pyarray<int> *arg = dynamic_cast<pyarray<int>*>($1);
    if(arg) delete arg;
}

%apply intarray& { narray<int> & }

%clear floatarray&;

%typemap(typecheck,precedence=100) floatarray& {
    /* floatarray-typecheck */
    void *argp;
    $1 = 0;
    if(SWIG_ConvertPtr($input,&argp,SWIGTYPE_p_narrayT_float_t,0 )!=-1) {
        $1 = 1;
    }
    else if($input && PyArray_Check($input)) {
        if(((PyArrayObject*)$input)->descr->type_num==PyArray_FLOAT)
            $1 = PyArray_ISCARRAY($input);
    }
}

/* Convert from Python --> C */
%typemap(in) floatarray& {
    /* floatarray-typemap */
    void *argp = 0;
    if(SWIG_ConvertPtr($input,&argp,SWIGTYPE_p_narrayT_float_t,0 )!=-1) {
        floatarray *arg = reinterpret_cast<floatarray*>(argp);
        $1 = arg;
    }
    else if($input && PyArray_Check($input)) {
        try {
            $1 = new pyarray<float>((PyArrayObject*)$input);
        } catch(const char *err) {
            PyErr_SetString(PyExc_ValueError,err);
            $1 = NULL;
            return NULL;
        } catch(...) {
            PyErr_SetString(PyExc_ValueError,"unknown exception during pyarray<> creation");
            $1 = NULL;
            return NULL;
        }
    }
}

%typemap(freearg) floatarray& {
    pyarray<float> *arg = dynamic_cast<pyarray<float>*>($1);
    if(arg) delete arg;
}

%apply floatarray& { narray<float> & }

%inline %{
    template <class T,class S> void copy(narray<T> &dest,narray<S> &src) {
        dest.copy(src);
    }
    %}

%template(copy) copy<float,float>;
%template(copy) copy<int,int>;
%template(copy) copy<unsigned char,unsigned char>;

#endif
