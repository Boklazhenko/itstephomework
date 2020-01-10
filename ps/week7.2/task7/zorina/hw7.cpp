// Напишите рекурсивную функцию, которая принимает одномерный массив из 100 целых чисел, заполненных случайным образом, 
//и находит позицию, с которой начинается последовательность из 10 чисел, сумма которых минимальна.
//

#include <iostream>
#include<stdlib.h>
#include<ctime>

using namespace std;


int recursion(int arr[], const int size, int tempIndex = 0,int startIndex = 0, int sumOfElements = _I32_MAX ) //максимально возможное интовое число
{
	 
	int tempSum = 0;
	for (int i = tempIndex; i < tempIndex+10; i++)
	{
		tempSum += arr[i];
	}
	if (tempSum<sumOfElements)
	{
		sumOfElements = tempSum;
		startIndex = tempIndex;
	}
	if (tempIndex == size-10) 
		return startIndex;
	else 
		return recursion(arr, size, tempIndex + 10, startIndex, sumOfElements);
	
}


int main()
{
	const int size = 100;
	int arr[size];
	srand(time(0));
	for (int i = 0; i < size; ++i) {
		arr[i] = rand() % 10;
	
	}
	int sum = 0;
	for (int i = 0; i < size; i+=10)
	{
		sum = 0;
		for (int j = 0; j < 10; j++)
		{
			sum += arr[i + j];
			cout << arr[i+j] << " ";
		}
		cout << "||"<<sum;// вывод по 10 элементов и вконце их сумма, просто, чтоб видно было, что нормально считает
		cout << endl;
	}
	cout << endl;
	cout << recursion(arr,size);
}