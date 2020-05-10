#pragma once
#include <iostream>

using namespace std;

class Complex

{
public:
	Complex();
	Complex(double re, double im = 0);

	Complex operator+(Complex&);   // Перегрузка оператора сложения
	Complex operator-(Complex&);   // Перегрузка оператора вычитания
	Complex operator*(Complex&); // Перегрузка оператора умножения
	Complex operator*(double& c); // Перегрузка оператора умножения на Cons
	double& operator[](int s);
	friend Complex operator*(double& c, Complex&);// Перегрузка оператора умножения Const на комплексное число
	friend ostream& operator<<(ostream&, Complex&);
	friend istream& operator>>(istream&, Complex&);
private:
	double real;
	double imag;

};