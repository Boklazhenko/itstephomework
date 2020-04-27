//	Задание 7: 
//	Дана строка символов.Заменить в ней все пробелы на табуляции.

#include <iostream>

void main()
{
	setlocale(LC_ALL, "rus");

	char line[41] = "Вышел заяц на крыльцо почесать своё лицо";
	std::cout << line << std::endl;

	for (int i = 0; i < 41; i++)
	{
		if (((int)line[i] == 32))
		{
			line[i] =(char) 9;
		}
	}
	std::cout << line << std::endl;
}