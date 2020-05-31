#pragma once
#include <iostream>

using namespace std;

class Complex

{
public:
	Complex();
	Complex(double re, double im = 0);
	static int count;
	static int getCount();
	Complex operator+(Complex&)const;   // ���������� ��������� ��������
	Complex operator-(Complex&)const;   // ���������� ��������� ���������
	Complex operator*(Complex&)const; // ���������� ��������� ���������
	Complex operator/(Complex&)const;
	friend ostream& operator<<(ostream&, Complex&);
	friend istream& operator>>(istream&, Complex&);
private:

	double real;
	double imag;

};

