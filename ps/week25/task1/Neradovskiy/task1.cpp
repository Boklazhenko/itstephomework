#include <iostream>
#include "Directory.h"

int main()
{
	std::string name = "Paterka";
	std::string owner = "Vasiya";
	std::string phone = "8-963-18-76-321";
	std::string address = "Lenina-100-padik-5-ofice-6";
	std::string occupation = "Alcohol";
	Directory test("Test.txt");
	test.add(name, owner, phone, address, occupation);

		std::cout << test.toString() << std::endl;
	std::cout << "----------------------" << std::endl;
	std::string name1 = "Lion";
	std::string owner1 = "Fedya";
	std::string phone1 = "2194481";
	std::string address1 = "Lenina";
	std::string occupation1 = "Alco";
	Firm* firm = test.searchCriteria(name);
	Firm other(name1, owner1, phone1, address1, occupation1);
	if (firm == nullptr) {
		std::cout << "Firm " << name << " not found" << std::endl;
		return 1;
	}
	if (!test.changeFirm(*firm, other))
		std::cout << "Faled" << std::endl;
	else
	{
		std::cout << test.toString() << std::endl;
	}
	delete firm;
}