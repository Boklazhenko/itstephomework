#pragma once
class Fraction {

public:
	Fraction(int numerator, int denominator);
	Fraction(const Fraction& other);

	void print()const;
	Fraction operator+(const Fraction&)const;
	Fraction operator+(int)const;
	Fraction operator-(const Fraction&) const;
	Fraction operator-(int)const;
	Fraction operator*(const Fraction&)const;
	Fraction operator*(int)const;
	Fraction operator/(const Fraction&)const;
	Fraction operator/(int)const;

private:
	int NOD(int numerator, int denominator);
	Fraction reduce();
	int _numerator;
	int _denominator;
};
