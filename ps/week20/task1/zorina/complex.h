#pragma once

class Complex {
public:
	static int count;
	static int getCount();
	Complex(double re, double im);
	Complex(const Complex& other);
	~Complex();
	void print();
	double getRe() const;
	double getIm() const;
	void setRe(double re);
	void setIm(double im);
	Complex operator+(const Complex&) const;
	Complex operator-(const Complex&) const;
	Complex operator*(const Complex&) const;
	Complex operator/(const Complex&) const;

private:
	double _re;
	double _im;
};
