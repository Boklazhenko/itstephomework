#pragma once
#include <iostream>

using namespace std;

class Flat
{
public:
	Flat();
	Flat(double area, double cost, int countOfRooms);
	Flat(const Flat& other);

	double getArea() const;
	double getCost() const;
	int getCountOfRooms() const;

	void setArea(double area);
	void setCost(double cost);
	void setCountOfRooms(int countOfRooms);

	void print() const;

	bool operator==(const Flat& other) const;
	bool operator!=(const Flat& other) const;
	Flat& operator=(Flat other);
	bool operator>(const Flat& other) const;

private:
	double _area;
	double _cost;
	int _countOfRooms;
};