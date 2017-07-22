// read_words.cpp source file
#include "read_words.h"

// read words from input stream and add to vector
std::vector<std::string> ReadWords(std::istream& is) {
  std::vector<std::string> words;

  // add words to vector until end of file or Ctrl-D
  while (is) {
    std::string word;
    is >> word;
    words.push_back(word);
  }

  return words;
}
