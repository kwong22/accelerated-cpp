// read_word.cpp source file
#include "read_word.h"

// read word from input stream and add to vector, assume that read succeeded
std::istream& ReadWord(std::istream& is, std::vector<std::string>& string_vec) {
  std::string word;
  is >> word;
  string_vec.push_back(word);

  return is;
}
