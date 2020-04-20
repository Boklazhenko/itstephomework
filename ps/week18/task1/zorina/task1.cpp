
#include <iostream>
#include "fraction.h"

int main()
{
	Fraction fr1(15, 32);
	Fraction fr2(3, 8);
	Fraction fr3 = fr1 + fr2;
	Fraction fr4 = fr3 + fr1;
	std::cout << "15/32 + 3/8 "; fr3.print();
	std::cout << "Fraction 4 "; fr4.print();
	Fraction fr5 = fr2 + 2;
	std::cout << "3/8+2 "; fr5.print();
	Fraction fr6 = fr1 - 1;
	std::cout << "15/32-1 "; fr6.print();
	Fraction fr7 = fr1 - fr2;
	std::cout << "15/32 - 3/8 "; fr7.print();
	Fraction fr8 = fr1 * fr2;
	std::cout << "15/32 * 3/8 "; fr8.print();
	Fraction fr9 = fr1 *0;
	std::cout << "15/32 *0 "; fr9.print();
	Fraction fr10 = fr1 / fr2;
	std::cout << "15/32 / 3/8 "; fr10.print();
	Fraction fr11 = fr1 /2;
	std::cout << "15/32 / 2 "; fr11.print();
	std::cout << "Fraction 1 "; fr1.print();
	std::cout << "Fraction 2 "; fr2.print();

	return 0;
}