//	������� 1:	
//	�������� �������, ������� ������� �� ������ ������ � �������� �������.

#include <iostream>
#include <string>

void sym_del(std::string Line, int N)
{
	int size = Line.size();

	for (int i = N; i < size; i++)										//	�� ����� ���������� ������� ���������� ���������,
		Line[i] = Line[i + 1];											//	����� ������� ������� ���� ������ �� 1
	
	std::cout << Line;
}

void main()
{
	setlocale(LC_ALL, "rus");
	std::string line;
	std::cout << "���� ������: ";
	std::cin >> line;
	int var;
	std::cout << "���� ������ ���������� �������: ";
	std::cin >> var;													//	����� ���������� �������	
	sym_del(line, var);
}