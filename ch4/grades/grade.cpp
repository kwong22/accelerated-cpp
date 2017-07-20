#include <stdexcept>
#include <vector>
#include "grade.h"
#include "median.h"
#include "Student_info.h"

using std::domain_error;
using std::vector;

double grade(double midterm, double final, double hw_median) {
	return 0.2 * midterm + 0.4 * final + 0.4 * hw_median;
}

double grade(double midterm, double final, const std::vector<double> hw) {
	return grade(midterm, final, median(hw));
}

double grade(const Student_info& s) {
	return grade(s.midterm, s.final, s.homework);
}