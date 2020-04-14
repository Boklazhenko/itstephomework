#pragma once
#include <iostream>

using namespace std;

class ComplexNumber
{
public:
	ComplexNumber();

	ComplexNumber(double realPart, double imaginaryPart);

	ComplexNumber(const ComplexNumber& other);

	int getRealPart() const;

	int getImaginaryPart() const;

	void setRealPart(double realPart);

	void setImaginaryPart(double imaginaryPart);

	void print() const;

	ComplexNumber mul(const ComplexNumber& other) const;

	ComplexNumber div(const ComplexNumber& other) const;

	ComplexNumber operator+(const ComplexNumber& other) const;

	ComplexNumber operator-(const ComplexNumber& other) const;

	ComplexNumber operator*(const ComplexNumber& other) const;

	ComplexNumber operator/(const ComplexNumber& other) const;

private:
	double _realPart;
	double _imaginaryPart;
};
