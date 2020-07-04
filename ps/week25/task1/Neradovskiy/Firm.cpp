#include "Firm.h"

Firm::Firm()
{
	_name = "";
	_owner = "";
	_phone = "";
	_address = "";
	_occupation = "";
}

Firm::Firm(const std::string& name, const std::string& owner, const std::string& phone,
	const std::string& address, const std::string& occupation)
{
	_name = name;
	_owner = owner;
	_phone = phone;
	_address = address;
	_occupation = occupation;
}

std::string Firm::toString() const
{
	std::ostringstream sout;
	sout << _name << " " << _owner << " " << _phone << " " << _address << " " << _occupation << std::endl;
	return sout.str();
}

std::string Firm::getName() const
{
	return _name;
}

std::string Firm::getOwner() const
{
	return _owner;
}

std::string Firm::getPhone() const
{
	return _phone;
}

std::string Firm::getOccupation() const
{
	return _occupation;
}

void Firm::setName(const std::string& name)
{
	_name = name;
}

void Firm::setOwner(const std::string& owner)
{
	_owner = owner;
}

void Firm::setPhone(const std::string& phone)
{
	_phone = phone;
}

void Firm::setAddress(const std::string& address)
{
	_address = address;
}

void Firm::setOccupation(const std::string& occupation)
{
	_occupation = occupation;
}

void Firm::operator=(Firm other)
{
	swap(*this, other);
}

bool Firm::operator==(const Firm& other)
{
	return (_name == other._name && 
		_owner == other._owner && 
		_phone == other._phone &&
		_address == other._address && 
		_occupation == other._occupation);
}

bool Firm::operator!=(const Firm& other)
{
	return !(*this == other);
}

void Firm::swap(Firm& lhs, Firm& rhs)
{
	lhs._name.swap(rhs._name);
	lhs._owner.swap(rhs._owner);
	lhs._phone.swap(rhs._phone);
	lhs._address.swap(rhs._address);
	lhs._occupation.swap(rhs._occupation);
}

std::ostream& operator<<(std::ostream& out, const Firm& firm)
{
	return out << firm.toString();
}

std::istream& operator>>(std::istream& in, Firm& firm)
{
	std::string name;
	std::string owner;
	std::string phone;
	std::string address;
	std::string occupation;
	in >> name;
	firm.setName(name);
	in.ignore();
	in >> owner;
	firm.setOwner(owner);
	in.ignore();
	in >> phone;
	firm.setPhone(phone);
	in.ignore();
	in >> address;
	firm.setAddress(address);
	in.ignore();
	in >> occupation;
	firm.setOccupation(occupation);
	return in;
}
