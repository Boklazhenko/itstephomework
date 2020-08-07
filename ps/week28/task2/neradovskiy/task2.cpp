#include <iostream>
#include "People.h"

int main()
{
	const std::string lastName = "Sumkin";
	const std::string name = "Fedor";
	const std::string telephone = "2554075";
	Passport pass;
	Passport* pPassport = &pass;

	try {
		People people(lastName, name, telephone, pPassport);
		std::cout << people.toString() << std::endl;
	}
	

	catch (InvalidData::InvalidData& ex) {
		std::cout << ex.what() << std::endl;
	}

	catch (BadPtr::BadPtr& ex) {
		std::cout << ex.what() << std::endl;
	}
}