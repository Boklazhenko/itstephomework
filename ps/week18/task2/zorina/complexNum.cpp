#include "complexNum.h"
#include<iostream>

ComplexNum::ComplexNum(double re, double im) {
	_re = re;
	_im = im;
}

ComplexNum::ComplexNum(const ComplexNum& other) {
	_re = other._re;
	_im = other._im;
}

void ComplexNum::print() {
	std::cout << _re << " + " << _im << "i" << std::endl;
}

ComplexNum ComplexNum::operator+(const ComplexNum& other) const {
	return ComplexNum(_re + other._re, _im + other._im);
}

ComplexNum ComplexNum::operator-(const ComplexNum& other) const {
	return ComplexNum(_re - other._re, _im - other._im);
}

ComplexNum ComplexNum::operator*(const ComplexNum& other) const {
	return ComplexNum(_re * other._re - _im * other._im, _im * other._re + _re * other._im);
}

ComplexNum ComplexNum::operator/(const ComplexNum& other) const {
	ComplexNum temp(_re, _im);
	ComplexNum counter(other._re, -other._im);
	ComplexNum divider = other * counter;
	ComplexNum numerator = temp * counter;
	return ComplexNum(numerator._re / divider._re, numerator._im / divider._re);
}