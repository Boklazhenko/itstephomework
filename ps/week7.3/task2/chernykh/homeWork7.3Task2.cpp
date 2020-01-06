#include <iostream>

using namespace std;

void printArray(int array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << array[i] << "\t";
	}
}

int main()
{
	const int arraySize = 5;
	int array[arraySize]{ 1,2,3,4,5 };

	printArray(array, arraySize);
	cout << endl;

	int* pBeginArray = array, * pEndArray = &array[arraySize - 1];

	while (*pBeginArray != *pEndArray)
	{
		int temp = *pBeginArray;
		*pBeginArray = *pEndArray;
		*pEndArray = temp;

		++pBeginArray;
		--pEndArray;
	}

	printArray(array, arraySize);
}
