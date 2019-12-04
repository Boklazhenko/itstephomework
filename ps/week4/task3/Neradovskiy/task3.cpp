#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
	int min, max;
	const int size = 10;
	srand(time(NULL));
	int arr[size];
	for (int i = 0; i < size; ++i) {		
		arr[i] = rand();					//заполняем массив случайными числами
		min = arr[0];
		max = arr[0];
		std::cout << arr[i] << std::endl;
	}
	for (int i = 0; i < size; ++i) {       //перебираем массив ищем минимум и максимум
										   //в один цикл не волучается сделать значения волучаются не верные
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];

	}
	std::cout << "Min is: " << min << std::endl;
	std::cout << "Max is: " << max << std::endl;
}