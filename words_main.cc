#include <iostream>
#include <string>
#include <vector>

#include "words.h"

void show_vector(const std::vector<std::string> words) {
  int j = 0;
  for (const auto& w : words) {
    std::cout << j++ << " is now " << w << std::endl;
  }
}

int main(int argc, char* argv[]) {
  words::Prefixer p("foo_");
  std::vector<std::string> words = {"bar", "baz", "mumble"};
  show_vector(words);
  std::cout << "prefix = " << p.prefix() << std::endl;
  for (int i = 0; i < words.size(); ++i) {
    std::cout << i << ": " << p.preview(words[i]) << std::endl;
  }
  p.modify_words(&words);
  show_vector(words);
  std::string one = "nemici";
  std::cout << "one was " << words::one_shot("molti ", &one) << std::endl;
  std::cout << "one is " << one << std::endl;
  return 0;
}
