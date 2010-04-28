# CFLAGS=-g +Wstrict-aliasing +Wuninitialized -O1
# CXXFLAGS=-g +Wstrict-aliasing +Wuninitialized -O1 # -O0 -fno-inline
INC=/usr/local/include
PYINC=/usr/include/python2.6
SDL=-lSDL -lSDL_gfx -lSDL_image
UNUSED=-ltesseract_full -llept -lgsl -lblas
LIBS=-ltiff -lpng -ljpeg -lm $(SDL) 

setup: clean
	python setup.py build
	sudo python setup.py install

all: _iulib.so _ocropus.so

_iulib.so: iulib.i
	swig -I$(INC) -python -c++ iulib.i
	echo compiling
	g++ $(CXXFLAGS) -fPIC -I$(INC) -I$(PYINC) -shared iulib_wrap.cxx \
	    -o _iulib.so -liulib $(LIBS)

_ocropus.so: ocropus.i
	swig -I$(INC) -python -c++ ocropus.i
	echo compiling
	g++ $(CXXFLAGS) -fPIC -I$(INC) -I$(PYINC) -fopenmp -shared \
	    ocropus_wrap.cxx -o _ocropus.so -locropus -liulib $(LIBS)

clean:
	rm -rf *.so *.cxx *.o iulib.py ocropus.py *_wrap.cpp *_wrap.h *_wrap.cxx build *.pyc *.err *~

test:
	python test.py
	python test2.py
	python test3.py
	python test-iulib.py	
	python test-ocropus.py	
