#include <iostream>

using namespace std;

int swapArray(int* array, int size)
{
	int* pBeginArray = array, *pEndArray = &array[size - 1];

	while (*pBeginArray != *pEndArray)
	{
		int temp = *pBeginArray;
		*pBeginArray = *pEndArray;
		*pEndArray = temp;

		++pBeginArray;
		--pEndArray;
	}
	return *array;
}

int main()
{
	const int arraySize = 7;
	int arrayOne[arraySize]{ 1,2,3,4,5,6,7 };
	int arrayTwo[arraySize]{};

	int* pArrayOne = arrayOne, * pArrayTwo = arrayTwo;

	swapArray(arrayOne, arraySize);

	for (int i = 0; i < arraySize; ++i)
	{
		*(arrayTwo + i) = *(arrayOne + i);
	}

	swapArray(arrayOne, arraySize);

	for (int i = 0; i < arraySize; ++i)
	{
		cout << *(arrayOne + i) << "\t";
	}

	cout << endl;

	for (int i = 0; i < arraySize; ++i)
	{
		cout << *(arrayTwo + i) << "\t";
	}
}
