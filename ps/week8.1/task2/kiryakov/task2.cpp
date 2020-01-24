#include <iostream>
using namespace std;

void fillArray(int* arr, int size) {
	for (int i = 0; i < size; ++i)
		arr[i] = rand() % 30;
}

void printArray(int* arr, int size) {
	for (int i = 0; i < size; ++i)
		cout << *(arr + i) << " ";
	cout << endl;
}

int main()
{

	int size = 0, size1, size2;

	cout << "Input the size of the first array\n";
	cin >> size1;
	int* arr1 = new int[size1];
	fillArray(arr1, size1);

	cout << "Input the size of the second array\n";
	cin >> size2;
	int* arr2 = new int[size2];
	fillArray(arr2, size2);


	printArray(arr1, size1);
	cout << endl;
	printArray(arr2, size2);
	cout << endl;

	for (int i = 0; i < size1; ++i) {

		bool chekArray = true;

		int counter = 0;
		for (int x = i + 1; x < size1; ++x)
			if (arr1[x] == arr1[i])
				chekArray = false;

		if (chekArray) {
			for (int j = 0; j < size2; ++j) {
				if (arr1[i] != arr2[j])
					++counter;

			}
			if (counter == size2)
				++size;
		}
	}
	for (int i = 0; i < size2; ++i) {

		bool chekArray = true;
		int counter = 0;
		for (int x = i + 1; x < size2; ++x)
			if (arr2[x] == arr2[i])
				chekArray = false;

		if (chekArray) {
			for (int j = 0; j < size1; ++j) {
				if (arr2[i] != arr1[j])
					++counter;

			}
			if (counter == size1)
				++size;
		}
	}

	int* arr = new int[size];
	int index = 0;
	for (int i = 0; i < size1; ++i) {
		bool chekArray = true;
		int counter = 0;

		for (int x = i + 1; x < size1; ++x)
			if (arr1[x] == arr1[i])
				chekArray = false;

		if (chekArray) {
			for (int j = 0; j < size2; ++j)
				if (arr1[i] != arr2[j])
					++counter;

			if (counter == size2) {
				arr[index] = arr1[i];
				++index;
			}
		}
	}
	for (int i = 0; i < size2; ++i) {
		bool chekArray = true;
		int counter = 0;

		for (int x = i + 1; x < size2; ++x)
			if (arr2[x] == arr2[i]) chekArray = false;

		if (chekArray) {
			for (int j = 0; j < size1; ++j)
				if (arr2[i] != arr1[j])
					++counter;

			if (counter == size1) {
				arr[index] = arr2[i];
				++(index);
			}
		}
	}

	printArray(arr, size);

	delete[]arr1;
	delete[]arr2;
	delete[]arr;
}