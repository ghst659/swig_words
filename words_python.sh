#!/bin/bash
swig -python -c++ words.swig
g++ -c -fPIC words_wrap.cxx words.cc -I/opt/python-3.7.4/include/python3.7m
g++ --shared words_wrap.o words.o -o _words.so
