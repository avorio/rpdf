import iulib,numpy,pylab

image = iulib.bytearray()
iulib.read_image_gray(image,"test.jpg")
# array = numpy.fromstring(image.tostring(),dtype=numpy.uint8)
# array.shape = (image.dim(0),image.dim(1))
# array = array.transpose()[::-1,:]
array = numpy.transpose(iulib.numpy(image))[::-1]
pylab.gray()
pylab.imshow(array)
pylab.show()
