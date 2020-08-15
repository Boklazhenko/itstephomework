#pragma once
#include <iostream>
#include <sstream>

class Car {
public:
	Car(std::string name, uint16_t age, double engCapacity, unsigned long long prince);
	Car(const Car& other);
	std::string toString() const;
	bool operator == (const Car& other) const;
	bool operator != (const Car& other) const;
	const std::string& getName() const;
	uint16_t getAge() const;
	double getEngCapacity() const;
	unsigned long long getPrice() const;
	Car& operator=(Car other);

private:
	void swap(Car& lhs, Car& rhs);
	std::string _name;
	uint16_t _age;
	double _engCapacity;
	unsigned long long _price;
};

std::ostream& operator<< (std::ostream& out, const Car& car);