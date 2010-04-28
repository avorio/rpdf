### Simple example of MLP training in Python using the
### OCRopus neural network implementation

import sys,os,re,glob,math,glob,signal
import iulib,ocropus
from scipy.ndimage import interpolation
from pylab import *
from optparse import OptionParser

def N(a):
    """Convert a numpy array to an iulib floatarray."""
    v = iulib.floatarray()
    iulib.narray_of_numpy(v,a)
    return v

### You can get a list of available components with
### $ ocropus components
### You can get a list of available parameters with
### $ ocropus params COMPONENT

print "# creating the model"
model = ocropus.make_IModel("mlp")

### The following doesn't actually work yet for two reasons: the prefixes don't work,
### and you can't set these anymore after the class has been instantiated.  Right now,
### you can set these in the environment, though.  We're working on a fix.
### model.pset("IModel_extractor","gradientfeatures") # choose a different feature extractors
### model.pset("IBatch_cds","floatdataset") # choose a different dataset buffer

print "# adding training data"
for i in range(10000):
    # the default buffer only allows values between -1 and 1
    v = uniform(size=2)
    # the class must be a Python int (not a numpy.int64)
    c = int(v[0]>0.5)
    model.add(N(v),c)

### set some parameters
    
# model.pprint() # use this to print the available parameters
model.pset("rounds",20) # same as mlp_rounds in the environment

print "# training"
model.updateModel()

print "# saving"
ocropus.save_component("mlp-example.model",model)
model = None

### You can get information about saved models using
### $ ocropus cinfo mlp-example.model

print "# loading"
model = ocropus.load_IModel("mlp-example.model")

print "# classifying"
n = 10000
errors = 0
for i in range(n):
    # generate a test sample
    v = uniform(size=2)

    # attempt to perform classification
    ov = ocropus.OutputVector()
    model.outputs(ov,N(v))

    # outputs from the classifier are a sparse vector;
    # here we are converting it into a dense vector
    outputs = zeros(2)
    for i in range(ov.nkeys()):
        outputs[ov.key(i)] = ov.value(i)

    # now compute the true and predicted values
    true = int(v[0]>0.5)
    pred = argmax(outputs)
    # print true==pred,v,true,pred,outputs
    errors += (true!=pred)

print errors/float(n)
