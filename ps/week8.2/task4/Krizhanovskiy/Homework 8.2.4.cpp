//	������� 4:
//	�������� ���������, ������� �������� ��� ������� ����� "." � ������, ��������� �������������, �� ������� 
//	���������������� ����� "!".

#include <iostream>

void main()
{
	setlocale(LC_ALL, "rus");

	char line[500];
	std::cout << "���� ������: " << std::endl;
	std::cin >> line;
	std::cout << "������ �� ������ . �� !: " << std::endl;
	std::cout << line;


	char full_point = '.';
	char exclamation_mark = '!';

	for (int i = 0; i < 100; i++)
	{
		if (line[i] == full_point)
		{
			line[i] = exclamation_mark;
		}
	}
	std::cout <<std::endl << "������ ����� ������ . �� !: " << std::endl;
	std::cout << line;
}