#include <iostream>
#include <ctime>
#include "function.h"

using namespace std;

//INTEGER

void writeArrayInt(int arr[], int size)
{
	srand(time(nullptr));

	for (int i = 0; i < size; ++i) {
		arr[i] = rand() % 10;
	}
}

void showArrayInt(int arr[], int size)
{
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int compInt(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

void sortArrayInt(int arr[],  int size)
{
	qsort(arr, size, sizeof(int), compInt);
}

void scanMinInt(int arr[], int size) {
	cout << "Min element = " << arr[0] << endl;
}

void scanMaxInt(int arr[], int size) {
	cout << "Max element = " << arr[size - 1] << endl;
}


int editInt(int arr[], int size) {
	int varValue;
	int newValue;
	cout << "Enter edit element (from 0 to " << size << "): ";
	cin >> varValue;
	if (varValue >= 0 && varValue <= size) {
		cout << "Enter new value: ";
		cin >> newValue;
	}
	else {
		cout << "Wrong!" << endl;
		return 0;
	}
	cout << "New sort array: ";
	arr[varValue] = newValue;
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}

}

//Double
void writeArrayDouble(double arr[], int size)
{
	srand(time(nullptr));

	for (int i = 0; i < size; ++i) {
		arr[i] = rand() % 10 - 0.1;
	}
}

void showArrayDouble(double arr[],  int size)
{
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int compDouble(const void* a, const void* b)
{
	return (*(double*)a - *(double*)b);
}

void sortArrayDouble(double arr[],  int size)
{
	qsort(arr, size, sizeof(double), compDouble);
}

void scanMinDouble(double arr[], int size)
{
	cout << "Min element = " << arr[0] << endl;
	
}
void scanMaxDouble(double arr[], int size)
{
	cout << "Max element = " << arr[size - 1] << endl;
}


double editDouble(double arr[], int size) {
	int varValue;
	double newValue;
	cout << "Enter edit element (from 0 to " << size << "): ";
	cin >> varValue;
	if (varValue >= 0 && varValue <= size) {
		cout << "Enter new value: ";
		cin >> newValue;
	}
	else {
		cout << "Wrong!" << endl;
		return 0;
	}
	cout << "New sort array: ";
	arr[varValue] = newValue;
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	

}

//Char

void writeArrayChar(char arr[], int size) {
	srand(time(0));
	for (int i = 0; i < size; ++i) {
		arr[i] = 'a' + rand() % 26; // Сделала из символов только англ. алфавита
	}
}

void showArrayChar(char arr[], int size)
{
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int compChar(const void* a, const void* b)
{
	return (*(char*)a - *(char*)b);
}

void sortArrayChar(char arr[], int size)
{
	qsort(arr, size, sizeof(char), compChar);
}

void scanMinChar(char arr[], int size)
{
	cout << "Min element = " << arr[0] << endl;
}

void scanMaxChar(char arr[], int size)
{
	cout << "Max element = " << arr[size - 1] << endl;
}

char editChar(char arr[], int size) {
	int varValue;
	char newValue;
	cout << "Enter edit element (from 0 to " << size << "): ";
	cin >> varValue;
	if (varValue >= 0 && varValue <= size) {
		cout << "Enter new value: ";
		cin >> newValue;
	}
	else {
		cout << "Wrong!" << endl;
		return 0;
	}
	cout << "New sort array: ";
	arr[varValue] = newValue;
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
}