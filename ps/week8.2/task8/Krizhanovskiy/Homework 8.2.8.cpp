//	������� 8:
//	���������� ���������� ���� �� ��������� �����������.

#include <iostream>
#include <cstdio>

void main()
{

	std::cout << "Enter sentence: ";
	char line[100];
	gets_s(line);																		//	���� �����������
	std::cout << "Your sentence: " << line;

	int size = 0;
	int word_count = 1;

	while (line[size])																	//	������� �������� � �����������
		size++;																			//
	

	for (int i = 0; i < size; i++)														//	������� ����� �� ���������� ��������
	{																					//
		if ((int)line[i] == 32)															//
		{																				//
			word_count++;																//
		}																				//
	}

	std::cout << std::endl << "Words in your sentence: " << word_count << std::endl;
}