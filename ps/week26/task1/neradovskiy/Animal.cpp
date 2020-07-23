#include "Animal.h"

Animal::Animal(const std::string& name, int pawsCount)
{
	_name = name;
	_pawsCount = pawsCount;
}

const std::string& Animal::getName() const
{
	return _name;
}

int Animal::getPawsCount() const
{
	return _pawsCount;
}
