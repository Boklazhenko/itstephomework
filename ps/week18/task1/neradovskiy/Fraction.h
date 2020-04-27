#pragma once
class Fraction {
public:
	Fraction();
	explicit Fraction(int numenator, int denominator = 1);
	Fraction(const Fraction& other);
public:
	void print() const;
	Fraction addtion(const Fraction& other);
	Fraction operator+(const Fraction& other) const;
	Fraction subtraction(const Fraction& other);
	Fraction operator-(const Fraction& other) const;
	Fraction multiply(const Fraction& other);
	Fraction operator* (const Fraction& other) const;
	Fraction division(const Fraction& other);
	Fraction operator/(const Fraction& other) const;
	Fraction exponent(int exp);
	void reduction();
private:
	void toCommonDenom(Fraction& other);
	int _numenator;
	int _denominator;
};