#ifndef WORDS_H_
#define WORDS_H_

#include <string>
#include <vector>

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
    void modify_word(std::string*) const;
    void modify_words(std::vector<std::string>*) const;
  private:
    std::string prefix_;
  };

  std::string one_shot(const std::string& prefix, std::string* word);

} // namespace words

#endif // WORDS_H_
