#pragma once
#include <string>
#include <iostream>
using namespace std;
class Overcoat
{
public:
	Overcoat(string Name, string Color, float Price, int Size)
	{
		_name = Name;
		_color = Color;
		_price = Price;
		_size = Size;
	 }
	~Overcoat()
	{

	}
	bool operator == (const Overcoat& other);
	Overcoat operator =(const Overcoat& other);
	bool operator > (const Overcoat& other);
	void print()
	{
		cout << _name << " " << _color << " " << _price << " " << _size << endl;
    }
private:
	string _name;
	string _color;
	float _price;
	int _size;
};