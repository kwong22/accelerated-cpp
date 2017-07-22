// count.cpp
//
// Kelvin Wong
// kwong691@gmail.com
//
// read and count words from input stream

#include "read_word.h"

int main() {
  // store words from input stream until end of file or Ctrl-D
  std::vector<std::string> words;
  while (ReadWord(std::cin, words))
    ;

  typedef std::vector<std::string>::size_type VecSz;
  VecSz size = words.size();

  // report number of words in input
  std::cout << size << " words in input" << std::endl;

  // count number of occurrences per word
  std::vector<std::string> unique_words;
  std::vector<int> word_counts;

  // go through all words, record unique words, count number of each
  for (VecSz i = 0; i < size; ++i) {
    // check if current word matches a unique word
    VecSz j = 0;
    for (; j < unique_words.size() && words[i].compare(unique_words[j]) != 0; ++j)
      ;

    // current word found in unique_words
    if (j < unique_words.size()) {
      // increment count for that word
      word_counts[j]++;
    } else {
      // current word is unique, record word and count
      unique_words.push_back(words[i]);
      word_counts.push_back(1);
    }
  }

  // Report unique words and number of occurrences
  std::cout << std::endl << "Word counts:" << std::endl;
  for (VecSz i = 0; i < unique_words.size(); ++i) {
    std::cout << unique_words[i] << " - " << word_counts[i] << std::endl;
  }

  return 0;
}
