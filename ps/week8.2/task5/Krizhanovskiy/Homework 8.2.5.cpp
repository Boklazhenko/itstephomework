//	Задание 5: 
//	Пользователь вводит строку символов и искомый символ, посчитать сколько раз он встречается в строке.

#include <iostream>

void main()
{
	setlocale(LC_ALL, "rus");
	char line[100];
	char symb;
	int counter = 0;

	std::cout << "Ввод строки: " << std::endl;
	std::cin >> line;

	std::cout << "Ввод символа: " << std::endl;
	std::cin >> symb;

	int size = 0;

	while (line[size])
		size++;
	
	for (int i = 0; i < size; i++)
		if (line[i] == symb)
			counter++;

	std::cout <<"Символ "<<symb <<" встречается в строке " <<line <<" "<< counter << " раз(а).";
}