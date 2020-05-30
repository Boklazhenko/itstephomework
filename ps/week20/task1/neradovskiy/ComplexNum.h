#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>

class ComplexNum
{
public:
	ComplexNum(double a, double b);
	ComplexNum(const ComplexNum& other);
	~ComplexNum();
	ComplexNum operator+(const ComplexNum& other) const;
	ComplexNum operator-(const ComplexNum& other) const;
	ComplexNum operator*(const ComplexNum& other) const;
	ComplexNum operator/(const ComplexNum& other) const;
	ComplexNum operator=(ComplexNum other);
	void print() const;
	static int count;
	static int getCount();
	friend void swap(ComplexNum& lhs, ComplexNum& rhs);

private:

	double _a;
	double _b;
};