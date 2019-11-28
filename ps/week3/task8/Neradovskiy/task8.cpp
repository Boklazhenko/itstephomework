//Пользователь вводит число.Определить количество цифр в этом числе, посчитать их сумму и
//среднее арифметическое.Определить количество нулей в этом числе.Общение с пользователем
//организовать через меню.


#include <iostream>

int main()
{
	int num, digit;
	int zeroCount = 0, digitCount = 0, sumDigit = 0;
		std::cout << "Enter num: ";
	std::cin >> num;
	int answer;
	for (; num != 0; num /= 10)
	{
		digit = num % 10;
		sumDigit += digit;
		++digitCount;
		if (digit == 0)
			++zeroCount;
	}
	do
	{
		std::cout << "\nSelect operation: \n";
		std::cout << "\n1 - If you want see number of digits in num \n";
		std::cout << "\n2 - If you want see summ digit and average \n";
		std::cout << "\n3 - If you want see quantity zero in number \n";
		std::cout << "\n0 - If you want exit \n";
		std::cin >> answer;
		switch (answer) {
		case 1:
			std::cout << "Number of dgits in num is: " << digitCount << std::endl;
			break;
		case 2:
			std::cout << "Summ digit " << sumDigit << " and average is: " << sumDigit / digitCount << std::endl;
			break;
		case 3:
			std::cout << "Quantity zero in number is: " << zeroCount << std::endl;
			break;
		case 0:
			std::cout << "See you ;)";
			break;
		}
	} while (answer != 0);


	std::cout << "\nGood bye\n";
}