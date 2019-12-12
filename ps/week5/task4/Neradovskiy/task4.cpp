#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
	const int size = 2;
	int arr[size][size];
	srand(time(NULL));
	int sum = 0;
	int count = 0;
	
	for (int y = 0; y < size; ++y)
	{
		for (int x = 0; x < size; ++x)			// заполняем массив рандомными числами и сразу считаем сумму  и среднее арифметическое
		{
			arr[y][x] = rand() % 100;
			sum += arr[y][x];
			std::cout << arr[y][x] << " ";
			count++;
		}
		std::cout << std::endl;
	}
	int min = arr[0][0];
	int max = arr[0][0];
	for (int y = 0; y < size; ++y)				//надодим мин и макс элемент, минимум найти не получается раньше т.к. массив не заполнен
	{
		for (int x = 0; x < size; ++x)
		{
			if (min > arr[y][x])
				min = arr[y][x];
			if (max < arr[y][x])
				max = arr[y][x];
		}
	}
	int average = sum / count;
	std::cout << "Summ all elements is: " << sum << std::endl;
	std::cout << "Average all elements is: " << average << std::endl;
	std::cout << "Max element is: " << max << std::endl;
	std::cout << "Min element is: " << min << std::endl;
}