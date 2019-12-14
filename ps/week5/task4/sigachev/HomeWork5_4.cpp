// В двумерном массиве целых числе посчитать:
// Сумму всех элементов массива
// Среднее арифметическое всех элементов массива
// Минимальный элемент. 
// Максимальный элемент

#include <iostream>
using namespace std;

int main()
{
	const int row = 4;
	const int col = 5;
	int arr[row][col];
	double average, sum = 0;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			arr[i][j] = rand() % 55;					// создаем массив
			cout << arr[i][j] << "\t";
			sum += arr[i][j];							// считаем сумму массива
			average = sum / (row * col);				// считаем среднее арифметическое
		}
		cout << endl;
	}	
	int max = arr[0][0];
	int min = arr[0][0];
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j) 
		{
			if (max < arr[i][j]) max = arr[i][j];		// максимальный элемент
			if (min > arr[i][j]) min = arr[i][j];		// минимальный элемент
		}
	}
	cout << "\nSum " << sum << "\nAverage " << average;	
	cout << "\nMinimum " << min << "\nMaximum " << max;
	cout << endl;
}