#include "complexNumber.h"

ComplexNumber::ComplexNumber()
	: _realPart(0), _imaginaryPart(0) {}

ComplexNumber::ComplexNumber(double realPart, double imaginaryPart)
	: _realPart(realPart), _imaginaryPart(imaginaryPart) {}

ComplexNumber::ComplexNumber(const ComplexNumber& other)
	: _realPart(other._realPart), _imaginaryPart(other._imaginaryPart) {}

int ComplexNumber::getRealPart() const
{
	return _realPart;
}

int ComplexNumber::getImaginaryPart() const
{
	return _imaginaryPart;
}

void ComplexNumber::setRealPart(double realPart)
{
	_realPart = realPart;
}

void ComplexNumber::setImaginaryPart(double imaginaryPart)
{
	_imaginaryPart = imaginaryPart;
}

void ComplexNumber::print() const
{
	cout << _realPart << " " << _imaginaryPart << endl;
}

ComplexNumber ComplexNumber::mul(const ComplexNumber& other) const
{
	double mulRealPart = _realPart * other._realPart + _imaginaryPart * other._realPart;
	double mulImaginaryPart = _realPart * other._imaginaryPart + _imaginaryPart * other._imaginaryPart;

	return { mulRealPart, mulImaginaryPart };
}

ComplexNumber ComplexNumber::div(const ComplexNumber& other) const
{
	double divRealPart = (other._realPart * _realPart) + (other._imaginaryPart * _realPart) + (other._realPart * _imaginaryPart) + (other._imaginaryPart * _imaginaryPart);
	double divImaginaryPart = (other._realPart * _realPart) - (other._imaginaryPart * _imaginaryPart);

	return { divRealPart, divImaginaryPart };
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const
{
	return ComplexNumber(_realPart + other._realPart, _imaginaryPart + other._imaginaryPart);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& other) const
{
	return ComplexNumber(_realPart - other._realPart, _imaginaryPart - other._imaginaryPart);
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& other) const
{
	return mul(other);
}

ComplexNumber ComplexNumber::operator/(const ComplexNumber& other) const
{
	return div(other);
}