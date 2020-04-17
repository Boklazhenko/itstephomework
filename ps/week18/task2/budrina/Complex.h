#pragma once
#include <iostream>

using namespace std;

class Complex

{
public:
	Complex();
	Complex(double re, double im = 0);

	Complex operator+(Complex&);   // ���������� ��������� ��������
	Complex operator-(Complex&);   // ���������� ��������� ���������
	Complex operator*(Complex&); // ���������� ��������� ���������
	Complex operator*(double& c); // ���������� ��������� ��������� �� Cons
	double& operator[](int s);
	friend Complex operator*(double& c, Complex&);// ���������� ��������� ��������� Const �� ����������� �����
	friend ostream& operator<<(ostream&, Complex&);
	friend istream& operator>>(istream&, Complex&);
private:
	double real;
	double imag;

};