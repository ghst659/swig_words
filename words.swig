/* words.swig */
%module words
%{
/* Includes the header in the wrapper code */
#include "words.h"

#include <string>
#include <vector>
%}

%include "cpointer.i"
%include "stl.i"
namespace std {
  %template(StringVector) vector<string>;
}
%pointer_functions(std::string, string_ptr);

%include "words.h"
