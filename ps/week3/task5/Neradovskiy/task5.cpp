//Пользователь вводит целое число А.Программа должна определить, что куб суммы
//цифр этого числа равен А* А

#include <iostream>
#include <math.h>    // подключаем функцию для вычисления куба

int main()
{
	int num, digit, sumDigit = 0;
	double temporary, square, cube;
	std::cout << "Enter num: ";
	std::cin >> num;
	temporary = num;								// создал временну переменную так как калечу num в цикле
	for (; num != 0; num /= 10) {
		digit = num % 10;
		sumDigit += digit;
	}
	square = pow(temporary, 2);
	cube = pow(sumDigit, 3);

	if (cube == square)
	{
		std::cout << "Cube sum digit num equal squared number";
	}
	else
	{
		std::cout << "Cube sum digit num not equal squared number";
	}
}
