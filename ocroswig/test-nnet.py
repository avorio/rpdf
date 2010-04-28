from numpy import *
import iulib,ocropus
A = iulib.narray

mlp = ocropus.make_IModel("mlp")

for i in range(10000):
    input = random.uniform(0.0,1.0,size=10)
    c = argmax(input)
    mlp.add(A(input),int(c))

mlp.pset("rounds",10)
mlp.updateModel()
ocropus.save_component("test.model",mlp)
mlp = None

mlp2 = ocropus.load_IModel("test.model")
mlp2.info()

err = 0
total = 0

for i in range(10000):
    input = random.uniform(0.0,1.0,size=10)
    c = argmax(input)
    pred = mlp2.classify(A(input))
    if c!=pred: err += 1
    total += 1

print "error",err,total,err*1.0/total

