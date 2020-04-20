#include <iostream>
#include "flat.h"

int main()
{
	Flat fl1 (32, 1800000);
	Flat fl2(30, 1850000);
	Flat fl3 = fl1;
	fl1.print();
	fl2.print();
	fl3.print();
	if (fl1 == fl2)
		std::cout << "Areas are equal" << std::endl;
	else
	std::cout << "Areas aren`t equal" << std::endl;
	if(fl2>fl3)
		std::cout<<"Fl2 is more expensive"<<std::endl;
	else
		std::cout << "Fl3 is more expensive" << std::endl;
}