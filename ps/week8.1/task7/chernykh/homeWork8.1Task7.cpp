#include <iostream>
#include <ctime>

using namespace std;



void fillArray(int array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		array[i] = rand() % 20 + (-10);
	}
}

void printArray(int array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << array[i] << "\t";
	}
}

void distributesArray(int array[], int size)
{
	int positiveNumbersArraySize = 0, negativeNumbersArraySize = 0, zeroNumbersArraySize = 0;
	for (int i = 0; i < size; ++i)
	{
		if (array[i] == 0)
		{
			++zeroNumbersArraySize;
			continue;
		}
		array[i] > 0 ? ++positiveNumbersArraySize : ++negativeNumbersArraySize;
	}

	int* positiveNumbersArray = new int[positiveNumbersArraySize];
	int* negativeNumbersArray = new int[negativeNumbersArraySize];
	int* zeroNumbersArray = new int[zeroNumbersArraySize];

	int positiveNumbersArrayIndex = 0, negativeNumbersArrayIndex = 0, zeroNumbersArrayIndex = 0;

	for (int i = 0; i < size; ++i)
	{
		if (array[i] > 0)
		{
			positiveNumbersArray[positiveNumbersArrayIndex] = array[i];
			++positiveNumbersArrayIndex;
		}
		else if (array[i] < 0)
		{
			negativeNumbersArray[negativeNumbersArrayIndex] = array[i];
			++negativeNumbersArrayIndex;
		}
		else
		{
			zeroNumbersArray[zeroNumbersArrayIndex] = array[i];
			++zeroNumbersArrayIndex;
		}
	}

	printArray(positiveNumbersArray, positiveNumbersArraySize);
	cout << "\n\n";
	printArray(negativeNumbersArray, negativeNumbersArraySize);
	cout << "\n\n";
	printArray(zeroNumbersArray, zeroNumbersArraySize);
	cout << "\n\n";
}

int main()
{
	srand(time(nullptr));
    
	const int arraySize = 20;
	int array[arraySize];

	fillArray(array, arraySize);
	printArray(array, arraySize);
	cout << "\n\n";

	distributesArray(array, arraySize);

}