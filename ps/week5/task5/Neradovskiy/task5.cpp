#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	const int size = 5;
	int arr[size][size];
	int sumYarr[size] = {};						//заполняем массив нулями для корректной суммы
	for (int y = 0; y < size; ++y)
	{
		int sumX = 0;
		for (int x = 0; x < size; ++x)
		{
			arr[y][x] = rand() % 10;
			sumX += arr[y][x];
			sumYarr[x] += arr[y][x];			//записываем строку в массив и складываем строки (т.е. каждый ряд с каждым рядом)
			std::cout << arr[y][x] << "\t";
		}
		std::cout << "| " << sumX << std::endl;
	}

		for (int i = 0; i < size; ++i)
			std::cout << sumYarr[i] << "\t";
}
