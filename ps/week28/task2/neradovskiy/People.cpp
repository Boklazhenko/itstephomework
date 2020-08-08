#include "People.h"


People::People(const std::string& lastName, const std::string& name, const std::string& telephone, const Passport* passport)
{
	if (!isCorrectString(lastName))
		throw InvalidData::BadLastName();
	if (!isCorrectString(name))
		throw InvalidData::BadName();
	if (!isCorrectTelephone(telephone))
		throw InvalidData::BadPhone();
	if (!passport)
		throw BadPtr::BadPtr();
	_lastName = lastName;
	_name = name;
	_telephone = telephone;
	_passport = new Passport(*passport);
}

People::~People()
{
	delete _passport;
}

std::string People::toString()
{
	std::ostringstream out;
	out << _lastName << " " << _name << " " << "[ " << _telephone << " ] " << _passport;
	return out.str();
}

bool People::isCorrectTelephone(const std::string& telephone)
{
	for (int i = 0; i < telephone.size(); ++i)
		if (telephone[i] < '0' || telephone[i] > '9')
			return false;
	return true;
}

bool People::isCorrectString(const std::string& str)
{
	for (int i = 0; i < str.size(); ++i)
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return false;
	return true;
}
