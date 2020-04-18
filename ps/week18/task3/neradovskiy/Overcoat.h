#pragma once
#include <iostream>

class Overcoat {
public:
	Overcoat(std::string type, int size, double price);
	Overcoat(const Overcoat& overcoat);
	void operator= (const Overcoat& overcoat);
	void changePrice(double otherPrice);
	void print() const;
	void swap(Overcoat& overcoat);
	bool operator== (const Overcoat& overcoat) const;
	bool operator> (const Overcoat& overcoat) const;
	bool operator< (const Overcoat& overcoat) const;
private:
	std::string _type;
	uint32_t _size;
	double _price;
};