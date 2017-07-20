// word_count.cpp
// Kelvin Wong <kwong691@gmail.com>
//
// count how many times each distinct word appears in input

#include <iostream>
#include <string>
#include <vector>

int main() {
  // ask for input
  std::cout << "Please enter a series of words: ";

  // store words and corresponding number of occurrences
  std::vector<std::string> words;
  std::vector<int> counts;

  typedef std::vector<std::string>::size_type VecSz;

  std::string s;
  // invariant:
  // we have stored all words read into words and stored number of occurrences
  // in counts
  while (std::cin >> s) {
    VecSz i = 0;
    // invariant: we have compared s with i words from words
    // loop stops when end of words reached or match found
    for (; i < words.size() && s.compare(words[i]) != 0; ++i)
      ;

    // check if match was found
    if (i < words.size()) {
      ++counts[i];
    } else {
      // match was not found, record new word
      words.push_back(s);
      counts.push_back(1); // initialize count with 1
    }
  }

  VecSz size = words.size();

  std::cout << std::endl;

  // report word counts
  for (int i = 0; i < size; ++i) {
    std::cout << words[i] + " - " << counts[i] << std::endl;
  }

  return 0;
}
