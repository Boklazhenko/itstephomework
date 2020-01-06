#include <iostream>
#include <time.h>

using namespace std;

void bubbleSort(int array[], int arraySize)
{
	bool swapped = false;

	for (int i = 0; i < arraySize - 1; ++i)
	{
		swapped = false;
		for (int j = 0; j < arraySize - i - 1; ++j)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				swapped = true;               //были ли перестановки
			}
		}
		if (!swapped)
		{
			break;
		}
	}
}

void fillArray(int array[], int size)
{
	srand(time(0));
	for (int i = 0; i < size; ++i)
	{
		array[i] = rand() % 100;
	}
}

void printArray(int array[], int size)
{
	for (int i = 0; i < size; ++i)
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
	bubbleSort(array, arraySize);
	printArray(array, arraySize);
}
