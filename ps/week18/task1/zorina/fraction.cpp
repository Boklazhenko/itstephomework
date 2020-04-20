#include "fraction.h"
#include <iostream>

Fraction::Fraction(int numerator, int denominator) {
	_numerator = numerator;
	_denominator = denominator;
}

Fraction::Fraction(const Fraction& other) {
	_numerator = other._numerator;
	_denominator = other._denominator;
}

void Fraction::print()const {
	std::cout << _numerator << "/" << _denominator << std::endl;
}

Fraction Fraction::operator+(const Fraction& other) const {
	return Fraction(_numerator * other._denominator + other._numerator * _denominator, _denominator * other._denominator).reduce();
}

Fraction Fraction::operator+(int num)const {
	return Fraction(_numerator + (_denominator * num), _denominator);
}

Fraction Fraction::operator-(const Fraction& other) const {
	return Fraction(_numerator * other._denominator - other._numerator * _denominator, _denominator * other._denominator).reduce();
}

Fraction Fraction::operator-(int num) const {
	return Fraction(_numerator - (_denominator * num), _denominator).reduce();
}

Fraction Fraction::operator*(const Fraction& other) const {
	return Fraction(_numerator * other._numerator, _denominator * other._denominator).reduce();
}

Fraction Fraction::operator*(int num)const {
	if (num == 0)
		return Fraction(0, 0);
	return Fraction(_numerator * num, _denominator).reduce();
}

Fraction Fraction::operator/(const Fraction& other)const {
	int tempNumerator = other._denominator;
	int tempDenominator = other._numerator;
	if (other._numerator == 0 && _denominator == 0)
		exit(-1);
	if (other._numerator < 0)
		return Fraction(_numerator * tempNumerator * -1, _denominator * tempDenominator * -1);
	return Fraction(_numerator * tempNumerator, _denominator * tempDenominator).reduce();
}

Fraction Fraction::operator/(int num)const {
	if (num == 0)
		exit(-1);
	if (num < 0)
		return Fraction(_numerator * -1, _denominator * num * -1);
	return Fraction(_numerator, _denominator * num).reduce();
}

int Fraction::NOD(int numerator, int denominator) {
	if (numerator < 0)
		numerator *= -1;
	if (denominator < 0)
		denominator *= -1;
	if (denominator == 0)
		return numerator;
	if (numerator > denominator)
		return NOD(denominator, numerator % denominator);
	else
		return NOD(numerator, denominator % numerator);
}

Fraction Fraction::reduce() {
	int temp = _numerator;
	_numerator /= NOD(_numerator, _denominator);
	_denominator /= NOD(temp, _denominator);
	return Fraction(_numerator, _denominator);
}