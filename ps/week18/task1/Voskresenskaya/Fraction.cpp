#include <iostream>
#include "Fraction.h"
using namespace std;
int Fraction::getNumertor()const
{
	return _numertor;
}
int Fraction::getDenominator()const
{
	return _denominator;
}
double Fraction::getFraction()const
{
	return  (double)getNumertor() / getDenominator();
}
void Fraction::print()
{
	cout << _numertor << "/" << _denominator << endl;
}
void Fraction::setFraction(int n, int d)
{
	if (d != 0)
	{
		_numertor = n;
		_denominator = d;
		reduction();
	}
	else
	{
		cout << "denominator cannot be equal to 0";
		return;
	}
}
int Fraction::greatestCommonFactor(int a, int b)
{
	if (b == 0)
		return a;
	return greatestCommonFactor(b, a % b);
}
void Fraction::reduction()
{
	if (_numertor == 0 || _denominator == 0)
		return;
	int modNumertor = abs(_numertor);
	int modDenominator = abs(_denominator);
	int greatestCF = greatestCommonFactor(modNumertor, modDenominator);
	_numertor /= greatestCF; 
	_denominator /= greatestCF;
}

Fraction Fraction::operator + (const Fraction& other)
{
	Fraction temp(_numertor * other._denominator + other._numertor * _denominator, _denominator * other._denominator);
	temp.reduction();
	return temp;
}

Fraction Fraction::operator-(const Fraction& other)

{
	Fraction temp(_numertor * other._denominator - other._numertor * _denominator, _denominator* other._denominator);
	temp.reduction();
	return temp;
}

Fraction Fraction::operator*(const Fraction& other)
{
	Fraction temp(_numertor * other._numertor, _denominator * other._denominator);
	temp.reduction();
	return temp;
}
Fraction Fraction::operator/(const Fraction& other)
{
	Fraction temp (_numertor* other._denominator, _denominator* other._numertor);
	temp.reduction();
	return temp;
}



