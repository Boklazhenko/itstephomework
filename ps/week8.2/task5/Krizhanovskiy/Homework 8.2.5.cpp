//	������� 5: 
//	������������ ������ ������ �������� � ������� ������, ��������� ������� ��� �� ����������� � ������.

#include <iostream>

void main()
{
	setlocale(LC_ALL, "rus");
	char line[100];
	char symb;
	int counter = 0;

	std::cout << "���� ������: " << std::endl;
	std::cin >> line;

	std::cout << "���� �������: " << std::endl;
	std::cin >> symb;

	int size = 0;

	while (line[size])
		size++;
	
	for (int i = 0; i < size; i++)
		if (line[i] == symb)
			counter++;

	std::cout <<"������ "<<symb <<" ����������� � ������ " <<line <<" "<< counter << " ���(�).";
}