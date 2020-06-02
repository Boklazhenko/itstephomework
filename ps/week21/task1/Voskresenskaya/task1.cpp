#include "Client.h"
#include <string>
#include <iostream>
#include "Print.h"

int main()
{
	Client c1(important, print1);
	std::cout << c1;
	Print print;
	Client* pC1 = &c1; 
	print.Add(pC1);
	Client с2(middle, print3);
	Client* pC2 = &с2;
	print.Add(pC2);
	Client с3(middle, print5);
	Client* pC3 = &с3;
	print.Add(pC3);
	Client с4(unimportant, print2);
	Client* pC4 = &с4;
	print.Add(pC4);
	Client с5(important, print4);
	Client* pC5 = &с5;
	print.Add(pC5);
	print.show();

	print.Extract();
	print.Extract();
	print.Extract();
	print.Extract();
	std::cout << print.count() << std::endl;
	print.Extract();
	print.showHistory();
	std::cout << print.IsEmpty();
	return 0;
}


