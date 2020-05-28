#include "Complex.h"

Complex::Complex() :
	real(0), imag(0)
{
	count++;
}
Complex::Complex(double re, double im) :
	real(re), imag(im) {}

int Complex::count = 0;

int Complex::getCount()
{
	return count;
}

Complex Complex::operator+(Complex& other) const
{
	return Complex(real + other.real, imag + other.imag);
}
Complex Complex::operator-(Complex& other) const
{
	return Complex(real - other.real, imag - other.imag);
}
Complex Complex::operator*(Complex& other) const
{
	return Complex((real * other.real - imag * other.imag), (real * other.imag + other.real * imag));
}
Complex Complex::operator/(Complex& other) const
{
	return Complex((real * other.real + imag * other.imag) / (other.real * other.real + other.imag * other.imag),
		(other.real * imag - real * other.imag) / (other.real * other.real + other.imag * other.imag));
}



ostream& operator<< (ostream& out, Complex& comp)
{
	if (comp.imag < 0) out << comp.real << "+i(" << comp.imag << ")\n";
	else out << comp.real << "+i" << comp.imag << "\n";
	return out;
}
istream& operator>>(istream& is, Complex& comp)
{
	cout << "¬ведите вещественную часть: ";
	is >> comp.real;
	cout << "¬ведите мнимую часть: ";
	is >> comp.imag;
	return is;
}