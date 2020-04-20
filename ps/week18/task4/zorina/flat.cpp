#include "flat.h"
#include <iostream>

Flat::Flat(int area, int cost) {
	_area = area;
	_cost = cost;
}

void Flat::print() {
	std::cout << "Flat area is " << _area << " Flat cost is " << _cost << std::endl;
}

bool Flat::operator==(const Flat& other) const {
	if (_area == other._area)
		return true;
	return false;
}

Flat Flat::operator=(const Flat& other) const {
	return Flat(_area, _cost);
}

bool Flat::operator>(const Flat& other) const {
	if (_cost > other._cost)
		return true;
	return false;
}