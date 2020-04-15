#pragma once
#include<iostream>
using namespace std;

class Overcoat {
public:
	Overcoat(string type, string size, int cost);
	void print();
	bool operator==(const Overcoat&)const;
	Overcoat operator=(const Overcoat&)const;
	bool operator>(const Overcoat&)const;

private:
	string _type;
	string _size;
	int _cost;
};