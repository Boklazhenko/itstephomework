
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	const int size = 10;
	int ar[size] = { 1, 5, -4, 22, -10, 11, 2, 4, 8 ,-15 };
	double sum_negative = 0, prod_positive = 1, prod_range = 1;
	int min = ar[0], max = ar[0];

	for (int i = 0; i < size; ++i) {
		cout << ar[i] << ", ";
		if (ar[i] < 0)
			sum_negative += ar[i];
		if (ar[i] > 0)
			prod_positive *= ar[i];
		if (ar[i] < min)
			min = ar[i];
		if (ar[i] > max)
			max = ar[i];

	}
	cout << "\n\nСумма отрицательных элементов =  " << sum_negative << "\n";

	int minIndex = 0, maxIndex = 0;
	for (int i = 0; i < size; ++i)
	{
		if (ar[i] == min)
			minIndex = i;
		if (ar[i] == max)
			maxIndex = i;
	}
	if (maxIndex < minIndex)
		for (int i = maxIndex + 1; i < minIndex; ++i)
		{
			prod_range *= ar[i];
		}
	else
		for (int i = minIndex + 1; i < maxIndex; ++i)
		{
			prod_range *= ar[i];
		}
	cout << "\nПроизведение элементов, находящихся между min и max элементами = " << prod_range << endl;

	int first_neg = 0, last_neg = 0;
	for (int i = 0; i < size; ++i)
	{
		if (ar[i] < 0)
		{
			first_neg = i;
			break;
		}
	}
	for (int i = 0; i < size; ++i)
	{
		if (ar[i] < 0)
			last_neg = i;
	}
	cout << "\nПроизведение элементов с четными номерами = " << prod_positive << endl;

	double sum_between_neg = 0;
	for (int i = first_neg + 1; i < last_neg; ++i)
	{
		sum_between_neg += ar[i];
	}
	cout << "\nСумма элементов, находящихся между первым и последним отрицательными элементами = " << sum_between_neg << endl;
	return 0;
}