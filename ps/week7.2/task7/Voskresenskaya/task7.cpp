//Напишите рекурсивную функцию, которая принимает одномерный массив из 100 целых чисел, 
//заполненных случайным образом, и находит позицию, с которой начинается последовательность
//из 10 чисел, сумма которых минимальна.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int findMinTenSun(int arr[], int arr2[], int N = 0, int Sum = 0)
{
	if ((100 - N) == 10)
	{
		int minSum = 2147483646;
		for (int i = 0; i < N; ++i)
		{
			if (arr2[i] < minSum)
			{
				minSum = arr2[i];
			}
		}
		int M = 0;
		for (int j = 0; j < 90; ++j)
		{
			int sum10Arr = 0;
			for (int i = M; i < M + 10; ++i)
			{
				sum10Arr += arr[i];
			}
			if (sum10Arr == minSum)
			{
				cout << "index minSum= " << M << endl;
				break;
			}
			++M;
		}

		return 0;
	}
	for (int i = N; i < N + 10; ++i)
	{
		Sum += arr[i];
	}
	arr2[N] = Sum;
	++N;
	return findMinTenSun(arr, arr2, N);
}
int main()
{
	srand(time(NULL));
	int const size = 100;
	int const size2 = 90;
	int arr[size];
	int arr2[size2];

	for (int i = 0; i < size; ++i)
	{
		arr[i] = rand() % 100;
	}
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}

	cout << findMinTenSun(arr, arr2);
	return 0;
}


