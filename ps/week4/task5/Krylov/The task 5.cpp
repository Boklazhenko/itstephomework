#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	const int numbers = 6;
	double arr[numbers] = { -12, -3.13, -23, 5, 69, 0.96 };
	double negativeNum = 0;
	double min = arr[0];
	double max = arr[0];

	for (int i = 0; i < numbers; ++i)
	{
		if (arr[i] < 0)
			negativeNum += arr[i];
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	int valueMax, valueMin;
	for (int i = 0; i < numbers; ++i)
	{
		if (max == arr[i])
			valueMax = i;
		if (min == arr[i])
			valueMin = i;
	}

	cout << "Сума отрицательных значений = " << negativeNum << endl;

	double composition = 1;
	for (int i = valueMin + 1; i < valueMax; ++i)
	{
		composition *= arr[i];
	}

	cout << "Произведение между минимальным и максимальным элементами = " << composition << endl;

	double evenNum = 1;
	for (int i = 0; i < numbers; ++i)
	{
		evenNum *= arr[i];
	}

	cout << "Произведение элементов с четными номерами = " << evenNum << endl;

	int firstNegative, lastNegative;
	for (int i = 0; i < numbers; ++i)
	{
		if (arr[i] < 0)
			firstNegative = i;
			lastNegative = i;
	}

	double amount = 0;
	for (int i = firstNegative + 1; i < lastNegative; ++i)
	{
		amount += arr[i];
	}

	cout << "Сумма элементов = " << amount << endl;

}
