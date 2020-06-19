#include <iostream>
#include "DataGAI.h"

int main()
{
	DataGai test;
	const char* car1 = "e761kh58rus";
	const char* car2 = "u123fk59eur";
	std::string str = "over speed ";
	std::string strCrash = "crach";
	test.add(car1, str);
	test.add(car2, str);
	test.add(car1, strCrash);
	test.print();
	test.printCar(car2);
}