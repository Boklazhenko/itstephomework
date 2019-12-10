#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(0));
	const int arraySize = 5;
	int justArray[arraySize][arraySize], sum = 0, sumTotal = 0;

	for (int i = 0; i < arraySize; ++i)
	{
		for (int j = 0; j < arraySize; ++j)
		{
			justArray[i][j] = rand() % 20;
			cout << justArray[i][j] << "\t";
			sum += justArray[i][j];
		}
		cout << "|\t" << sum << "\n\n";
		sum = 0;
	}

	cout << "-----------------------------------------------\n\n";
	for (int j = 0; j < arraySize; ++j)
	{
		for (int i = 0; i < arraySize; ++i)
		{
			sum += justArray[i][j];
		}
		sumTotal += sum;
		cout << sum << "\t";
		sum = 0;
	}
	cout << "\t" << sumTotal << "\n\n";
}
