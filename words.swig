/* words.swig */
%module words
%{
/* Includes the header in the wrapper code */
#include "words.h"

#include <string>
#include <vector>
%}

%include "typemaps.i"
%include "stl.i"
/*
%include "std_string.i"
%include "std_vector.i"
*/

namespace words {

  class Prefixer {
  public:
    Prefixer(const std::string&);
    ~Prefixer();
    Prefixer(const Prefixer&) = delete;
    Prefixer& operator=(const Prefixer&) = delete;
    void set_prefix(const std::string&);
    std::string prefix() const;
    std::string preview(const std::string&) const;
    void modify_word(std::string* INOUT) const;
    void modify_words(std::vector<std::string>* INOUT) const;
  private:
    std::string prefix_;
  };

  std::string one_shot(const std::string& prefix, std::string* INOUT);

} // namespace words
