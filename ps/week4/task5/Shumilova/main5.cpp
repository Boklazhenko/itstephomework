// Задание 5. (неделя 4)
//В одномерном массиве, состоящем из N вещественных чисел вычислить: 
//• Сумму отрицательных элементов. 
//• Произведение элементов, находящихся между min и max элементами. 
//• Произведение элементов с четными номерами. 
//• Сумму элементов, находящихся между первым и последним отрицательными элементами.

#include <iostream>
using namespace std;
int main()
{
	const int size=8;
	double array[size] = {11,-5,-9,2,17,25,-1,30};
	double sum_negative = 0, prod_positive = 1, prod_range=1;
	int min = array[0], max = array[0];
	for (int i = 0; i < size; ++i)
	{
		cout << array[i] << ", ";
		if (array[i] < 0)
			sum_negative += array[i];
		if (array[i] > 0)
			prod_positive *= array[i];
		if (array[i] < min)
			min = array[i];
		if (array[i] > max)
			max = array[i];
	}
	int minIndex = 0, maxIndex=0;
	for (int i = 0; i <size; ++i)
	{
		if (array[i] == min)
			minIndex = i;
		if (array[i] == max)
			maxIndex = i;
	}
		if (maxIndex<minIndex)
			for (int i = maxIndex + 1; i < minIndex; ++i)
			{
				prod_range *= array[i];
			}
		else
			for (int i = minIndex+1; i < maxIndex; ++i)
			{
				prod_range *= array[i];
			}
	int first_neg = 0, last_neg = 0;
	for (int i = 0; i < size; ++i)
		{
			if (array[i] < 0)
			{
				first_neg = i;
				break;
			}
		}
	for (int i = 0; i < size; ++i)
		{
			if (array[i] < 0)
				last_neg = i;
		}
	double sum_between_neg = 0;
	for (int i = first_neg+1; i < last_neg; ++i)
		{
			sum_between_neg+=array[i];
		}
	cout << "\n\nSum of negative elements = " << sum_negative << endl; //Сумму отрицательных элементов
	//cout << "\nMinimum = " << minIndex << endl;
	//cout << "\nMaximum = " << maxIndex << endl;
	cout << "\nProduct of range elements = " << prod_range << endl; //Произведение элементов, находящихся между min и max элементами
	//cout << "\nFirst = " << first_neg << endl;
	//cout << "\nLast = " << last_neg << endl;
	cout << "\nProduct of positive elements = " << prod_positive << endl; //Произведение элементов с четными номерами
	cout << "\nSum between the first and last negative elements = " << sum_between_neg << endl;
	//Сумму элементов, находящихся между первым и последним отрицательными элементами
}

