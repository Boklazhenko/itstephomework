#include "overcoat .h"//missed with one space ;))

Overcoat::Overcoat()
	: _wearType(""), _wearSize(0), _wearCost(0) {}

Overcoat::Overcoat(string wearType, int wearSize, int wearCost)
	: _wearType(wearType), _wearSize(wearSize), _wearCost(wearCost) {}

Overcoat::Overcoat(const Overcoat& other)
	: _wearType(other._wearType), _wearSize(other._wearSize), _wearCost(other._wearCost) {}

int Overcoat::getSize() const
{
	return _wearSize;
}

int Overcoat::getCost() const
{
	return _wearCost;
}

string Overcoat::getType() const
{
	return _wearType;
}

void Overcoat::setSize(int size)
{
	_wearSize = size;
}

void Overcoat::setCost(int cost)
{
	_wearCost = cost;
}

void Overcoat::setType(string type)
{
	_wearType = type;
}

void Overcoat::print() const
{
	cout << _wearType << " " << _wearSize << " " << _wearCost << endl;
}

bool Overcoat::operator==(const Overcoat& other) const
{
	if (_wearType.size() != other._wearType.size())
	{
		return false;
	}

	for (int i = 0; i < _wearType.size(); ++i)
	{
		if (_wearType[i] != other._wearType[i])
		{
			return false;
		}
	}

	return true;
}

bool Overcoat::operator!=(const Overcoat& other) const
{
	return !(this->operator==(other));
}

Overcoat& Overcoat::operator=(Overcoat other)
{
	swap(*this, other);

	return *this;
}

bool Overcoat::operator>(const Overcoat& other) const
{
	if (_wearCost > other._wearCost)
	{
		return true;
	}

	return false;
}
