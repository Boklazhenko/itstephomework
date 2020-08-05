#include "QuadraticEquation.h"

Quadratic::Quadratic(double a, double b, double c)
	: _a(a), _b(b), _c(c) {}

int Quadratic::findRoot() const
{
	double desc = pow(_b, 2) - 4 * _a * _c;
	if (desc < 0)
		return 0;
	return (_b + sqrt(desc)) / (2 * _a);
}
