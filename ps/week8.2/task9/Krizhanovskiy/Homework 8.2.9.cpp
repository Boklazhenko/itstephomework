//	������� 10:
//	���� ������ ��������.���������� ��������� �������� �� ��� ������ �����������.


#include <iostream>

bool polyndrome(char line[])													//	�������, ����������� ������
{
	int size = 0;

	while (line[size])
		size++;

	for (int i = 0; i < size / 2; ++i)
		if (line[i] != line[size - i - 1])
			return false;
		
	return true;
}

void main()
{
	char line1[7] = "abcdef";													//	�������� ������
	char line2[7] = "abccba";
	
	if (polyndrome(line1))														//	�������� ����� �������
		std::cout << "Line 1 is a polyndrome." << std::endl;
	
	else
		std::cout << "Line 1 is not a polyndrome." << std::endl;
	


	if (polyndrome(line2))
		std::cout << "Line 2 is a polyndrome." << std::endl;
	
	else
		std::cout << "Line 2 is not a polyndrome." << std::endl;
	
}