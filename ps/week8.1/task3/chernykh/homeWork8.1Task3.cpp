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

int main()
{
	srand(time(nullptr));

	cout << "Please enter size of array one: " << endl;
	int arrayOneSize;
	cin >> arrayOneSize;

	if (arrayOneSize <= 0)
	{
		cout << "Error! You enter number less by zero or not integer number" << endl
			<< "Please enter correct data!" << endl;
		return 1;
	}

	cout << "Please enter size of array two: " << endl;
	int arrayTwoSize;
	cin >> arrayTwoSize;

	if (arrayTwoSize <= 0)
	{
		cout << "Error! You enter number less by zero or not integer number" << endl
			<< "Please enter correct data!" << endl;
		return 1;
	}

	int* arrayOne = new int[arrayOneSize];
	int* arrayTwo = new int[arrayTwoSize];

	fillArray(arrayOne, arrayOneSize);

	for (int i = 1; i < 15; ++i)
	{
		rand();
	}

	fillArray(arrayTwo, arrayTwoSize);
	printArray(arrayOne, arrayOneSize);
	cout << endl;
	printArray(arrayTwo, arrayTwoSize);

	int arrayThreeSize = arrayOneSize + arrayTwoSize;
	int* arrayThree = new int[arrayThreeSize];

	int arrayThreeIndex = 0;
	for (int i = 0; i < arrayOneSize; ++i)
	{
		arrayThree[arrayThreeIndex] = arrayOne[i];
		++arrayThreeIndex;
	}
	for (int i = 0; i < arrayTwoSize; ++i)
	{
		arrayThree[arrayThreeIndex] = arrayTwo[i];
		++arrayThreeIndex;
	}

	cout << endl;
	printArray(arrayThree, arrayThreeSize);

	delete[] arrayOne;
	delete[] arrayTwo;
	delete[] arrayThree;

	return 0;
}