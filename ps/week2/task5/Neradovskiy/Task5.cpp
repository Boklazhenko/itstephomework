// �������� ���������, ������� ������� �� ����� ������� ��������� �� k, ��� k �
//����� ��������.��������, ��� 7 - �� �������� :
//7 x 2 = 14
//7 x 3 = 21

#include <iostream>

int main()
{
	int numberVar, result;
    std::cout << "Enter option number: ";
	std::cin >> numberVar;
	for (int i = 0; i < 11; ++i)
	{
		result = numberVar * i;
		std::cout << numberVar << " x " << i << " = " << result << std::endl;
	}
}