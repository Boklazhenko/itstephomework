#include <iostream>

using namespace std;

double calcAvgArray(double array[], int arraySize)
{
	double sum = 0;
	int count = 0;

	for (int i = 0; i < arraySize; i++)
	{
		sum += array[i];
		++count;
	}

	double avg = sum / (double)count;

	return avg;
}

int main()
{
	const int size = 5;
	double array[size];

	double number;
	for (int i = 0; i < size; ++i)
	{
		cout << "Enter number: " << endl;
		cin >> number;

		array[i] = number;
	}

	cout << calcAvgArray(array, size);
}


