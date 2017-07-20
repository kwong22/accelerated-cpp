// source file for median function
#include <algorithm>
#include <stdexcept> // for domain_error
#include <vector>

using std::domain_error;
using std::sort;
using std::vector;

// compute median of a vector<double>
double median(vector<double> vec) {
	typedef vector<double>::size_type VecSz;

	VecSz size = vec.size();

	if (size == 0)
		throw domain_error("median of an empty vector");

	sort(vec.begin(), vec.end());

	VecSz mid = size / 2;

	return size % 2 == 0 ? (vec[mid] + vec[mid - 1]) / 2 : vec[mid];	
}