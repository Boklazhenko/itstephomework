//Даны два массива : А[M] и B[N](M и N вводятся с клавиатуры).
//Необходимо создать третий массив минимально возможного размера,
//в котором нужно собрать элементы двух массивов.

#include<ctime>
#include<iostream>
using namespace std;
void showAr(int*, int);
void sort(int* arrN, int sizeN)
{
	int tmp = 0;
	for (int i = 0; i < sizeN; ++i)
	{
		for (int j = i + 1; j < sizeN; ++j)
		{
			if (arrN[j] < arrN[i])
			{
				tmp = arrN[j];
				arrN[j] = arrN[i];
				arrN[i] = tmp;
			}
		}
	}
}
int main()
{
	setlocale(0, "");
	int sizeA, sizeB;
	cout << "Введите размер первого массива: ";
	cin >> sizeA;
	cout << "Введите размер второго массива: ";
	cin >> sizeB;
	int* arrA = new int[sizeA];
	int* arrB = new int[sizeB];

	cout << "\n\nПервый массив: ";
	for (int x = 0; x < sizeA; x++)
	{
		arrA[x] = rand() % 9 + 1;
		cout << arrA[x] << " ";
	}
	cout << "\n\nВторой массив: ";
	for (int x = 0; x < sizeB; x++)
	{
		arrB[x] = rand() % 9 + 1;
		cout << arrB[x] << " ";
	}

	sort(arrA, sizeA);
	sort(arrB, sizeB);
	int sizeC = sizeA + sizeB;
	int* arrC = new int[sizeC];

	cout << "\n\nПервый массив (Отсортированный): ";
	for (int x = 0; x < sizeA; x++)
	{
		cout << arrA[x] << " ";
	}
	cout << "\n\nВторой массив (Отсортированный): ";
	for (int x = 0; x < sizeB; x++)
	{
		cout << arrB[x] << " ";
	}

	cout << "\n\nТретий массив: ";
	for (int i = 0; i < sizeC; ++i) {

		if (i < sizeA)
			*(arrC + i) = *(arrA + i);
		else
			*(arrC + i) = *(arrB - sizeA + i);
	}
	showAr(arrC, sizeA + sizeB);
	cout << "\n";

	delete[] arrA;
	delete[] arrB;
	delete[] arrC;
}
void showAr(int* a, int size) {
	for (int i =0; i < size; ++a, ++i)
		cout << *a << "  ";
}