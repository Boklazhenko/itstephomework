//	������� 2: 
//	�������� �������, ������� ������� �� ������ ��� ��������� � ��� ��������� �������.

#include <iostream>
#include <string>

void symb_del(std::string line, char symb)
{
	int size = line.size();

	for (int i = 0; i < size; i++)
		if (line[i] == symb)											//  ��� ���������� ��������� ������� ������ ���������� �� 1 �������
			for (int j = i; j < size; j++)
				line[j] = line[j+1];

	std::cout << line;
}


void main()
{
	setlocale(LC_ALL, "rus");
	std::string Line;
	std::cout << "���� ������: ";
	std::cin >> Line;
	
	char symb;
	std::cout <<std::endl << "���� ���������� �������: ";
	std::cin >> symb;

	symb_del(Line, symb);
}
