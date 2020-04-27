//	Задание 4:
//	Написать программу, которая заменяет все символы точки "." в строке, введенной пользователем, на символы 
//	восклицательного знака "!".

#include <iostream>

void main()
{
	setlocale(LC_ALL, "rus");

	char line[500];
	std::cout << "Ввод строки: " << std::endl;
	std::cin >> line;
	std::cout << "Строка до замены . на !: " << std::endl;
	std::cout << line;


	char full_point = '.';
	char exclamation_mark = '!';

	for (int i = 0; i < 100; i++)
	{
		if (line[i] == full_point)
		{
			line[i] = exclamation_mark;
		}
	}
	std::cout <<std::endl << "Строка после замены . на !: " << std::endl;
	std::cout << line;
}