import ocropus
linerec = ocropus.load_linerec("latin3-full.model")
print "name=",linerec.name()
print "linerec.pgetf('csize')=",linerec.pgetf("csize")
