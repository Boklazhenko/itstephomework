
#include "Flat.h"
#include <iostream>


int main()
{
	Flat flat1("Sibirskaya", 14, 55.6, 6000000);
	Flat flat2("Sibirskaya", 35, 68.9, 7000000);
	Flat flat3("Sibirskaya", 76, 65.7, 6800000);
	flat1 = flat2;
	flat1.print();
	flat2.print();
	bool result =flat1 == flat3;
	cout << result << endl;
	bool comp = flat2 > flat3;
	cout << comp << endl;

}

