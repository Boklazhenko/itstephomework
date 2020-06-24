#include "Client.h"
#include <string>
#include <iostream>
Client::Client() : _prioritet(no), _str("0"), _name(noName){}

Client::Client(Prioritet prioritet, Name name)
{
	_prioritet = prioritet;
	_name = name;
	_str = cinStr();
}

Client::~Client() {}

std::string Client::cinStr()
{
	std:: cout << "Enter str";
	std:: getline (std::cin, _str);
	return _str;
}

Prioritet Client::prioritet()
{
	return _prioritet;
}
Name Client::name()
{
	return _name;
}
void Client::setPrioritet(Prioritet prioritet)
{
	_prioritet = prioritet;
}

void Client::setStr(std::string str)
{
	_str = str;
}

std::string Client::getStr()
{
	return _str;
}

void swap(Client& lhs, Client& rhs) noexcept 
{
	using std::swap;
	swap(lhs._prioritet, rhs._prioritet);
	swap(lhs._name, rhs._name);
	swap(lhs._str, rhs._str);
}
Client& Client::operator=( Client other)
{
	swap(*this, other);
	return *this;
}

std::ostream& operator << (std::ostream& out, const Client& client)
{
	out << "[" << client._prioritet << " "  << client._name << " " << client._str << "]" << std:: endl;
	return out;
}





