print("test.lua")
print(iulib.return99())
print(iulib.return_hello())
print(iulib.plus1(99))
image = iulib.bytearray()
print("allocated")
iulib.read_image_gray(image,"test.jpg")
print("loaded")
print(image:dim(0))
print(image:dim(1))
