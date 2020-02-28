#include "function.h"
#include <iostream>

using namespace std;

void fillArrayInt(int array[], const int size)
{
	for (int i = 0; i < size; ++i)
		array[i] = rand() % 300;
}

void showArrayInt(int array[], const int size)
{
	for (int i = 0; i < size; ++i)
		cout << array[i] << " ";
}

int searchMinArrayInt(int array[], int size)
{
	int min = array[0];
	for (int i = 1; i < size; ++i)
	{
		if (min > array[i])
			min = array[i];
	}
	return min;
}

int searchMaxArrayInt(int array[], int size)
{
	int max = array[0];
	for (int i = 1; i < size; ++i)
	{
		if (max < array[i])
			max = array[i];
	}
	return max;
}

void sortArrayInt(int array[], int size)
{
	int temp = 0;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if (array[j - 1] > array[j])
			{
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}
		}
	}
}

void editArrayInt(int array[], int index, int newNum)
{
	array[index - 1] = newNum;
}

void fillArrayDouble(double array[], const int size)
{
	for (int i = 0; i < size; ++i)
		array[i] = ((((double)rand()) / (rand())) * 1000);
}

void showArrayDouble(double array[], const int size)
{
	for (int i = 0; i < size; ++i)
		cout << array[i] << " ";
}

double searchMinArrayDouble(double array[], int size)
{
	double min = array[0];
	for (int i = 1; i < size; ++i)
	{
		if (min > array[i])
			min = array[i];
	}
	return min;
}

double searchMaxArrayDouble(double array[], int size)
{
	double max = array[0];
	for (int i = 1; i < size; ++i)
	{
		if (max < array[i])
			max = array[i];
	}
	return max;
}

void sortArrayDouble(double array[], int size)
{
	double temp = 0;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if (array[j - 1] > array[j])
			{
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}
		}
	}
}

void editArrayDouble(double array[], int index, double newNum)
{
	array[index - 1] = newNum;
}

void fillArrayChar(char array[], const int size)
{
	for (int i = 0; i < size; ++i)
		array[i] = rand() % 26 + 65;
}

void showArrayChar(char array[], const int size)
{
	for (int i = 0; i < size; ++i)
		cout << array[i] << " ";
}

char searchMinArrayChar(char array[], int size)
{
	char min = array[0];
	for (int i = 1; i < size; ++i)
	{
		if (min > array[i])
			min = array[i];
	}
	return min;
}

char searchMaxArrayChar(char array[], int size)
{
	char max = array[0];
	for (int i = 1; i < size; ++i)
	{
		if (max < array[i])
			max = array[i];
	}
	return max;
}

void sortArrayChar(char array[], int size)
{
	char temp = 0;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if (array[j - 1] > array[j])
			{
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}
		}
	}
}

void editArrayChar(char array[], int index, char newNum)
{
	array[index - 1] = newNum;
}
