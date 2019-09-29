#include "words.h"

#include <iostream>
#include <string>
#include <vector>

namespace words {

  Prefixer::Prefixer(const std::string& prefix) : prefix_(prefix) {
    std::cerr << "Prefixer(" << prefix_ << ")" << std::endl;
  }
  Prefixer::~Prefixer() {
    std::cerr << "~Prefixer(" << prefix_ << ")" << std::endl;
  }
  void Prefixer::set_prefix(const std::string& prefix) {
    prefix_ = prefix;
    std::cerr << "set_prefix(" << prefix << ")" << std::endl;
  }
  std::string Prefixer::prefix() const {
    return prefix_;
  }
  std::string Prefixer::preview(const std::string& word) const {
    return prefix_ + word;
  }
  void Prefixer::modify_word(std::string* word) const {
    *word = prefix_ + *word;
  }
  void Prefixer::modify_words(std::vector<std::string>* words) const {
    for (auto i = words->begin(); i != words->end(); ++i) {
      *i = prefix_ + *i;
    }
  }

  std::string one_shot(const std::string& prefix, std::string* word) {
    Prefixer p(prefix);
    std::string previous = *word;
    p.modify_word(word);
    return previous;
  }

} // namespace words
