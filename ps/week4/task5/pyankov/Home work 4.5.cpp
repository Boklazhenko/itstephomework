

#include <iostream>
using namespace std;
const int sizeArr = 10;

int myArr[sizeArr] = { -10, 15, -6, 156, 15, -98, 2, 8, -87, 60 };


int main()
{

	int max = myArr[0]; // Максимальное число
	int min = myArr[0]; // Минимальное число
	int oneMinNumber; // Первое отрицательное значение
	int lastMinNumber; // Последнее отрицательное значение

	int maxIndex = 0; // Индекс максимального числа в массиве
	int minIndex = 0; // Индекс минимального числа в массиве
	int sum = 0; // Сумма отрицательных элементов
	int multiplicationNumbers = 1; // Произведение элементов, находящихся между min и max элементами
	int multiEvenNumbers = 0; // Произведение элементов с четными номерами
	int indexFirstNegativeNumber; // Индекс первого отрицаиельного числа
	int indexLastNegativeNumber; // Индекс последнего отрицаиельного числа
	int amountBetween = 0; // Сумма элементов, находящихся между первым и последним отрицательными элементами




	for (int i = 0; i < sizeArr; ++i) { // Поиск максимального числа

		if (max <= myArr[i])
		{
			max = myArr[i];
			maxIndex = i;
		}

	}


	for (int i = 0; i < sizeArr; ++i) { // Поиск минимального числа
		if (myArr[i] < min)
		{
			min = myArr[i];
			minIndex = i;
		}
	}


	for (int i = 0; i < sizeArr; ++i) { // Подсчет суммы отрицательных элементов
		if (myArr[i] < 0)
			sum += myArr[i];
	}




	if (minIndex > maxIndex) // 
	{
		int m = minIndex;
		minIndex = maxIndex;
		maxIndex = m;
	}


	for (int i = minIndex; i < maxIndex; ++i) {  // Произведение элементов, находящихся между min и max элементами
		multiplicationNumbers *= myArr[i];
	}



	for (int i = 0; i < sizeArr; i += 2) { // Произведение элементов с четными номерами
		multiEvenNumbers += myArr[i];
	}


	for (int i = 0; i < sizeArr; ++i) { // Первое отрицательное значение
		if (myArr[i] < 0)
		{
			oneMinNumber = myArr[i];
			indexFirstNegativeNumber = i;
			break;
		}
	}


	for (int i = sizeArr; i > 0; --i) { // Последние отрицательное значение
		if (myArr[i] < 0)
		{
			lastMinNumber = myArr[i];
			indexLastNegativeNumber = i;
			break;
		}
	}


	for (int i = indexFirstNegativeNumber; i < indexLastNegativeNumber; ++i) {
		amountBetween += myArr[i];
	}
   	 	
	cout << "Sum of negative elements: " << sum << endl;
	cout << "Product of elements between min and max elements: " << multiplicationNumbers << endl;
	cout << "Product of elements with even numbers: " << multiEvenNumbers << endl;
	cout << "The sum of the elements between the first and last negative elements: " << amountBetween << endl;
}



