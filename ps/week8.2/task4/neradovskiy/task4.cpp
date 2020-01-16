#include <iostream>

void replase(char line[], int size, char from, char to);

int main()
{
	const int size = 256;
	char line[size];
	std::cout << "Enter text(max " << size - 2 << " simbols) \n";
	gets_s(line, size);
	//std::cin >> line;
	if (strlen(line) > size - 2)
		std::cout << "Error, too many simbols";
	else
	{
		std::cout << "Enter simbol from replase:";
		char from;
		std::cin >> from;
		std::cout << "enter simbol to replase: ";
		char to;
		std::cin >> to;
		replase(line, strlen(line), from, to);
		std::cout << line;
	}
}
//не заменяет зглавные буквы можно сделать через приведение всей строки к одному регистру но решение не очень нравится
//в целом задание выполнено

void replase(char line[], int size, char from, char to) {
	for (int i = 0; i < size; ++i)
		if (line[i] == from)
			line[i] = to;
}