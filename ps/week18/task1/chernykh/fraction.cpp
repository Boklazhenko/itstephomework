#include "fraction.h"

int GCD(int x, int y)//Greatest common divisor
{
	if (y == 0)
	{
		return x;
	}

	return GCD(y, x % y);
}

int SCM(int n1, int n2)//Smallest common multiple
{
	return n1 * n2 / GCD(n1, n2);
}

Fraction::Fraction()
	: _pNumerator(0), _pDenominator(0) {}

Fraction::Fraction(int numerator, int denominator)
	: _pNumerator(numerator), _pDenominator(denominator) {}

Fraction::Fraction(const Fraction& other)
	: _pNumerator(other._pNumerator), _pDenominator(other._pDenominator) {}

int Fraction::getNumerator() const
{
	return _pNumerator;
}

int Fraction::getDenominator() const
{
	return _pDenominator;
}

void Fraction::setNumerator(int num)//num - Numerator
{
	_pNumerator = num;
}

void Fraction::setDenominator(int den)//den - Denominator
{
	_pDenominator = den;
}

void Fraction::print() const
{
	cout << _pNumerator << "/" << _pDenominator << endl;
}

Fraction Fraction::operator+(const Fraction& other) const
{
	Fraction newFraction;

	if (other._pDenominator == _pDenominator)
	{
		newFraction._pNumerator = _pNumerator + other._pNumerator;
		newFraction._pDenominator = other._pDenominator;

		return newFraction;
	}

	int scm = SCM(other._pDenominator, _pDenominator);

	int additionalFactorFirstFraction = scm / _pDenominator;
	int additionalFactorSecondFraction = scm / other._pDenominator;

	int newNumeratorFirstFraction = additionalFactorFirstFraction * _pNumerator;
	int newDenominatorFirstFraction = additionalFactorFirstFraction * _pDenominator;

	int newNumeratorSecondFraction = additionalFactorSecondFraction * other._pNumerator;
	int newDenominatorSecondFraction = additionalFactorSecondFraction * other._pDenominator;

	newFraction._pNumerator = newNumeratorFirstFraction + newNumeratorSecondFraction;
	newFraction._pDenominator = newDenominatorFirstFraction;

	return newFraction.reductionFraction();
}

Fraction Fraction::operator-(const Fraction& other) const
{
	Fraction newFraction;

	if (other._pDenominator == _pDenominator)
	{
		newFraction._pNumerator = _pNumerator - other._pNumerator;
		newFraction._pDenominator = other._pDenominator;

		return newFraction;
	}

	int scm = SCM(other._pDenominator, _pDenominator);

	int additionalFactorFirstFraction = scm / _pDenominator;
	int additionalFactorSecondFraction = scm / other._pDenominator;

	int newNumeratorFirstFraction = additionalFactorFirstFraction * _pNumerator;
	int newDenominatorFirstFraction = additionalFactorFirstFraction * _pDenominator;

	int newNumeratorSecondFraction = additionalFactorSecondFraction * other._pNumerator;
	int newDenominatorSecondFraction = additionalFactorSecondFraction * other._pDenominator;

	newFraction._pNumerator = newNumeratorFirstFraction - newNumeratorSecondFraction;
	newFraction._pDenominator = newDenominatorFirstFraction;

	return newFraction.reductionFraction();
}

Fraction Fraction::operator*(const Fraction& other) const
{
	return Fraction(_pNumerator * other._pNumerator, _pDenominator * other._pDenominator).reductionFraction();
}

Fraction Fraction::operator/(const Fraction& other) const
{
	return Fraction(_pNumerator * other._pDenominator, _pDenominator * other._pNumerator).reductionFraction();
}

Fraction Fraction::reductionFraction()
{
	Fraction newFraction(_pNumerator, _pDenominator);

	int gcd = GCD(newFraction._pNumerator, newFraction._pDenominator);

	if (gcd < 0)
	{
		gcd = -gcd;
	}

	if (newFraction._pNumerator % gcd == 0 && newFraction._pDenominator % gcd == 0)
	{
		int cutNumerator = newFraction._pNumerator / gcd;
		int cutDenominator = newFraction._pDenominator / gcd;

		newFraction._pNumerator = cutNumerator;
		newFraction._pDenominator = cutDenominator;

		return newFraction;
	}

	return newFraction;
}