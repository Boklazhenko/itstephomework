// Вывести на экран все числа от нуля до введенного пользователем числа.
//

#include <iostream>

int main()
{
	int num;
	std::cout << "Enter num: ";
	std::cin >> num;
	if (num >= 0) //Если введено число больше или равно 0
	{
		for (int i = 0; i < num + 1; ++i)
		{
			std::cout << i << std::endl;
		}
	}
	else // если введено отрицательное число
	{
		for (int i = num; i < 0; ++i)
		{
			std::cout << i << std::endl;
		}
	}

}