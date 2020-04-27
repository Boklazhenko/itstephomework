//	«адание 6: 
//	ѕользователь вводит строку.ќпределить количество букв, количество цифр и количество остальных символов, 
//	присутствующих в строке.
//	–екомендации:
//	ƒл€ проверки, что символ €вл€етс€ числом, не об€зательно сравнивать его со всеми 10 - ю цифрами, достаточно 
//	сравнить код символа с диапазоном кодов цифр. од символа 0 Ц 48, 1 Ц 49, 2 Ц 50 Е. 9 Ц 57.

#include <iostream>

void main()
{
	setlocale(LC_ALL, "rus");

	std::cout << "¬вод строки: ";
	char line[100] ;
	std::cin >> line;
	std::cout << "line: " << line;

	int letter_count = 0;
	int number_count = 0;
	int symbol_count = 0;

	char ch;
	int size = 0;

	while (line[size])
	{
		size++;
	}

	std::cout << std::endl << " size: " << size << std::endl;


	for (int i = 0; i < size; i++)
	{
		if (((int)line[i] > 47) && ((int)line[i] < 58))	
		{															//	ѕо коду символа определ€ем его категорию	
			number_count++;
		}
		else if ((((int)line[i] > 64) && ((int)line[i] < 91)) || ((int)line[i] > 96) && ((int)line[i] < 123))
		{
			letter_count++;
		}
	}

	symbol_count = size - number_count - letter_count;

	std::cout << std::endl << " number: " << number_count << std::endl;
	std::cout << std::endl << " letter: " << letter_count << std::endl;
	std::cout << std::endl << " symbol: " << symbol_count << std::endl;
}