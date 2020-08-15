#include "Car.h"

Car::Car(std::string name, uint16_t age, double engCapacity, unsigned long long price)
	: _name(name), _age(age), _engCapacity(engCapacity), _price(price) {}

Car::Car(const Car& other)
	: _name(other._name), _age(other._age), _engCapacity(other._engCapacity), _price(other._price) {}

std::string Car::toString() const
{
	std::ostringstream sout;
	sout << _name << " " << _age << " " << _engCapacity << " " << _price << std::endl;
	return sout.str();
}

bool Car::operator==(const Car& other) const
{
	if (_name == other._name && _age == other._age && _engCapacity == other._engCapacity && _price == other._price)
		return true;
	return false;
}

bool Car::operator!=(const Car& other) const
{
	return !(*this == other);
}

const std::string& Car::getName() const
{
	return _name;
}

uint16_t Car::getAge() const
{
	return _age;
}

double Car::getEngCapacity() const
{
	return _engCapacity;
}

unsigned long long Car::getPrice() const
{
	return _price;
}

Car& Car::operator=(Car other)
{
	swap(*this, other);
	return *this;
}

void Car::swap(Car& lhs, Car& rhs)
{
	lhs._name.swap(rhs._name);
	std::swap(lhs._age, rhs._age);
	std::swap(lhs._engCapacity, rhs._engCapacity);
	std::swap(lhs._price, rhs._price);
}

std::ostream& operator<<(std::ostream& out, const Car& car)
{
	return out << car.toString();
}
