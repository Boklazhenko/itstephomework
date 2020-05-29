#include "complex.h"
#include<iostream>

int Complex::count = 0;

int Complex::getCount() {
	return count;
}

Complex::Complex(double re, double im)
	:_re(re), _im(im) {
	count++;
}

Complex::Complex(const Complex& other)
	: _re(other._re), _im(other._im) {
	count++;
}

Complex::~Complex() {
	--count;
}


void Complex::print() {
	std::cout << _re << " + " << _im << "i" << std::endl;
}

double Complex::getRe() const {
	return _re;
}

double Complex::getIm() const {
	return _im;
}

void Complex::setRe(double re){
	_re = re;
}

void Complex::setIm(double im){
	_im = im;
}

Complex Complex::operator+(const Complex& other) const {
	return Complex(_re + other._re, _im + other._im);
}

Complex Complex::operator-(const Complex& other) const {
	return Complex(_re - other._re, _im - other._im);
}

Complex Complex::operator*(const Complex& other) const {
	return Complex(_re * other._re - _im * other._im, _im * other._re + _re * other._im);
}

Complex Complex::operator/(const Complex& other) const {
	Complex temp(_re, _im);
	Complex counter(other._re, -other._im);
	Complex divider = other * counter;
	Complex numerator = temp * counter;
	return Complex(numerator._re / divider._re, numerator._im / divider._re);
}