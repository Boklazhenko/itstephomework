#include <iostream>

using namespace std;

int main()
{
	const int size = 7;
	double justArray[size] = { 1.5,-7.3, 24.8, 30.2, 555.1, -2.6, 9.9 };

	cout << "Values of array: 1.5, -7.3, 24.8, 30.2, 555.1, -2.6, 9.9\n\n";

	double sumMinus = 0;

	for (int i = 0; i < size; ++i)
	{
		if (justArray[i] < 0)
		{
			sumMinus += justArray[i];
		}
	}

	cout << "Sum of minus elements = " << sumMinus << endl;

	double min = justArray[0];
	double max = justArray[0];
	double resultArrayEvenNumbers = 1;
	int minId = 0;
	int maxId = 0;

	for (int i = 1; i < size; ++i)
	{
		if (justArray[i] < min)
		{
			minId = i;
			min = justArray[i];
		}
		if (justArray[i] > max)
		{
			maxId = i;
			max = justArray[i];
		}
		if (i % 2 == 0)
		{
			resultArrayEvenNumbers *= justArray[i];//отладчиком всё проверял, не знаю почему дробную часть отбрасывает(
		}
	}

	cout << "Product of elements with even numbers = " << resultArrayEvenNumbers << endl;

	double result = 1;
	for (int i = minId + 1; i < maxId; ++i)
	{
		result *= justArray[i];
	}

	cout << "The product of elements between min and max elements = " << result << endl;

	int firstMinusId, lastMinusId;
	for (int i = 0; i < size; ++i)
	{
		if (justArray[i] <0)
		{
			firstMinusId = i;
			break;
		}
	}

	for (int i = 6; i > firstMinusId; --i)
	{
		if (justArray[i] < 0)
		{
			lastMinusId = i;
			break;
		}
	}

	double sumElements = 0;
	for (int i = firstMinusId + 1; i < lastMinusId; ++i)
	{
		sumElements += justArray[i];
	}

	cout << "The sum of the elements between the first and last negative elements = " << sumElements << endl;
}


