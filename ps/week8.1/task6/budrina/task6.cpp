// Написать функцию, которая получает указатель на динамический массив и его размер. 
//Функция должна удалить из массива все простые числа и вернуть указатель на новый динамический массив.
//

#include <iostream>
using namespace std;

void fillArray(int* arr, int size) {
	for (int i = 0; i < size; ++i)
		arr[i] = rand() % 30;
}
void printArray(int* arr, int size) {
	for (int i = 0; i < size; ++i)
		cout << *(arr + i) << "  ";
	cout << endl;
}
bool checkPrimeNum(int number) {
	if (number == 2 || number == 3)
		return true;
	else if (number == 0)
		return false;
	else {
		for (int i = 2; i <= (sqrt(number)); ++i) {
			if (number % i == 0)
				return false;
		}
		return true;
	}
}
int* removePrimeNum(int* arr, int size) {

	int sizeNew = 0;
	for (int i = 0; i < size; ++i)
		if (!checkPrimeNum(arr[i]))
			++sizeNew;
	int* newArr = new int[sizeNew];
	int index = 0;
	for (int i = 0; i < size; ++i) {
		if (!checkPrimeNum(arr[i])) {
			newArr[index] = arr[i];
			++index;
		}
	}
	printArray(newArr, sizeNew);

	return newArr;
}

int main()
{
	int size = 9;
	int* arr = new int[size];
	fillArray(arr, size);
	cout << "\n Start array: \n";
	printArray(arr, size);
	cout << "\n Modified array: \n";
	removePrimeNum(arr, size);
	delete[]arr;
}