#include "Fraction.h"
#include <iostream>

Fraction::Fraction()
{
	_numenator = 0;
	_denominator = 1;
}

Fraction::Fraction(int numenator, int denominator)
{
	_numenator = numenator;
	_denominator = denominator;
}

Fraction::Fraction(const Fraction& other)
{
	_numenator = other._numenator;
	_denominator = other._denominator;
}

void Fraction::print() const
{
	std::cout << _numenator << " / " << _denominator << std::endl;
}
Fraction Fraction::addtion(const Fraction& other)
{
	Fraction tempFract(other);
	if (_denominator == tempFract._denominator)
		_numenator += tempFract._numenator;
	else
	{
		toCommonDenom(tempFract);
		_numenator += tempFract._numenator;
	}
	reduction();
	return *this;
}

Fraction Fraction::operator+(const Fraction& other) const
{
	Fraction temp(*this);			//temp для того что бы не портить this значение 
	return temp.addtion(other);
}

Fraction Fraction::subtraction(const Fraction& other)
{
	Fraction temp(other);		
	temp._numenator = -temp._numenator;
	addtion(temp);
	return *this;
}

Fraction Fraction::operator-(const Fraction& other) const
{
	Fraction temp(*this);
	return temp.subtraction(other);
}

Fraction Fraction::multiply(const Fraction& other)
{
	_numenator *= other._numenator;
	_denominator *= other._denominator;
	return *this;
}

Fraction Fraction::operator*(const Fraction& other) const
{
	Fraction temp(*this);
	return temp.multiply(other);
}

Fraction Fraction::division(const Fraction& other)
{
	_numenator *= other._denominator;
	_denominator *= other._numenator;
	return *this;
}

Fraction Fraction::operator/(const Fraction& other) const
{
	Fraction temp(*this);
	return temp.division(other);
}

Fraction Fraction::exponent(int exp)
{
	if (exp < 0) {
		int temp = _numenator;
		_numenator = _denominator;
		_denominator = temp;
		exp = -exp;
	}
	_numenator = pow(_numenator, exp);
	_denominator = pow(_denominator, exp);
	return *this;
}

void Fraction::reduction()
{
	if (_numenator != 0) {
		int i = _numenator;
		if (i < 0)
			i = -i;
		while ((_numenator % i != 0 || _denominator % i) != 0 && i > 0)
		{
			--i;
		}
		if (i > 1) {
			if (_numenator < 0 || _denominator < 0) {
				_numenator = -_numenator;
				_denominator = -_denominator;
			}
			_numenator /= i;
			_denominator /= i;
		}
	}
	else
	{
		_denominator = 0;
	}

}

void Fraction::toCommonDenom(Fraction& other)
{
	int denomMultipler = other._denominator;
	int otherDenomMultipler = _denominator;
	_numenator *= denomMultipler;
	_denominator *= denomMultipler;
	other._numenator *= otherDenomMultipler;
	other._denominator *= otherDenomMultipler;
}
