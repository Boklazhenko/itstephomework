#pragma once
#include <iostream>
using namespace std;
class Fraction
{
public:
	Fraction()
	{
		cout << "ñtor" << endl;
		_numertor = 0;
		_denominator = 1;
	}
	Fraction(int n, int d)
	{
		_numertor = n;
		_denominator = d;
		reduction();
	}
	Fraction(const Fraction& a)
	{
		cout << "ñtor" << endl;
		_numertor = a._numertor;
		_denominator = a._denominator;
		reduction();
	}
	~Fraction()
	{
		cout << "dtor" << endl;
	}
	int getNumertor()const;
	int getDenominator()const;
	double getFraction()const;
	void print();
	void setFraction(int n, int d);
	int greatestCommonFactor(int a, int b);
	void reduction();
	Fraction operator + (const Fraction& other);
	Fraction operator - (const Fraction& other);
	Fraction operator * (const Fraction& other);
	Fraction operator / (const Fraction& other);
private:

	int _numertor;
	int _denominator;

};
