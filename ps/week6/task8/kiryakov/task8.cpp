#include <iostream>
#include <ctime>
using namespace std;
int Func1(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 200 - 100;
		cout << arr[i] << endl;
	}
	cout << endl;
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << "max of first massive: " << max << endl << endl;
}
int Func2(int** arr, int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = rand() % 100;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	int max = arr[0][0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	cout << "\nMax second massive: " << max << endl << endl;
}
int Func3(int*** arr, int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			for (int z = 0; z < size; z++) {
				arr[i][j][z] = rand() % 100;
				cout << arr[i][j][z] << "\t";
			}
			cout << endl;
		}
		int max = arr[0][0][0];
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				for (int z = 0; z < size; z++) {
					if (arr[i][j][z] > max)
					{
						max = arr[i][j][z];
					}
				}
			}
		}
		cout << "\nMax of third massiv: " << max << endl << endl;
	}
}
int main() {
	srand(time(0));
	int*** arr;
	int size;
	cout << "Enter number = ";
	cin >> size;
	arr = new int** [size];
	for (int i = 0; i < size; i++) {
		arr[i] = new int* [size];

		for (int j = 0; j < size; j++) {
			arr[i][j] = new int[size];
		}
	}
	Func1(**arr, size);
	Func2(*arr, size);
	Func3(arr, size);
	delete[] arr;
	
}