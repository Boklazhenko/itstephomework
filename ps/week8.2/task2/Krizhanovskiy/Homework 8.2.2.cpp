//	Задание 2: 
//	Написать функцию, которая удаляет из строки все вхождения в нее заданного символа.

#include <iostream>
#include <string>

void symb_del(std::string line, char symb)
{
	int size = line.size();

	for (int i = 0; i < size; i++)
		if (line[i] == symb)											//  При нахождении введённого символа массив сдвигается на 1 позицию
			for (int j = i; j < size; j++)
				line[j] = line[j+1];

	std::cout << line;
}


void main()
{
	setlocale(LC_ALL, "rus");
	std::string Line;
	std::cout << "Ввод строки: ";
	std::cin >> Line;
	
	char symb;
	std::cout <<std::endl << "Ввод удаляемого символа: ";
	std::cin >> symb;

	symb_del(Line, symb);
}
