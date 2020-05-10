#include"Overcoat.h"

Overcoat::Overcoat() :
	_str(nullptr), _price(0) {}

Overcoat::Overcoat(string s, int p) :
	_str(s), _price(p) {}

Overcoat::Overcoat(const Overcoat& other) :
	_str(other._str), _price(other._price) {}

Overcoat Overcoat::operator=(const Overcoat& other)const
{
	swap(*this, other);
	return *this;
}

bool Overcoat::operator> (const Overcoat& other) const
{
	return (_price > other._price);
}
bool Overcoat::operator==(const Overcoat& other) const
{
	if (_str.size() != other._str.size())
	{
		return false;
	}
	for (int i = 0; i < _str.size(); ++i) {
		if (_str[i] != other._str[i])
		{
			return false;
		}
	}
	return true;
}
void Overcoat::print() {
	cout << "\n" << _str << "Цена: " << _price << endl;
}