#include "Complex.h"
#include <iostream>

Complex  Complex :: operator +(const Complex& other)
{
	return Complex (_Re + other._Re, _Im + other._Im);
}
Complex Complex :: operator - (const Complex& other)
{
	return Complex(_Re - other._Re, _Im - other._Im);
}
Complex Complex :: operator * (const Complex& other)
{
	return Complex(_Re * other._Re, _Im * other._Im);
}
Complex Complex :: operator / (const Complex& other)
{
return Complex ((_Re*other._Re+_Im*other._Im)/(other._Re* other._Re+ other._Im* other._Im),
(other._Re*_Im-_Re* other._Im)/(other._Re* other._Re+ other._Im* other._Im));
}
void Complex :: print()
{
	if (_Im >= 0)
		cout << "ComplexNum= " << _Re << "+" << _Im << "i" << endl;
	else
		cout << "ComplexNum= " << _Re  << _Im << "i" << endl;

}


