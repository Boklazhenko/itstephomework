#include "function.h"
#include <iostream>
using namespace std;

void fillArrInt(int arr[], int size){
	for (int i = 0; i < size; ++i) {
		arr[i] = rand() % 100;
	}
}

void showArrInt(int arr[], int size){
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void findMinArrInt(int arr[], int size){
	int min = arr[0];
	for (int i = 1; i < size; ++i) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	cout << "Minimum elemen - " << min << endl;
}

void findMaxArrInt(int arr[], int size){
	int max = arr[0];
	for (int i = 1; i < size; ++i) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	cout << "Maximum elemen - " << max << endl;
}

void sortArrInt(int arr[], int size){
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			if (arr[j] > arr[i])
				swap(arr[j], arr[i]);
		}
	}
}

void editArrInt(int arr[]){
	int element, index;
	cout << "Enter new element: ";
	cin >> element;
	cout << "Enter index of element: ";
	cin >> index;
	arr[index - 1] = element;
}

void fillArrDouble(double arr[], int size){
	for (int i = 0; i < size; ++i) {
		arr[i] = ((((double)rand()) / (rand())) * 1000);
	}
}

void showArrDouble(double arr[], int size){
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void findMinArrDouble(double arr[], int size){
	double min = arr[0];
	for (int i = 1; i < size; ++i) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	cout << "Minimum elemen - " << min << endl;
}

void findMaxArrDouble(double arr[], int size){
	double max = arr[0];
	for (int i = 1; i < size; ++i) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	cout << "Maximum elemen - " << max << endl;
}

void sortArrDouble(double arr[], int size){
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			if (arr[j] > arr[i])
				swap(arr[j], arr[i]);
		}
	}
}

void editArrDouble(double arr[]){
	double element;
	int index;
	cout << "Enter new element: ";
	cin >> element;
	cout << "Enter index of element: ";
	cin >> index;
	arr[index - 1] = element;
}

void fillArrChar(char arr[], int size){
	for (int i = 0; i < size; ++i) {
		arr[i] = rand() % (122 - 48) + 48;
	}
}

void showArrChar(char arr[], int size){
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void findMinArrChar(char arr[], int size){
	char min = arr[0];
	for (int i = 1; i < size; ++i) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	cout << "Minimum elemen - " << min << endl;
}

void findMaxArrChar(char arr[], int size){
	double max = arr[0];
	for (int i = 1; i < size; ++i) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	cout << "Maximum elemen - " << max << endl;
}

void sortArrChar(char arr[], int size){
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			if (arr[j] > arr[i])
				swap(arr[j], arr[i]);
		}
	}
}

void editArrChar(char arr[]){
	char element;
	int index;
	cout << "Enter new element: ";
	cin >> element;
	cout << "Enter index of element: ";
	cin >> index;
	arr[index - 1] = element;
}