// Напишите программу, которая запрашивает два целых числа x и y, после чего вычисляет и выводит значение x в степени y.

#include <iostream>

int main()
{
	int x, y;
	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Enter y: ";
	std::cin >> y;
	float result = x;
	if (y > 0)
	{
		for (int i = y - 1; i > 0; --i)
			result *= x;
		std::cout << result << std::endl;
	}
	else if (y < 0)								//возведение в отрицательную степень
	{
		for (int i = y + 1; i < 0; ++i)
			result *= x;
		std::cout << result << std::endl;
		std::cout << 1 / result << std::endl;
	}
	else
		std::cout << "1" << std::endl;
}
//	int a, b;
//	std::cout << "Enter x: ";
//	std::cin >> a;
//	std::cout << "Enter y: ";
//	std::cin >> b;
//	std::cout << pow(a, b);
