#include "overcoat.h"
#include <iostream>

Overcoat::Overcoat(string type, string size, int cost) {
	_type = type;
	_size = size;
	_cost = cost;
}

void Overcoat::print(){
	std::cout << "Overcoat type " << _type << " Size " << _size << " Cost " << _cost << std::endl;
}

bool Overcoat::operator==(const Overcoat& other) const {
	if (_type == other._type)
		return true;
	return false;
}

Overcoat Overcoat::operator=(const Overcoat& other) const {
	return Overcoat(_type,_size,_cost);
}

bool Overcoat::operator>(const Overcoat& other) const {
	if (_type == other._type && _cost > other._cost)
		return true;
	return false;
}