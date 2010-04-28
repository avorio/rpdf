import iulib
from pylab import *
from numpy import *

A = iulib.narray
N = iulib.numpy

data = array([1.1,2.2,3.3],'f')
print A(data)
a = iulib.floatarray()
iulib.narray_of_numpy(a,data)
for i in range(3):
    print a.at(i),
print

a = iulib.floatarray(3)
a.put(0,11)
a.put(1,22)
a.put(2,33)
print N(a)
data = zeros(1,'f')
iulib.numpy_of_narray(data,a)
print data.shape
print data
