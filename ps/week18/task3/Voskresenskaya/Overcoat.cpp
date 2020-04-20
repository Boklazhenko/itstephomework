#include "Overcoat.h"

bool Overcoat::operator==(const Overcoat& other)
{
	return (_name == other._name && _color == other._color );
}
string _name;
string _color;
float _price;
int _size;
Overcoat Overcoat::operator=(const Overcoat& other)
{
	Overcoat temp(_name = other._name, _color = other._color, _price = other._price, _size = other._size);
	return temp;

}

bool Overcoat::operator>(const Overcoat& other)
{
	return(_price > other._price);
}
