// Найти среднее арифметическое всех целых чисел от 1 до 1000.

#include <iostream>

int main()
{
	int sum = 1, i = 0;
	do
	{
		sum += i;
		++i;

	} while (i < 1000);
	std::cout << sum / i << std::endl;

}

