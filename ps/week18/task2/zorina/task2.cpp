//Создайте класс Complex(комплексное число) или используйте уже созданный вами класс.
//Создайте перегруженные операторы для реализации арифметических операций для по работе с комплексными числами(операции + , -, *, / ).

#include <iostream>
#include "complexNum.h"

int main()
{
	ComplexNum z1(2, 3);
	ComplexNum z2(4, 7);
	ComplexNum z3 = z1 + z2;
	ComplexNum z4 = z1 - z2;
	ComplexNum z5 = z1 * z2;
	ComplexNum z6 = z1 / z2;
	z1.print();
	z2.print();
	std::cout << "z1(2,3) + z2(4,7)= "; z3.print();
	std::cout << "z1(2,3) - z2(4,7)= "; z4.print();
	std::cout << "z1(2,3) * z2(4,7)= "; z5.print();
	std::cout << "z1(2,3) / z2(4,7)= "; z6.print();
}