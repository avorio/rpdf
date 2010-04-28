import iulib
image = iulib.bytearray()

iulib.read_image_gray(image,"test.jpg")
print image.dim(0),image.dim(1)

fimage = iulib.floatarray()
fimage.copy(image)
gradm = iulib.floatarray()
iulib.canny(gradm,fimage,3.0,3.0)
m = iulib.absmax(gradm)
print m
iulib.mul(gradm,255.0/m)

image.copy(gradm)

iulib.write_image_gray("out.png",image)
