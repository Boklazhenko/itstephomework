#include <iostream>
#include "complex.h"

int main()
{
	Complex z1(2, 3);
	Complex z2(4, 7);
	Complex z3 = z1 + z2;
	Complex z4 = z1 - z2;
	Complex z5 = z1 * z2;
	Complex z6 = z1 / z2;
	z1.print();
	z2.print();
	std::cout << "z1(2,3) + z2(4,7)= "; z3.print();
	std::cout << "z1(2,3) - z2(4,7)= "; z4.print();
	std::cout << "z1(2,3) * z2(4,7)= "; z5.print();
	std::cout << "z1(2,3) / z2(4,7)= "; z6.print();
	std::cout << Complex::getCount()<<std::endl;
}
