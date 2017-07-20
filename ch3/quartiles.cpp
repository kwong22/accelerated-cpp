#include <iostream>
#include <vector>

int main() {
  // ask for integers
  std::cout << "Please enter a sequence of integers: ";

  std::vector<int> nums;

  // read integers into nums
  int x;
  // invariant: we have stored all integers read so far into nums
  while (std::cin >> x) {
    nums.push_back(x);
  }

  // get size of nums
  typedef std::vector<int>::size_type VecSz;
  VecSz size = nums.size();

  // check if empty
  if (size < 4) {
    std::cout << "Need at least 4 integers to compute quartiles" << std::endl;
    return 1;
  }

  std::cout << size << " numbers read." << std::endl;

  // sort nums
  sort(nums.begin(), nums.end());

  // calculate quartiles
  VecSz first = size / 4; // remember to use VecSz and not int
  VecSz mid = size / 2;
  VecSz third = size / 4 * 3;

  double q1 = size % 2 == 0 ? (nums[first] + nums[first - 1]) / 2
    : nums[first];
  double q2 = size % 2 == 0 ? (nums[mid] + nums[mid - 1]) / 2
    : nums[mid];
  double q3 = size % 2 == 0 ? (nums[third] + nums[third - 1]) / 2
    : nums[third];

  std::cout << "First quartile: " << q1 << std::endl;
  std::cout << "Median: " << q2 << std::endl;
  std::cout << "Third quartile: " << q3 << std::endl;

  return 0;
}
