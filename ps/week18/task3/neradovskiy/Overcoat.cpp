#include "Overcoat.h"

Overcoat::Overcoat(std::string type, int size, double price)
{
	if (price < 0)
		std::cout << "Error price";
	else {
		_type = type;
		_size = size;
		_price = price;
	}
}

Overcoat::Overcoat(const Overcoat& overcoat)
{
	_type = overcoat._type;
	_size = overcoat._size;
	_price = overcoat._price;
}


void Overcoat::operator= (const Overcoat& overcoat)
{
	Overcoat tmp(overcoat);
	this->swap(tmp);
}

void Overcoat::changePrice(double otherPrice)
{
	_price = otherPrice;
}

void Overcoat::print() const
{
	std::cout << "Tipe: " << _type << " size: " << _size << " price: " << _price << std::endl;
}

void Overcoat::swap(Overcoat& overcoat)
{
	std::string	tType = overcoat._type;
	int tSize = overcoat._size;
	double tPrice = overcoat._price;
	overcoat._type = _type;
	overcoat._size = _size;
	overcoat._price = _price;
	_type = tType;
	_size = tSize;
	_price = tPrice;
}

bool Overcoat::operator==(const Overcoat& overcoat) const
{
	return _type == overcoat._type;
}

bool Overcoat::operator>(const Overcoat& overcoat) const
{
	return _price > overcoat._price;
}

bool Overcoat::operator<(const Overcoat& overcoat) const
{
	return overcoat > *this;
}
