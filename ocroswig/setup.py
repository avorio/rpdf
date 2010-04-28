#!/usr/bin/env python

"""
setup.py file for SWIG example
"""

from distutils.core import setup, Extension

baselibs = ['tiff','png','jpeg','SDL','SDL_gfx','SDL_image','m']

iulib = Extension('_iulib',
        libraries = ['iulib']+baselibs,
        swig_opts = ["-c++","-I/usr/local/include"],
        include_dirs = ["/usr/local/include"],
        sources=['iulib.i'])

ocropus = Extension('_ocropus',
        libraries = ['ocropus','iulib']+baselibs,
        swig_opts = ["-c++","-I/usr/local/include"],
        include_dirs = ["/usr/local/include"],
        sources=['ocropus.i'])

setup (name = 'iulib',
       version = '0.4',
       author      = "Thomas Breuel",
       description = """iulib library bindings""",
       ext_modules = [iulib,ocropus],
       py_modules = ["iulib","ocropus"],
       )
