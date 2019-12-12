
//В двумерном массиве целых чисел посчитать :
//-Сумму всех элементов массива
//-Среднее арифметическое всех элементов массива
//-Минимальный элемент
//-Максимальный элемент

#include <iostream>
#include<time.h>
#include <stdlib.h>
using namespace std;
int main()
{
	srand(2);
	const int size = 6;
	int array[size][size];

	for (int x = 0; x < size; ++x)
	{
		for (int y = 0; y < size; ++y)
		{
			array[x][y] = rand() % 100;
		}
	}
	int sum = 0;
	int min = array[0][0];
	int max = array[0][0];
	for (int x = 0; x < size; ++x)
	{
		for (int y = 0; y < size; ++y)
		{
			cout << array[x][y] << "\t";
			sum += array[x][y];

			if (array[x][y] < min)
				min = array[x][y];

			if (array[x][y] > max)
				max = array[x][y];
		}
		cout << "\n" << endl;
	}
	cout << "Sum = " << sum << endl; 
	float mean = (float)sum / (size * size);
	cout << "Mean = " << mean << endl; 
	cout << "Min = " << min << endl; 
	cout << "Max = " << max << endl; 

}