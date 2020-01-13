#include <iostream>
#include <time.h>

using namespace std;

void insertSort(int array[], int arraySize)
{
	for (int i = 1; i < arraySize; ++i)
	{
		int temp = array[i];

		for (int j = i -1; j >= 0 && array[j] > temp;)
		{
			array[j + 1] = array[j];
			--j;
			array[j + 1] = temp;
		}
	}
}

void fillArray(int array[], int arraySize)
{
	srand(time(0));
	for (int i = 0; i < arraySize; ++i)
	{
		array[i] = rand() % 100;
	}
}

void printArray(int array[], int arraySize)
{
	for (int i = 0; i < arraySize; ++i)
	{
		cout << array[i] << "\t";
	}
	cout << endl;
}

int main()
{
	const int arraySize = 10;
	int array[arraySize];

	fillArray(array, arraySize);
	printArray(array, arraySize);
	insertSort(array, arraySize);
	printArray(array, arraySize);
}
