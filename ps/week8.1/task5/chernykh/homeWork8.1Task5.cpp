#include <iostream>
#include <ctime>

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
	srand(time(nullptr));

	cout << "Please enter array size: " << endl;
	int arraySize;
	cin >> arraySize;

	if (arraySize <= 0)
	{
		cout << "Error! Please enter array size more than zero!" << endl;
		return 2;
	}

	int* array = new int[arraySize];

	int enteredNumber;
	for (int i = 0; i < arraySize; ++i)
	{
		cout << "Please enter " << i + 1 << " element: " << endl;
		cin >> enteredNumber;
		array[i] = enteredNumber;
	}

	cout << endl;
	printArray(array, arraySize);
	cout << "\n\n";

	int evenNumbersArraySize = 0, notEvenNumbersArraySize = 0;
	for (int i = 0; i < arraySize; ++i)
	{
		if (array[i] % 2 != 0)
		{
			++notEvenNumbersArraySize;
		}
		if (array[i] % 2 == 0)
		{
			++evenNumbersArraySize;
		}
	}

	int evenNumbersIndex = 0, notEvenNumbersIndex = 0;
	int* onlyEvenArrayNumbers = new int[evenNumbersArraySize];
	int* onlyNotEvenArrayNumbers = new int[notEvenNumbersArraySize];

	for (int i = 0; i < arraySize; ++i)
	{
		if (array[i] % 2 != 0)
		{
			onlyNotEvenArrayNumbers[notEvenNumbersIndex] = array[i];
			++notEvenNumbersIndex;
		}
		if (array[i] % 2 == 0)
		{
			onlyEvenArrayNumbers[evenNumbersIndex] = array[i];
			++evenNumbersIndex;
		}
	}
	
	cout << "\tMENU:" << endl
		<< "Which numbers do you want to delete from your array?" << endl
		<< "1 -  if you want to delete not even numbers." << endl
		<< "2 -  if you want to delete even numbers" << endl;

	int answer;
	cin >> answer;

	switch (answer)
	{
	case 1:
		cout << endl;
		printArray(onlyEvenArrayNumbers, evenNumbersArraySize);
		break;
	case 2:
		cout << endl;
		printArray(onlyNotEvenArrayNumbers, notEvenNumbersArraySize);
		break;
	default:
		cout << endl;
		cout << "Error! Please enter from one to two!" << endl;
		break;
	}

	delete[] array;
	delete[] onlyEvenArrayNumbers;
	delete[] onlyNotEvenArrayNumbers;
}
