#pragma once
#include <iostream>
using namespace std;

class Company {
public:
	Company();
	Company(string name, string owner, string phoneNumber, string address, string sphere);
	string companyToString() const;
	string getName()const;
	string getOwner() const;
	string getPhoneNumber() const;
	string getAddress()const;
	string getSphere() const;
	void setName(const std::string& name);
	void setOwner(const std::string& owner);
	void setPhoneNumber(const std::string& phoneNumber);
	void setAddress(const std::string& address);
	void setSphere(const std::string& sphere);
		
private:
	string _name;
	string _owner;
	string _phoneNumber;
	string _address;
	string _sphere;
};

std::ostream& operator<< (ostream& os, const Company& company);
std::istream& operator>> (istream& is, Company& company);