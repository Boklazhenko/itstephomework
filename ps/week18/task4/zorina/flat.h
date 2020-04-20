#pragma once
#include <iostream>

class Flat {
	
public:
	Flat(int area, int cost);
	void print();
	bool operator==(const Flat&) const;
	Flat operator=(const Flat&) const;
	bool operator>(const Flat&)const;

private:
	int _area;
	int _cost;
};