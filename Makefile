CXX=g++ -std=c++17
CXXFLAGS=-std=c++17 -fPIC

.PHONY: clean words_python

clean:
	rm -f *~ *.so *.o *_wrap.cxx

words_python: _words.so

_words.so:
	swig -python -c++ words.swig
	g++ -std=c++17 -c -fPIC words_wrap.cxx words.cc -I/opt/python-3.7.4/include/python3.7m
	g++ -std=c++17 --shared words_wrap.o words.o -o $@
