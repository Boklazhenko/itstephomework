﻿#include <iostream>

using namespace std;

double maximumElement(double array[], int arraySize)
{
	double maxElement = array[0];
	for (int i = 1; i < arraySize; ++i)
	{
		if (maxElement < array[i])
		{
			maxElement = array[i];
		}
	}

	return maxElement;
}

int maximumElement(int numberOne, int numberTwo)
{
	int maxElement = (numberOne > numberTwo) ? numberOne : numberTwo;

	return maxElement;
}

int maximumElement(int numberOne, int numberTwo, int numberThree)
{
	int maxElement = numberOne;
	if (maxElement < numberTwo)
	{
		maxElement = numberTwo;

		if (maxElement < numberThree)
		{
			maxElement = numberThree;
		}
	}

	return maxElement;
}

int main()
{
	const int arraySize = 5;
	double array[arraySize];

	double number;
	for (int i = 0; i < arraySize; ++i)
	{
		cout << "Enter number: " << endl;
		cin >> number;

		array[i] = number;
	}

	cout << maximumElement(array, arraySize) << endl;
	cout << endl << maximumElement(9, 29) << endl;
	cout << endl << maximumElement(2, 27, 38) << endl;
}
