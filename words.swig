/* words.swig */
%module words
%{
#define SWIG_FILE_WITH_INIT

/* Includes the header in the wrapper code */
#include "words.h"

#include <string>
#include <vector>
%}

%include "typemaps.i"
%include "std_string.i"
%include "std_vector.i"

/* Parse the header file to generate wrappers */
/* %include "words.h" */

namespace words {

std::string one_shot(const std::string& prefix, std::string *INOUT);

} // namespace words