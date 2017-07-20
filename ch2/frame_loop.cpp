#include <iostream>
#include <string>

int main() {
  // ask for name
  std::cout << "Please enter your name: ";

  // read the name
  std::string name;
  std::cin >> name;

  // build the greeting
  const std::string greeting = "Hello, " + name + "!";

  // number of blanks surrounding the greeting
  const int pad = 1;

  // determine dimensions
  const int rows = pad * 2 + 3;
  const std::string::size_type cols = 2 + pad * 2 + greeting.size();

  // blank line to separate output from input
  std::cout << std::endl;

  // write rows rows of output
  // invariant: we have written r rows so far
  for (int r = 0; r != rows; ++r) {

    string::size_type c = 0;

    // invariant: we have written c characters in the current row
    while (c != cols) {
      // check if greeting location
      if (r == pad + 1 && c == pad + 1) {
        std::cout << greeting;
        c += greeting.size();
      } else {
        // on the border?
        if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
          std::cout << "*";
        } else {
          std::cout << " ";
        }
        ++c;
      }
    }
    // next row
    std::cout << std::endl;
  }

  return 0;
}
