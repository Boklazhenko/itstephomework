// Написать перегруженные функции и протестировать их в основной программе :
// Нахождения максимального значения в одномерном массиве;
// Нахождения максимального значения в двумерном массиве;
// Нахождения максимального значения в трёхмерном массиве;
// Нахождения максимального значения двух целых;
// Нахождения максимального значения трёх целых;
#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;
void func1(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 200 - 100;
		cout << arr[i] << ",  ";
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
void func2(int** arr, int size) {
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			arr[i][j] = rand() % 100;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	int max = arr[0][0];
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			if (arr[i][j] > max){
				max = arr[i][j];
			}
		}
	}
	cout << "\nMax second massive: " << max << endl << endl;
}
void func3(int*** arr, int size) {
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			for (int z = 0; z < size; z++) {
				arr[i][j][z] = rand() % 100;
				cout << arr[i][j][z] << "\t";
			}
			cout << endl;
		}
		int max = arr[0][0][0];
		for (int i = 0; i < size; ++i){
			for (int j = 0; j < size; ++j){
				for (int z = 0; z < size; ++z){
					if (arr[i][j][z] > max){
						max = arr[i][j][z];
					}
				}
			}

		}
		cout << "\nMax of third massiv: " << max << endl << endl;
	}
}
int maxNum(int digit1, int digit2) {
	int max = (digit1 > digit2 ? max = digit1 : max = digit2);  // через тернарный оператор.
	return max;
}
int maxNum(int digit1, int digit2, int digit3) {
	return max((max(digit1, digit2)), digit3);	
}
int main() {
	srand(time(0));
	int*** arr;
	int size;
	cout << "Enter size array = ";
	cin >> size;
	arr = new int** [size];
	for (int i = 0; i < size; i++) {
		arr[i] = new int* [size];
		for (int j = 0; j < size; j++) {
			arr[i][j] = new int[size];
		}
	}
	func1(**arr, size);
	func2(*arr, size);
	func3(arr, size);
	delete[] arr;
	system("pause");
	int digit1, digit2, digit3;
	cout << "\nEnter first digit: ";
	cin >> digit1;
	cout << "\nEnter second digit: ";
	cin >> digit2;
	cout << "\nEnter three digit: ";
	cin >> digit3;
	cout << "\nMaximum value of two number = " << maxNum(digit1, digit2) << endl;
	cout << "\nMaximum value of three number = " << maxNum(digit1, digit2, digit3) << endl;
}