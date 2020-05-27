#include "function.h"
#include <ctime>
#include <iostream>
using namespace std;


void fillArrInt(int arr[], const int size)
{
	srand(time(nullptr));
	for (int i = 0; i < size; ++i)
		arr[i] = rand() % 30;
}
void printArrInt(int arr[], const int size)
{
	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";
	cout << endl;
}
int compareInt(const void* lhs, const void* rhs)
{
	return (*(int*)lhs - *(int*)rhs);
}
void sortArrInt(int arr[], const int size)
{
	qsort(arr, size, sizeof(int), compareInt);
}
int findArrIntMin(int arr[], const int size)
{
	sortArrInt(arr, size);
	return arr[0];
}
int findArrIntMax(int arr[], const int size)
{
	sortArrInt(arr, size);
	return arr[size - 1];
}
void editArrInt(int arr[], const int size, int elem, int newVal)
{
	arr[elem - 1] = newVal;
}


void fillArrDouble(double arr[], const int size)
{
	srand(time(nullptr));
	for (int i = 0; i < size; ++i)
		arr[i] = 0.1 * (rand() % 1000);
}
void printArrDouble(double arr[], const int size)
{
	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";
	cout << endl;
}
int compareDouble(const void* lhs, const void* rhs)
{
	return (*(double*)lhs - *(double*)rhs);
}
void sortArrDouble(double arr[], const int size)
{
	qsort(arr, size, sizeof(double), compareDouble);
}
double findArrDoubleMin(double arr[], const int size)
{
	sortArrDouble(arr, size);
	return arr[0];
}
double findArrDoubleMax(double arr[], const int size)
{
	sortArrDouble(arr, size);
	return arr[size - 1];
}
void editArrDouble(double arr[], const int size, int elem, double newVal)
{
	arr[elem - 1] = newVal;
}



void fillArrChar(char arr[], const int size)
{
	srand(time(nullptr));
	for (int i = 0; i < size; ++i)
		arr[i] = rand() % 127; 
}
void printArrChar(char arr[], const int size)
{
	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";
	cout << endl;
}
int compareChar(const void* lhs, const void* rhs)
{
	return (*(char*)lhs - *(char*)rhs);
}
void sortArrChar(char arr[], const int size)
{
	qsort(arr, size, sizeof(char), compareChar);
}
char findArrCharMin(char arr[], const int size)
{
	sortArrChar(arr, size);
	return arr[0];
}
char findArrCharMax(char arr[], const int size)
{
	sortArrChar(arr, size);
	return arr[size - 1];
}
void editArrChar(char arr[], const int size, int elem, char newVal)
{
	arr[elem - 1] = newVal;
}