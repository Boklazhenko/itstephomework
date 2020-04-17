
#pragma once
#include <string>
#include <iostream>
using namespace std;
class Flat
{
public:
	Flat(string Street, int HouseNamber, float Square,  float Price)
	{
		_street = Street;
		_houseNamber = HouseNamber;
		_square = Square;
		_price = Price;
	}
	~Flat()
	{

	}
	bool operator == (const Flat& other);
	Flat operator =(const Flat& other);
	bool operator > (const Flat& other);
	void print();
	
private:
	string _street;
	int _houseNamber;
	float _square;
	int _number;
	float _price;
};

