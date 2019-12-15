#include <iostream>

using namespace std;

void difiningSignArrayElements(double array[], int arraySize)
{
	int minusElementCount = 0, plusElementCount = 0, zeroElementCount = 0;

	for (int i = 0; i < arraySize; ++i)
	{
		if (array[i] < 0)
		{
			++minusElementCount;
		}
		else if (array[i] > 0)
		{
			++plusElementCount;
		}
		else
		{
			++zeroElementCount;
		}
	}
	cout << endl << "Minus element quantity = " << minusElementCount << endl
		<< "Plus element quantity = " << plusElementCount << endl
		<< "Zero element quantity = " << zeroElementCount << endl;
}

int main()
{
	const int arraySize = 10;
	double array[arraySize];

	double number;
	for (int i = 0; i < arraySize; ++i)
	{
		cout << "Enter number: " << endl;
		cin >> number;

		array[i] = number;
	}

	difiningSignArrayElements(array, arraySize);

	return 0;
}
