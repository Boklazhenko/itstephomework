

#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
	Fraction a(1, 4);
	Fraction b(2, 8);
	Fraction c = a + b;
	c.print();
	Fraction d = a - b;
	d.print();
	Fraction h = a * b;
	h.print();
	Fraction m = a / b;
	m.print();
	return 0;
}





