#include <iostream>
#include <ctime>

using namespace std;

void fillArray(int array[], int size)
{
	for (int i = 0; i < size;)
	{
		bool alreadyThere = false;
		int temp = rand() % 100;
		for (int j = 0; j < i; ++j)
		{
			if (array[j] == temp)
			{
				alreadyThere = true;
			}
		}
		if (!alreadyThere)
		{
			array[i] = temp;
			++i;
		}
	}
}

void printArray(int array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << array[i] << "\t";
	}
}

int* deleteSimpleNumbers(int *array, int size)
{
	int newArraySize = 0;
	for (int i = 0; i < size; ++i)//определяем размер нового массива
	{
		int sumDividers = 0;
		bool isSimpleNumber = false;
		for (int j = 1; j <= array[i]; ++j)//ищем все простые числа
		{
			if (array[i] % j == 0)
			{
				++sumDividers;
			}
		}
		if (sumDividers == 2)
		{
			isSimpleNumber = true;
		}
		if (!isSimpleNumber)
		{
			++newArraySize;
		}
	}

	int * newArray = new int[newArraySize];
	int newArrayIndex = 0;

	for (int i = 0; i < size; ++i)
	{
		int sumDividers = 0;
		bool isSimpleNumber = false;
		for (int j = 1; j <= array[i]; ++j)
		{
			if (array[i] % j == 0)
			{
				++sumDividers;
			}
		}
		if (sumDividers == 2)
		{
			isSimpleNumber = true;
		}
		if (!isSimpleNumber)
		{
			newArray[newArrayIndex] = array[i];
			++newArrayIndex;
		}
	}
	for (int i = 0; i < newArraySize; ++i)
	{
		cout << newArray[i] << "\t";
	}

	return newArray;

	delete[] newArray;
}

int main()
{
	srand(time(nullptr));

	int arraySize = 30;
	int* array = new int[arraySize];

	fillArray(array, arraySize);
	printArray(array, arraySize);

	cout << "\n\n";
	int *newArray = deleteSimpleNumbers(array, arraySize);

	delete[] array;
	delete[] newArray;

	return 0;
}