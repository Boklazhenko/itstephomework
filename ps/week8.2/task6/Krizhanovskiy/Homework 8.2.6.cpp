//	������� 6: 
//	������������ ������ ������.���������� ���������� ����, ���������� ���� � ���������� ��������� ��������, 
//	�������������� � ������.
//	������������:
//	��� ��������, ��� ������ �������� ������, �� ����������� ���������� ��� �� ����� 10 - � �������, ���������� 
//	�������� ��� ������� � ���������� ����� ����.��� ������� 0 � 48, 1 � 49, 2 � 50 �. 9 � 57.

#include <iostream>

void main()
{
	setlocale(LC_ALL, "rus");

	std::cout << "���� ������: ";
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
		{															//	�� ���� ������� ���������� ��� ���������	
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