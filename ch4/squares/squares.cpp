// squares.cpp
//
// Kelvin Wong
// kwong691@gmail.com
//
// calculate the squares of int values up to 100
// 2 columns: first lists value, second lists square of that value
//

#include <iostream>
#include <iomanip> // for setw
#include <math.h> // for log10() to determine num digits

int main() {

  // largest int to include
  int n = 100;

  // max digit length for lining up
  int ndigits = (int) log10(n) + 1;

  // write values and squared values
  for (int i = 0; i < n; ++i) {
    std::cout << std::setw(ndigits); // padded on left
    std::cout << i + 1;
    std::setw(0);
    std::cout << " " << (i + 1) * (i + 1) << std::endl;
  }

  return 0;
}
