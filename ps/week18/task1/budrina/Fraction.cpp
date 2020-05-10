#include"Fraction.h"

Fraction::Fraction() :
	num(0), den(1) {}


Fraction::Fraction(int numerator, int denominator)
{
	num = numerator;
	if (denominator)
		den = denominator;
	else
	{
		cout << "Cannot be divided by zero" << endl;
		exit(1);
	}
}
Fraction::Fraction(const Fraction& other) :
	num(other.num), den(other.den) {}


Fraction operator+(const Fraction& f1, const Fraction& f2) 
	
{
	return Fraction((f1.num * f2.den + f2.num * f1.den), f1.den * f2.den);
}
Fraction operator-(const Fraction& f1, const Fraction& f2)
{
	return Fraction((f1.num * f2.den - f2.num * f1.den), f1.den * f2.den);
}

Fraction operator*(const Fraction& f1, const Fraction& f2)
{
	return Fraction(f1.num * f2.num, f1.den * f2.den);
}
Fraction operator/(const Fraction& f1, const Fraction& f2)
{
	return Fraction(f1.num * f2.den, f1.den * f2.num);
}


void Fraction::Print() const
{
	cout << num << "/" << den << endl;
}
void Fraction::Change(int d, int e)
{
	int f;
	num = d;
	if (e)
		den = e;
	else
	{
		cout << "Cannot be divided by zero" << endl;
		exit(1);
	};
	if (num > den)
		f = Nod(num, den);
	else
		f = Nod(den, num);
	num = num / f;
	den = den / f;
}

int Fraction::Nod(int c, int d) const
{
	if (d == 0)
		return c;
	if (c % d == 0)
		return 1;
	return Nod(d, c % d);
}