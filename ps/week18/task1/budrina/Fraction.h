#pragma once
#include <iostream>

using namespace std;

class Fraction
{

public:

	Fraction();
	Fraction(int, int);
	Fraction(const Fraction& other);
	friend Fraction operator+(const Fraction& f1, const Fraction& f2);
	friend Fraction operator-(const Fraction& f1, const Fraction& f2);
	friend Fraction operator*(const Fraction& f1, const Fraction& f2);
	friend Fraction operator/(const Fraction& f1, const Fraction& f2);
	void Print() const;
	void Change(int, int);

private:
	int num, den; //num-числитель den-знаменатель//
	int Nod(int, int) const;
};