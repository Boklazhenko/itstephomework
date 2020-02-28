#include <time.h>
#include <iostream>
#include "function.h"

//INTEGER
int _compInt(const void *arg1, const void *arg2) {
	return *(static_cast <const int*>(arg1)) - *(static_cast<const int*>(arg2));
}

void fillArrayInt(int arr[], int size) {
	srand(time(nullptr));
	for (int i = 0; i < size; ++i)
		arr[i] = rand();
}
void showArrayInt(int arr[], int size) {
	for (int i = 0; i < size; ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
int searchMinValueInt(int arr[], int size) {
	int temp = 0;
	for (int i = 0; i < size; ++i)
		if (arr[i] < arr[temp])
			temp = i;
	return arr[temp];
}
int searchMaxValueInt(int arr[], int size) {
	int temp = 0;
	for (int i = 0; i < size; ++i)
		if (arr[i] > arr[temp])
			temp = i;
	return arr[temp];
}
void sortInt(int arr[], int size) {
	int sizeElement = sizeof(arr[0]);
	qsort(arr, size, sizeElement, _compInt);
}


void editValueInt(int arr[], int itemNum, int newValue) {
	arr[itemNum] = newValue;
}
//DOUBLE
int  _compDouble(const void* arg1, const void* arg2) {
	double result = (*(static_cast <const double*>(arg1)) - (*(static_cast<const double*>(arg2)) > 0));
	if (result > 0)
		return 1;
	else if (result < 0)
		return -1;
	else
		return 0;
		
}
void fillArrayDouble(double arr[], int size) {
	srand(time(nullptr));
	for (int i = 0; i < size; ++i)
		arr[i] = rand();
}
void showArrayDouble(double arr[], int size) {
	for (int i = 0; i < size; ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
double searchMinValueDouble(double arr[], int size) {
	int temp = 0;
	for (int i = 0; i < size; ++i)
		if (arr[i] < arr[temp])
			temp = i;
	return arr[temp];
}
double searchMaxValueDouble(double arr[], int size) {
	int temp = 0;
	for (int i = 0; i < size; ++i)
		if (arr[i] > arr[temp])
			temp = i;
	return arr[temp];
}
void sortDouble(double arr[], int size) {
	int sizeElement = sizeof(arr[0]);
	qsort(arr, size, sizeElement, _compDouble);
}
void editValueDouble(double arr[], int itemNum, double newValue) {
	arr[itemNum] = newValue;
}
//CHAR
void fillArrayChar(char arr[], int size) {
	srand(time(nullptr));
	for (int i = 0; i < size; ++i)
		arr[i] = rand() % 255;
}
void showArrayChar(char arr[], int size) {
	for (int i = 0; i < size; ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
char searchMinValueChar(char arr[], int size) {		
	int temp = 0;
	for (int i = 0; i < size; ++i)
		if (arr[i] < arr[temp])
			temp = i;
	return arr[temp];
}
char searchMaxValueChar(char arr[], int size) {
	int temp = 0;
	for (int i = 0; i < size; ++i)
		if (arr[i] > arr[temp])
			temp = i;
	return arr[temp];
}
void sortChar(char arr[], int size) {
	int sizeElement = sizeof(arr[0]);
	qsort(arr, size, sizeElement, _compInt);
}
void editValueChar(char arr[], int itemNum, char newValue) {
	arr[itemNum] = newValue;
}