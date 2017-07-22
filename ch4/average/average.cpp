// average.cpp
//
// Kelvin Wong
// kwong691@gmail.com
//
// calculate average of numbers in a vector<double>

#include <iostream>
#include <vector>

int main() {
  std::vector<double> numbers = {1.0, 0.2, 0.3};

  typedef std::vector<double>::size_type VecSz;
  VecSz size = numbers.size();

  double sum = 0;

  for (VecSz i = 0; i < size; ++i) {
    sum += numbers[i];
  }

  std::cout << "Average is " << sum / size << std::endl;

  return 0;
}
