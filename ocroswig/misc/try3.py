import iulib
from pylab import *
from numpy import *
N = iulib.numpy

out = iulib.bytearray()
iulib.read_image_gray(out,"test.jpg")
gray()
imshow(N(out))
show()
