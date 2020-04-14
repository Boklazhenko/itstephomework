#pragma once
#include <iostream>

using namespace std;

class Overcoat
{
public:
	Overcoat();

	Overcoat(string wearType, int wearSize, int wearCost);

	Overcoat(const Overcoat& other);

	int getSize() const;

	int getCost() const;

	string getType() const;

	void setSize(int size);

	void setCost(int cost);

	void setType(string type);

	void print() const;

	bool operator==(const Overcoat& other) const;

	bool operator!=(const Overcoat& other) const;

	Overcoat& operator=(Overcoat other);

	bool operator>(const Overcoat& other) const;
	
private:
	string _wearType;
	int _wearSize;
	int _wearCost;
};