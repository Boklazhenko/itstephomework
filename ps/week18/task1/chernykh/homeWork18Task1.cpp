#include "fraction.h"

int main()
{
	Fraction f1(3, 15);
	Fraction f2(4, 18);

	Fraction f3 = f1 + f2;
	Fraction f4 = f1 - f2;
	Fraction f5 = f1 * f2;
	Fraction f6 = f1 / f2;

	f3.print();
	f4.print();
	f5.print();
	f6.print();

	return 0;
}