// lengths.cpp
// Kelvin Wong <kwong691@gmail.com>
//
// report lengths of longest and shortest strings in input

#include <iostream>
#include <string>

int main() {
  // ask for input
  std::cout << "Please enter series of words: ";

  int min_len;
  int max_len;
  
  // track number of words read
  int count = 0;

  std::string s;

  // invariant: we have compared the lengths of all words read so far with
  // previous minimum and maximum lengths
  while (std::cin >> s) {
    std::string::size_type size = s.size();

    // check if any words have been read yet
    if (count == 0) {
      // initialize lengths
      min_len = size;
      max_len = size;
    } else {
      if (size < min_len) {
        min_len = size;
      }

      if (size > max_len) {
        max_len = size;
      }
    }

    ++count;
  }

  std::cout << std::endl;

  // report minimum and maximum lengths
  std::cout << "Longest length: " << max_len << std::endl;
  std::cout << "Shortest length: " << min_len << std::endl;

  return 0;
}
