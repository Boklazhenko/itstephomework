#pragma once
using namespace std;
#include <iostream>
class Complex
{
public:
	Complex()
	{
		_Re = 0;
		_Im = 0;
	}
	Complex(float Re, float Im)
	{
		_Re = Re;
		_Im = Im;
	}
	~Complex()
	{

	}
	Complex operator +(const Complex& other);
	Complex operator -(const Complex& other);
	Complex operator *(const Complex& other);
	Complex operator /(const Complex& other);
	void print();
private:

	float _Im;
	float _Re;
};