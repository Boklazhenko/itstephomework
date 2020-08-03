#pragma once
#include <iostream>

class Animal
{
public:
	explicit Animal(const std::string& name, int pawsCount);
	const std::string& getName() const;
	int getPawsCount() const;

private:
	std::string _name;
	int _pawsCount;
};
