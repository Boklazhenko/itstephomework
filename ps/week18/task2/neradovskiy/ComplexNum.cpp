#include "ComplexNum.h"

ComplexNum::ComplexNum()
{
	_a = 0;
	_b = 0;
}

ComplexNum::ComplexNum(double a, double b)
{
	_a = a;
	_b = b;
}

ComplexNum::ComplexNum(const ComplexNum& other)
{
	_a = other._a;
	_b = other._b;
}

ComplexNum ComplexNum::operator+(const ComplexNum& other) const {
	return ComplexNum(_a + other._a, _b + other._b);
}

ComplexNum ComplexNum::operator-(const ComplexNum& other) const {
	return ComplexNum(_a - other._a, _b - other._b);
}

ComplexNum ComplexNum::operator*(const ComplexNum& other) const
{
	double a = (_a * other._a) - (_b * other._b);
	double b = (_b * other._a) - (_a * other._b);
	return ComplexNum(a, b);
}

ComplexNum ComplexNum::operator/(const ComplexNum& other) const
{
	double a = (_a * other._a + _b * other._b) / pow(other._a, 2) + pow(other._b, 2);
	double b = (_b * other._a - _a * other._b) / pow(other._a, 2) + pow(other._b, 2);
	return ComplexNum(a, b);
}

void ComplexNum::print() const
{
	std::cout << _a << " + " << _b << "i" << std::endl;
}
