#include <iostream>
#include "complex.h"
#include <cmath>

int Complex::count = 0;

int Complex::getCountClassComplex()
{
	return count;
}

Complex::Complex()
{
	_Re = 0;
	_Im = 0;
	++count;
}

Complex::Complex(double re, double im)
{
	_Re = re;
	_Im = im;
	++count;
}

Complex::~Complex()
{
	--count;
}

double Complex::Re() const
{
	return _Re;
}

double Complex::Im() const
{
	return _Im;
}

void Complex::setComplex(double re, double im)
{
	_Re=re;
	_Im = im;
}

Complex Complex::operator+(const Complex& other)
{
	return Complex(_Re + other._Re, _Im + other._Im);
}

Complex Complex::operator-(const Complex& other)
{
	return Complex(_Re - other._Re, _Im - other._Im);
}

Complex Complex::operator*(const Complex& other)
{
	return Complex(_Re * other._Re, _Im * other._Im);
}

Complex Complex::operator/(const Complex& other)
{
	return Complex((_Re * other._Re + _Im * other._Im) / (other._Re * other._Re + other._Im * other._Im),
		(other._Re * _Im - _Re * other._Im) / (other._Re * other._Re + other._Im * other._Im));
}

bool Complex::operator==(const Complex& other) const
{
	return (_Re == other._Re && _Im == other._Im);
}

Complex& Complex::operator=(Complex other)
{
	swap(*this, other);
	return *this;
}
std::istream& operator>>(std::istream& is,  Complex& comp)
{
	std::cout << "Set Rm\t";
	is >> comp._Re;
	std::cout << "Set Im\t";
	is >> comp._Im;
	return is;

}

std::ostream& operator<<(std::ostream& out, const Complex & comp)
{
	if (comp._Im >= 0)
	{
		out << comp._Re << "+" << comp._Im << "i" ;
	}
	else
	{
		out << comp._Re  << comp._Im << "i";
	}
		return out;
}

void swap(Complex& lhs, Complex& rhs) noexcept
{
	using std::swap;
	swap(lhs._Re, rhs._Re);
	swap(lhs._Im, rhs._Im);
}
