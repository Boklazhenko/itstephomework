// Напишите рекурсивную функцию, которая принимает одномерный массив из 100 целых чисел,
// заполненных случайным образом, и находит позицию, с которой начинается
// последовательность из 10 чисел, сумма которых минимальна.

//------------------------------------------------------------------------
// Решение не списывал, но подглядывал у всех и в интернете тоже.
// после того как понял принцип выполнения кода, смог сваять.
// cout на строке 18 и 39 закоментировал для красивого вывода ответа.

#include <iostream>
using namespace std;

int minimumSumTenNumber(int arr[100], int n, int& position) {
	int sum = 0;
	for (int i = n; i < n + 10; ++i) {
		sum += arr[i];
	}
		//cout << "Sum ten element from the " << n << " position"<< " - " << "\t" << sum << endl;
		if (100 - n == 10) {
			position = n;
			return sum;
		}
		else {
			int summ = minimumSumTenNumber(arr, n + 1, position);
			if (sum < summ) {
				position = n;
				return sum;
			}
			return summ;
		}
}

int main()
{
	int arr[100];
	int position;
	for (int i = 0; i < 100; ++i) {
		arr[i] = rand() % 100 - 25;
		//cout << arr[i] << " ";
	}
	cout << endl;
		minimumSumTenNumber(arr, 0, position);
	cout << "Position: " << position << endl;		// все что ниже - это для красоты!
	cout << "Elements: ";
	int sum = 0;
	for (int i = position; i < position + 10; ++i) {
		cout << arr[i] << " ";
		sum += arr[i];
	}
	cout << "\nSum: " << sum << endl;
}