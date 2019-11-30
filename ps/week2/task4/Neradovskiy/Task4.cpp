// Найти произведение всех целых чисел от a до 20 (значение a вводится с клавиатуры: 1 <=a <= 20).

#include <iostream>

int main()
{
	uint16_t a;
	uint64_t result = 1;
	
	std::cout << "Enter num from 1 to 20: ";
	std::cin >> a;
	if (1 <= a && a <= 20) {
		do
		{
			result *= a;
			a++;
		} while (a <= 20);
		std::cout << result << std::endl;
	}
	else
	{
		std::cout << "Error, please enter correct num \n";
	}
}