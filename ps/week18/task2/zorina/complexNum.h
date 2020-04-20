#pragma once

class ComplexNum {
public:
	ComplexNum(double re, double im);
	ComplexNum(const ComplexNum& other);
	void print();
	ComplexNum operator+(const ComplexNum&) const;
	ComplexNum operator-(const ComplexNum&) const;
	ComplexNum operator*(const ComplexNum&) const;
	ComplexNum operator/(const ComplexNum&) const;

private:
	double _re;
	double _im;
};