#pragma once
#include <iostream>
#include <sstream>
#include <string>

class Firm
{
public:
	Firm();
	Firm(const std::string& name, const std::string& owner, const std::string& phone,
		const std::string& address, const std::string& occupation);
	std::string toString() const;
	std::string getName()const;
	std::string getOwner() const;
	std::string getPhone() const;
	std::string getOccupation() const;
	void setName(const std::string& name);
	void setOwner(const std::string& owner);
	void setPhone(const std::string& phone);
	void setAddress(const std::string& address);
	void setOccupation(const std::string& occupation);
	void operator= (Firm other);
	bool operator==(const Firm& other);
	bool operator!=(const Firm& other);

private:
	void swap(Firm& lhs, Firm& rhs);
	std::string _name;
	std::string _owner;
	std::string _phone;
	std::string _address;
	std::string _occupation;
};

std::ostream& operator<< (std::ostream& out, const Firm& finm);
std::istream& operator>> (std::istream& in, Firm& firm);