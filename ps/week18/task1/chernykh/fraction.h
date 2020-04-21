#pragma once
#include <iostream>

using namespace std;

int GCD(int x, int y);//Greatest common divisor
int SCM(int n1, int n2);//Smallest common multiple

class Fraction
{
public:
	Fraction();

	Fraction(int numerator, int denominator);

	Fraction(const Fraction& other);

	int getNumerator() const;

	int getDenominator() const;

	void setNumerator(int num);//num - Numerator

	void setDenominator(int den);//den - Denominator

	void print() const;

	Fraction operator+(const Fraction& other) const;

	Fraction operator-(const Fraction& other) const;

	Fraction operator*(const Fraction& other) const;

	Fraction operator/(const Fraction& other) const;
	
private:
	Fraction reductionFraction();

private:
	int _pNumerator;
	int _pDenominator;
};