//	Задание 1:	
//	Написать функцию, которая удаляет из строки символ с заданным номером.

#include <iostream>
#include <string>

void sym_del(std::string Line, int N)
{
	int size = Line.size();

	for (int i = N; i < size; i++)										//	На место удаляемого символа записываем следующий,
		Line[i] = Line[i + 1];											//	таким образом сдвигая весь массив на 1
	
	std::cout << Line;
}

void main()
{
	setlocale(LC_ALL, "rus");
	std::string line;
	std::cout << "Ввод строки: ";
	std::cin >> line;
	int var;
	std::cout << "Ввод номера удаляемого символа: ";
	std::cin >> var;													//	Номер удаляемого символа	
	sym_del(line, var);
}