//Напишите программу, которая вычисляет сумму целых чисел от а до 500 (значение a вводится с клавиатуры).

#include <iostream>

int main()
{
	int sum = 0, i;
	std::cout << "Enter num: ";
	std::cin >> i;
	for (i; i <= 500; ++i) {

		sum += i;
	}

	std::cout << sum;

}