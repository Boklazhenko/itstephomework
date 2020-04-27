#include <iostream>
#include "Fraction.h"

int main()
{
	Fraction a(2, 10);
	Fraction b;
	Fraction c = a + b;
	a.print();
	c.print();
	Fraction d = c * a;
	d.print();
	Fraction e = a / d;
	e.print();
	Fraction f = a - b;
	f.print();
}