// В одномерном массиве, состоящем из N вещественных чисел вычислить:
// • Сумму отрицательных элементов.
// • Произведение элементов, находящихся между min и max элементами.
// • Произведение элементов с четными номерами.
// • Сумму элементов, находящихся между первым и последним отрицательными элементами.
#include <iostream>
using namespace std;

int main()
{
	const int size = 11;
	double arr[size] = { 4.2, -5, 3.4, -7.1, 9, -1.8, 8, 3.4, 7, -11, 5 };
	double sumNegativ = 0, sumBetweenNegativ = 0, multiplNegztiv = 1, multipBetween = 1, min = arr[0], max = arr[0];
	int a, b, minIndex, maxIndex, firstIndex, latestIndex;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < 0)											// Сумма отрицательных чисел
			sumNegativ += arr[i];
		if (i % 2 == 0)											// Произведение четных индексов
			multiplNegztiv *= arr[i];
		if (min > arr[i])
		{
			min = arr[i]; a = i;								// Индекс минимального числа
		}
		if (max < arr[i])
		{
			max = arr[i]; b = i;								// Индекс максимального числа
		}
	}
	(a < b ? minIndex = a, maxIndex = b : minIndex = b, maxIndex = a);	// Находим минимальный индекс и ставим его в начало цикла
	for (int i = minIndex + 1; i < maxIndex; ++i)						// Произведение чисел между min и max элементами
	{
		multipBetween *= arr[i];
	}
	
	for (int i = 0; i < size; ++i)								// Индекс первого отрицательного числа
	{
		if (arr[i] < 0) 
		{
			firstIndex = i;
			break;
		}
	}
	for (int i = size - 1; i > 0; --i)							// Индекс последнего отрицательного числа
	{
		if (arr[i] < 0) 
		{
			latestIndex = i;
			break;
		}
	}
	for (int i = firstIndex + 1; i < latestIndex; ++i)					// Сумма между отрицательными
	{
		sumBetweenNegativ += arr[i];
	}
	cout << "\nSum of negative numbers " << sumNegativ;
	cout << "\nMultiplication between min and max " << multipBetween;
	cout << "\nMultiplication of even elements " << multiplNegztiv;
	cout << "\nSum between first negativ and latest negativ  " << sumBetweenNegativ;
}