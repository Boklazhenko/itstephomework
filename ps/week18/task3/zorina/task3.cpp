#include <iostream>
#include "overcoat.h"

int main()
{
	Overcoat p1("Over", "M", 3000);
	Overcoat p2 = p1;
	Overcoat p3("Over", "S", 15000);
	p1.print();
	p2.print();
	p3.print();
	if (p3 == p1)
		cout << "Overcoat`s types are equal" << endl;
	else
		cout << "Overcoat`s types aren`t equal" << endl;
	if (p3 > p2)
		cout << "Overcoat p3 is more expensive" << endl;
	else
		cout << "Overcoat p2 is more expensive" << endl;

	return 0;
}