/* -*- C++ -*- */

/* This is a binding of narray to Python that allows NumPy arrays
   to be converted automatically by copying when passed in.
   This is probably a little too auto-magic, so for now, we're
   sticking with explicit conversion.  */

#ifdef SWIGPYTHON

%module _narray

%{
#include "numpy/arrayobject.h"
#include <stdio.h>
%}

%init %{
// needed to make PyArray_Check work (=not crash)
import_array();
%}

%{
PyArrayObject *helper_getCArrayObject( PyObject *input, int type,
                                       int minDim, int maxDim ) {
  PyArrayObject *obj;

  if (PyArray_Check( input )) {
    obj = (PyArrayObject *) input;
    if (!PyArray_ISCARRAY( obj )) {
      PyErr_SetString( PyExc_TypeError, "not a C array" );
      return NULL;
    }
    obj = (PyArrayObject *)
      PyArray_ContiguousFromAny( input, type, minDim, maxDim );
    if (!obj) return NULL;
  } else {
    PyErr_SetString( PyExc_TypeError, "not an array" );
    return NULL;
  }
  return obj;
}
%}

%typemap(typecheck,precedence=1000) floatarray& {
    void *argp;
    $1 = 0;
    if(SWIG_ConvertPtr($input,&argp,SWIGTYPE_p_narrayT_float_t,0 )!=-1) {
        $1 = 1;
    }
    else if($input && PyArray_Check($input)) {
        $1 = PyArray_ISCARRAY($input);
    }
}

/* Convert from Python --> C */
%typemap(in) floatarray& {
    void *argp = 0;
    if(SWIG_ConvertPtr($input,&argp,SWIGTYPE_p_narrayT_float_t,0 )!=-1) {
        floatarray *arg = reinterpret_cast<floatarray*>(argp);
        $1 = arg;
    }
    else if($input && PyArray_Check($input)) {
        PyArrayObject *obj = helper_getCArrayObject($input,PyArray_FLOAT,0,0);
        int total = PyArray_SIZE(obj);
        float *data = (float*)PyArray_DATA(obj);
        $1 = new floatarray();
        $1->resize(total);
        for(int i=0;i<total;i++) $1->at1d(i) = data[i];
    }
}

/* Convert from C --> Python
   Not supported, since there should be no array return values.
 */
%typemap(out) floatarray {
}

#endif
