#pragma once
#include <iostream>

class Flat {
public:
	Flat(std::string adress, uint32_t area, uint64_t price);
	Flat(const Flat& flat);
	void operator= (const Flat& flat);
	bool operator== (const Flat& flat) const;
	bool operator > (const Flat& flat) const;
	bool operator < (const Flat& flat) const;
	void swap(Flat& flat);
	void changePrice(uint64_t otherPrice);
	void print() const;

private:
	std::string _adress;
	uint64_t _price;
	uint32_t _area;
};