#include "Flat.h"
#include <string>
#include <iostream>
bool Flat :: operator == (const Flat& other)
{
	return(_square == other._square);
}
Flat Flat :: operator =(const Flat& other)
{
	Flat temp (_street = other._street, _houseNamber = other._houseNamber, _square = other._square, _price = other._price);
	return temp;
}
bool Flat :: operator > (const Flat& other)
{
	return (_price > other._price);
}
void Flat::print()
{
	cout << _street << " " << _houseNamber << " " << _square << " " <<  " " << _price << endl;
}