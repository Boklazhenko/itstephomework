#include "Company.h"
#include <sstream>

Company::Company()
	:_name(" "), _owner(" "), _phoneNumber(" "), _address(" "), _sphere(" ") {}

Company::Company(string name, string owner, string phoneNumber, string address, string sphere)
	:_name(name),_owner(owner),_phoneNumber(phoneNumber),_address(address),_sphere(sphere){}

string Company::companyToString() const{
	ostringstream sout;
	sout << _name << " " << _owner << " " << _phoneNumber << " " << _address << " " << _sphere << "\n";
	return sout.str();
}

string Company::getName() const{
	return _name;
}

string Company::getOwner() const{
	return _owner;
}

string Company::getPhoneNumber() const{
	return _phoneNumber;
}

string Company::getAddress() const{
	return _address;
}

string Company::getSphere() const{
	return _sphere;
}

void Company::setName(const string& name){
	_name = name;
}

void Company::setOwner(const string& owner){
	_owner = owner;
}

void Company::setPhoneNumber(const string& phoneNumber){
	_phoneNumber = phoneNumber;
}

void Company::setAddress(const string& address){
	_address = address;
}

void Company::setSphere(const string& sphere){
	_sphere = sphere;
}

ostream& operator<<(ostream& os, const Company& company){
	return os << company.companyToString();
}

istream& operator>>(istream& is, Company& company)
{
	string name;
	string owner;
	string phoneNumber;
	string address;
	string sphere;
	is >> name;
	company.setName(name);
	is.ignore();
	is >> owner;
	company.setOwner(owner);
	is.ignore();
	is >> phoneNumber;
	company.setPhoneNumber(phoneNumber);
	is.ignore();
	is >> address;
	company.setAddress(address);
	is.ignore();
	is >> sphere;
	company.setSphere(sphere);
	return is;
}