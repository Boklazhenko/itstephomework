#include <iostream>
#include <time.h>

using namespace std;

void quickSortR(int* array, int arraySize)
{
	int i = 0, j = arraySize - 1;
	int mid = array[arraySize / 2];

	do
	{
		while (array[i] < mid)
		{
			++i;
		}
		while (array[j] > mid)
		{
			--j;
		}
		if (i <= j)
		{
			int temp = array[i];
			array[i] = array[j];
			array[j] = temp;

			++i;
			--j;
		}
	} while (i <= j);

	if (j > 0)
	{
		quickSortR(array, j + 1);
	}
	if (i < arraySize)
	{
		quickSortR(&array[i], arraySize - i);
	}
}

void fillArray(int array[], int size)
{
	srand(time(0));
	for (int i = 0; i < size; ++i)
	{
		array[i] = rand() % 100 + (-50);
	}
}

void printArray(int array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << array[i] << "\t";
	}
}

int main()
{
	const int arraySize = 9;
	int array[arraySize];

	fillArray(array, arraySize);
	printArray(array, arraySize);

	cout << endl;

	double sumArrayElements = 0;
	for (int i = 0; i < arraySize; ++i)
	{
		sumArrayElements += array[i];
	}
	double avgArray = sumArrayElements / (double)arraySize;

	int thirdPartArray = arraySize / 3;
	int x2ThirdPartArray = thirdPartArray * 2;

	if (avgArray > 0)
	{
		quickSortR(array, x2ThirdPartArray);
		for (int i = x2ThirdPartArray, j = arraySize - 1; i < j; ++i, --j)
		{
			int temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	else
	{
		quickSortR(array, thirdPartArray);
		for (int i = thirdPartArray, j = arraySize - 1; i < j; ++i, --j)
		{
			int temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}

	printArray(array, arraySize);


}