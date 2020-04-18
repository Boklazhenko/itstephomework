#pragma once
#include <iostream>
class ComplexNum
{
public:
	ComplexNum();
	ComplexNum(double a, double b);
	ComplexNum(const ComplexNum& other);
	ComplexNum operator+(const ComplexNum& other) const;
	ComplexNum operator-(const ComplexNum& other) const;
	ComplexNum operator*(const ComplexNum& other) const;
	ComplexNum operator/(const ComplexNum& other) const;
	void print() const;

private:
	double _a;
	double _b;
};