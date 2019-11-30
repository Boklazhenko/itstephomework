// Пользователь вводит две границы диапазона, вывести на экран все числа из этого диапазона. 
//Предусмотреть, чтобы пользователь мог вводить границы диапазона в произвольном порядке. 
//вывести все четные числа из диапазона. вывести все нечетные числа из диапазона. вывести все числа, кратные семи.

#include <iostream>

int main()
{
	int num1, num2, answer;
	std::cout << "Enter 2 numbers: ";
	std::cin >> num1 >> num2;
	do
	{
		std::cout << "Please 1 if you wont to see all range numbers\n";         //для удобства сделал небольшое меню
		std::cout << "Please 2 if you wont to see all even numbers\n";
		std::cout << "Please 3 if you wont to see all odd numbers\n";
		std::cout << "Please 4 if you wont to see all numbers are multiples of 7\n ";
		std::cout << "Please 5 if you wont to exit\n";
		std::cin >> answer;

		switch (answer)														// Проверяем выбор пользователя для действия
		{
		case 1:																//вывести все числа из диапазона
			if (num1 <= num2) {
				for (num1; num1 < num2; ++num1)
				{
					std::cout << num1 << "\tRange numbers" << std::endl;
				}
			}
			else
			{
				for (num1; num2 < num1; ++num2)
					std::cout << num2 << "\tRange numbers" << std::endl;
			}
			break;
		case 2:																//вывести все четные числа из диапазона
			if (num1 <= num2) {
				for (num1; num1 < num2; ++num1)
				{
					if (num1 % 2 == 0)
						std::cout << num1 << "\teven numbers" << std::endl;

				}
			}
			else
			{
				for (num1; num2 < num1; ++num2)
					if (num2 % 2 == 0)
						std::cout << num2 << "\teven numbers" << std::endl;
			}
			break;
		case 3:																//вывести все нчетные числа диапазона
			if (num1 <= num2) {
				for (num1; num1 < num2; ++num1)
				{
					if (num1 % 2 != 0)
						std::cout << num1 << "\todd numbers" << std::endl;

				}
			}
			else
			{
				for (num1; num2 < num1; ++num2)
					if (num2 % 2 == 1 || num2 % 2 == -1)
						std::cout << num2 << "\todd numbers" << std::endl;
			}
			break;
		case 4:																//все числа кратные 7
			if (num1 <= num2) {
				for (num1; num1 < num2; ++num1)
				{
					if (num1 % 7 == 0)
						std::cout << num1 << "\tnumbers are multiples of 7" << std::endl;

				}
			}
			else
			{
				for (num1; num2 < num1; ++num2)
					if (num2 % 7 == 0)
						std::cout << num2 << "\tnumbers are multiples of 7" << std::endl;
			}
			break;
		case 5:
			std::cout << "\nExit\n";																		//выход из программы
			break;
		default:
			std::cout << "\n Error!!! This operation isn`t correct\n";
		}
	} while (answer != 5);
	std::cout << "\n Bye...\n";

}