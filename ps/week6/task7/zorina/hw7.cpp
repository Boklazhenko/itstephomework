// Написать функцию, определяющую количество положительных, отрицательных и нулевых элементов передаваемого ей массива
//

#include <iostream>

void countElements(int size, int arr[])
{
	int amountOfPosElem = 0, amountOfNegElem = 0, amountOfNull = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > 0)
			++amountOfPosElem;
		if (arr[i] < 0)
			++amountOfNegElem;
		if (arr[i] == 0)
			++amountOfNull;
	}
	std::cout << "The array contain " << amountOfPosElem << " positive elements\n";
	std::cout << "The array contain " << amountOfNegElem << " negative elements\n";
	std::cout << "The array contain " << amountOfNull << " null elements\n";
}

int main()
{ /*проверка работы функции
	const int size = 10;
	int arr[] = { 1,0,3,-4,-6,0,87,34,-56,0 };
	countElements(10, arr);*/
}

