#include "flat.h"

Flat::Flat()
	: _area(0), _cost(0), _countOfRooms(0) {}

Flat::Flat(double area, double cost, int countOfRooms)
	: _area(area), _cost(cost), _countOfRooms(countOfRooms) {}

Flat::Flat(const Flat& other)
	: _area(other._area), _cost(other._cost), _countOfRooms(other._countOfRooms) {}

double Flat::getArea() const
{
	return _area;
}

double Flat::getCost() const
{
	return _cost;
}

int Flat::getCountOfRooms() const
{
	return _countOfRooms;
}

void Flat::setArea(double area)
{
	_area = area;
}

void Flat::setCost(double cost)
{
	_cost = cost;
}

void Flat::setCountOfRooms(int countOfRooms)
{
	_countOfRooms = countOfRooms;
}

void Flat::print() const
{
	cout << "Area is: " << _area << " Cost is: " << _cost << " Count of rooms is: " << _countOfRooms << endl;
}

bool Flat::operator==(const Flat& other) const
{
	if (_area != other._area)
	{
		return false;
	}

	return true;
}

bool Flat::operator!=(const Flat& other) const
{
	return !(this->operator==(other));
}

Flat& Flat::operator=(Flat other)
{
	swap(*this, other);

	return *this;
}

bool Flat::operator>(const Flat& other) const
{
	if (_cost > other._cost)
	{
		return true;
	}

	return false;
}