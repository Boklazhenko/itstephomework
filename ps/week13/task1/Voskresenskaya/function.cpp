
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "function.h"
#include <stdlib.h>
using namespace std;
/*int*/
int compareByInt(const void* lhs, const void* rhs)
{
	return (*(int*)lhs - *(int*)rhs);
}
void fillArrInt(int Arr[], const int size)
{
	srand(time(nullptr));
	for (int i = 0; i < size; ++i)
	{
		Arr[i] = rand() % 100;
	}
}
void showArrInt(int Arr[], const int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << Arr[i] << " ";
	}
	cout  << endl;
} 
void sortInt(int Arr[], const int size)
{
	qsort(Arr, size, sizeof(int), compareByInt);
}

// если не отсортирован массив, то как раньше делали
/*int findMinInArrInt(int Arr[], const int size) 
{
	int Min = 300;
	for (int i = 0; i < size; ++i)
	{
		if (Arr[i] < Min)
			Min = Arr[i];
	}
	return Min;
}
int findMaxInArrInt(int Arr[], const int size)
{
	int Max = 0;
	for (int i = 0; i < size; ++i)
		if (Arr[i] > Max)
			Max = Arr[i];
	return Max;
}*/

//если массив отсортирован по возрастанию:
int findMinInArrInt(int Arr[], const int size) 
{
	return Arr[0];
}
int findMaxInArrInt(int Arr[], const int size)
{
		return Arr[size-1];
}
void changElArrInt(int Arr[], const int size)
{
	cout << "Enter the value you want to replace" << endl;
	int key;
	cin >> key;
	int* ptrItem = (int*)bsearch(&key, Arr, size, sizeof(int), compareByInt);
		if (ptrItem != 0)
		{
			cout << "Enter value to replase" << endl;
			int newkey;
			cin >> newkey;
			*ptrItem = newkey;
		}
		else
		{
			cout << "No such value" << endl;
		}
}
//double
int compareByDouble(const void* lhs, const void* rhs)
{
	return (*(double*)lhs - *(double*)rhs);
}
void fillArrDouble(double Arr[], const int size)
{
	srand(time(nullptr));
	for (int i = 0; i < size; ++i)
	{
		Arr[i] = 0.01 * (rand() % 100000);
	}
}
void showArrDouble(double Arr[], const int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}
void sortDouble(double Arr[], const int size)
{
	qsort(Arr, size, sizeof(double), compareByDouble);
}
double findMinInArrDouble(double Arr[], const int size) 
{
	return Arr[0];
}
double findMaxInArrDouble(double Arr[], const int size)
{
		return Arr[size-1];
}
void changElArrDouble(double Arr[], const int size)
{
	cout << "Enter the value you want to replace" << endl;
	double key;
	cin >> key;
	double* ptrItem = (double*)bsearch(&key, Arr, size, sizeof(double), compareByDouble);
		if (ptrItem != 0)
		{
			cout << "Enter value to replase" << endl;
			double newkey;
			cin >> newkey;
			*ptrItem = newkey;
		}
		else
		{
			cout << "No such value" << endl;
		}
}
//char
int compareByChar(const void* lhs, const void* rhs)
{
	return (*(char*)lhs - *(char*)rhs);
}
void fillArrChar(char Arr[], const int size)
{
	srand(time(nullptr));
	for (int i = 0; i < size; ++i)
	{
		Arr[i] = 97 + rand() % 25;
	}
}
void showArrChar(char Arr[], const int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}
void sortChar(char Arr[], const int size)
{
	qsort(Arr, size, sizeof(char), compareByChar);
}
char findMinInArrChar(char Arr[], const int size)
{
	return Arr[0];
}
char findMaxInArrChar(char Arr[], const int size)
{
	return Arr[size - 1];
}
void changElArrChar(char Arr[], const int size)
{
	cout << "Enter the value you want to replace" << endl;
	char key;
	cin >> key;
	char* ptrItem = (char*)bsearch(&key, Arr, size, sizeof(char), compareByChar);
	if (ptrItem != 0)
	{
		cout << "Enter value to replase" << endl;
		char newkey;
		cin >> newkey;
		*ptrItem = newkey;
	}
	else
	{
		cout << "No such value" << endl;
	}
}

