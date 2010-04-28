import iulib
from numpy import *
data = array([1,77,3],'f')
na = iulib.floatarray()
print "*** copying ***"
na.copy(data)
print na,na.dim(0)
for i in range(3): print na.at(i),
print
iulib.neg(data)
print data
iulib.add(data,1.0)
print data

out = array([1],'f')
iulib.copy(out,data)
print out
