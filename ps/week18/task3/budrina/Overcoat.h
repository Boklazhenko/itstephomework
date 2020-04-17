#pragma once
#include <iostream>

using namespace std;


class Overcoat {

public:
	
	Overcoat();
	Overcoat(string s, int p);
	Overcoat(const Overcoat& other);

	void print();
	bool operator==(const Overcoat&) const;
	bool operator>(const Overcoat&)const;
	Overcoat operator=(const Overcoat&)const;

private:
	int _price;
	string _str;
};