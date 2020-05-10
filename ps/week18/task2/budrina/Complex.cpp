
#include "Complex.h"

Complex::Complex() :
	real(0), imag(0) {}
Complex::Complex(double re, double im) :
	real(re), imag(im) {}

Complex Complex::operator+(Complex& fp1)
{
	fp1.real += real;
	fp1.imag += imag;
	return fp1;
}
Complex Complex::operator-(Complex& fp1)
{

	fp1.real -= real;
	fp1.imag -= imag;
	return fp1;
}
Complex Complex::operator*(Complex& fp1)
{
	double i, j;
	i = real * fp1.real - imag * fp1.imag;
	j = real * fp1.imag + fp1.real * imag;
	fp1.real = i;
	fp1.imag = j;
	return fp1;
}
Complex Complex::operator*(double& c)
{
	Complex fp1;
	double i, j;
	i = real * c;
	j = imag * c;
	fp1.real = i;
	fp1.imag = j;
	return fp1;
}
Complex operator*(double& c, Complex& fp1)
{
	Complex fp2;
	double i, j;
	i = c * fp1.real;
	j = c * fp1.imag;
	fp2.real = i;
	fp2.imag = j;
	return fp2;
}
double& Complex::operator[](int s)
{
	if (s == 0) return real;
	if (s == 1) return imag;
}

ostream& operator<< (ostream& fo, Complex& fp)
{
	if (fp.imag < 0) fo << fp.real << "+i(" << fp.imag << ")\n";
	else fo << fp.real << "+i" << fp.imag << "\n";
	return fo;
}
istream& operator>>(istream& fi, Complex& fp)
{
	cout << "¬ведите вещественную часть: ";
	fi >> fp.real;
	cout << "¬ведите мнимую часть: ";
	fi >> fp.imag;
	return fi;
}