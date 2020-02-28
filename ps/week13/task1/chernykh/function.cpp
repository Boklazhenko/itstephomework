#include <iostream>
#include "function.h"
#include <ctime>
#include <iomanip>

using namespace std;

void quickSortIntR(int* array, const int SIZE)
{
	int i = 0, j = SIZE - 1;
	int mid = array[SIZE / 2];

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
		quickSortIntR(array, j + 1);
	}
	if (i < SIZE)
	{
		quickSortIntR(&array[i], SIZE - i);
	}
}

void fillArrayInt(int array[], const int SIZE)
{
	srand(time(nullptr));

	for (int i = 0; i < SIZE; ++i)
	{
		array[i] = rand() % 100;
	}
}

void printArrayInt(int array[], const int SIZE)
{
	for (int i = 0; i < SIZE; ++i)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

int searchMinElementInArrayInt(int array[], const int SIZE)
{
	quickSortIntR(array, SIZE);
	return array[0];
}

int searchMaxElementInArrayInt(int array[], const int SIZE)
{
	quickSortIntR(array, SIZE);
	return array[SIZE - 1];
}

void editElementInArrayInt(int array[], const int SIZE, int elementToChange, int newValue)
{
	if (elementToChange <= 0 || elementToChange > SIZE)
	{
		cout << "\nElement to change not found in array!" << endl;
		exit(1);
	}
	else
	{
		array[elementToChange - 1] = newValue;
	}
}


void quickSortDoubleR(double* array, const int SIZE)
{
	int i = 0, j = SIZE - 1;
	double mid = array[SIZE / 2];

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
			double temp = array[i];
			array[i] = array[j];
			array[j] = temp;

			++i;
			--j;
		}
	} while (i <= j);

	if (j > 0)
	{
		quickSortDoubleR(array, j + 1);
	}
	if (i < SIZE)
	{
		quickSortDoubleR(&array[i], SIZE - i);
	}
}

void fillArrayDouble(double array[], const int SIZE)
{
	srand(time(nullptr));

	for (int i = 0; i < SIZE; ++i)
	{
		array[i] = double(((double)rand() / RAND_MAX * 100));
	}
}

void printArrayDouble(double array[], const int SIZE)
{
	for (int i = 0; i < SIZE; ++i)
	{
		cout << fixed << setprecision(2) << array[i] << " ";
	}
	cout << endl;
}

double searchMinElementInArrayDouble(double array[], const int SIZE)
{
	quickSortDoubleR(array, SIZE);
	return array[0];
}

double searchMaxElementInArrayDouble(double array[], const int SIZE)
{
	quickSortDoubleR(array, SIZE);
	return array[SIZE - 1];
}

void editElementInArrayDouble(double array[], const int SIZE, int elementToChange, double newValue)
{
	if (elementToChange <= 0 || elementToChange > SIZE)
	{
		cout << "\nElement to change not found in array!" << endl;
		exit(1);
	}
	else
	{
		array[elementToChange - 1] = newValue;
	}
}


void quickSortCharR(char* array, const int SIZE)
{
	int i = 0, j = SIZE - 1;
	char mid = array[SIZE / 2];

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
			char temp = array[i];
			array[i] = array[j];
			array[j] = temp;

			++i;
			--j;
		}
	} while (i <= j);

	if (j > 0)
	{
		quickSortCharR(array, j + 1);
	}
	if (i < SIZE)
	{
		quickSortCharR(&array[i], SIZE - i);
	}
}

void fillArrayChar(char array[], const int SIZE)
{
	srand(time(nullptr));

	for (int i = 0; i < SIZE;)
	{
		char temp = rand() % 127;
	
		if (temp >= 32)
		{
			array[i] = temp;
			++i;
		}
	}
}

void printArrayChar(char array[], const int SIZE)
{
	for (int i = 0; i < SIZE; ++i)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

char searchMinElementInArrayChar(char array[], const int SIZE)
{
	quickSortCharR(array, SIZE);
	return array[0];
}

char searchMaxElementInArrayChar(char array[], const int SIZE)
{
	quickSortCharR(array, SIZE);
	return array[SIZE - 1];
}

void editElementInArrayChar(char array[], const int SIZE, int elementToChange, char newValue)
{
	if (elementToChange <= 0 || elementToChange > SIZE)
	{
		cout << "\nElement to change not found in array!" << endl;
		exit(1);
	}
	else
	{
		array[elementToChange - 1] = newValue;
	}
}