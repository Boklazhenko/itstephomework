#pragma once
#include <iostream>

using namespace std;

class Flat
{
private:
	double price;
	double area;
public:
	Flat() : price(0), area(0) { };
	Flat(const double& prc, const double& area) : price(prc), area(area) { };
	Flat(const Flat& other) : price(other.price), area(other.area) { };
	~Flat() { };
	Flat& operator = (const Flat& other);
	void print()const;
	friend bool operator == (const Flat& lhs, const Flat& rhs);
	friend bool operator != (const Flat& lhs, const Flat& rhs);

	friend bool operator > (const Flat& lhs, const Flat& rhs);
	friend bool operator < (const Flat& lhs, const Flat& rhs);
};
