#pragma once
#include <iostream>
#include <memory>
#include <sstream>
#include "MyExceptions.h"


class Passport{
public:
	Passport() = default;
	Passport(const Passport& other) = default;
	~Passport() = default;

private:

};

class People {
public:
	People(const std::string& lastName, const std::string& name, const std::string& telephone, const Passport* passport);
	~People();
	std::string toString();			// if const std::string& ---->> error... what?

private:
	bool isCorrectTelephone(const std::string& str);
	bool isCorrectString(const std::string& str);
	std::string _lastName;
	std::string _name;
	std::string _telephone;
	Passport* _passport;
};