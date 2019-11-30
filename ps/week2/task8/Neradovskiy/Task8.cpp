// Пользователь вводит две границы диапазона. Посчитать сумму всех чисел
// диапазона

#include <iostream>

int main()
{
	int num1, num2, sum = 0;
	std::cout << "Enter two numbers\n";
	std::cin >> num1 >> num2;
	if (num1 <= num2) {
		for (num1; num1 <= num2; ++num1)
			sum += num1;
		std::cout << sum << std::endl;
	}
	else
	{
		for (num2; num2 <= num1; ++num2)
			sum += num2;
		std::cout << sum << std::endl;
	}
}
