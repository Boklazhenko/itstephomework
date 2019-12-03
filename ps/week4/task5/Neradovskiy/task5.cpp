#include <iostream>

int main()
{
	const int size = 7;
	float arr[size] = { -7.4f, 12.1f, 15.2f, 48.5f, -3.8f, 5.5f, -3.6f };
	float sumNegative = 0;
	float min = arr[0];
	float max = arr[0];
	int minIndex, maxIndex;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < 0)
			sumNegative += arr[i];		//находим сумму отрицательных элементов

		if (min > arr[i])				//определяем минимум и максимум
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}
	for (int i = 0; i < size; ++i)
	{
		if (min == arr[i])				//находим индексы минимального и максимального значения
			minIndex = i;
		if (max == arr[i])
			maxIndex = i;
	}

	std::cout << "The sum of the negative elements is: " << sumNegative << std::endl;
	float multiply = 1;
	for (int i = minIndex + 1; i < maxIndex; ++i)		//находим произведение элементов между минимальным и максимальным
	{
		multiply *= arr[i];
	}
	std::cout << "The product of elements between min and max elements is: " << multiply << std::endl;

	float evenMultiply = 1;
	for (int i = 0; i < size; i += 2)
	{
		evenMultiply *= arr[i];
	}
	std::cout << "Product of even-numbered elements is: " << evenMultiply << std::endl;

	int firstNegativeEl, lostNegativeEl;

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < 0)						//Находим индекс первого отрицательного элемента
		{
			firstNegativeEl = i;
			break;
		}
	}
	for (int i = 0; i < size; ++i)			// индекс последнего отрицательного элемента
	{										// как можно совместить эти циклы?
		if (arr[i] < 0) {
			lostNegativeEl = i;
		}
	}
	float sum = 0;
	for (int i = firstNegativeEl + 1; i < lostNegativeEl; ++i)
	{
		sum += arr[i];
	}
	std::cout << "The sum of the elements between the first and last negative elements is: "<< sum
		<< std::endl;
}