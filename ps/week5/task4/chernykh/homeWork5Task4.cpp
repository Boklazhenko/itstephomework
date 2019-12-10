#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(0));
	const int arraySize = 5;
	int justArray[arraySize][arraySize];


	for (int i = 0; i < arraySize; ++i)
	{
		for (int j = 0; j < arraySize; ++j)
		{
			justArray[i][j] = rand() % 100;
		}
	}

	for (int i = 0; i < arraySize; ++i)
	{
		for (int j = 0; j < arraySize; ++j)
		{
			cout << justArray[i][j] << " ";
		}
		cout << endl;
	}

	int sum = 0, count = 0, maxArrayElement = 0, minArrayElement = justArray[0][0], min_i_id = 0, min_j_id = 0;
	for (int i = 0; i < arraySize; ++i)
	{
		int min = justArray[i][0];
		for (int j = 0; j < arraySize; ++j)
		{
			sum += justArray[i][j];
			++count;
			if (justArray[i][j] > maxArrayElement)
			{
				maxArrayElement = justArray[i][j];
			}
			if (justArray[i][j] < minArrayElement)
			{
				minArrayElement = justArray[min_i_id = i][min_j_id = j];
			}
		}
	}
	cout << "\n\n";
	cout << "Sum of all array elements = " << sum << endl;

	float averageArithmetic = sum / (float)count;

	cout << "Average sum array elements = " << averageArithmetic << endl;

	cout << "Max element of array = " << maxArrayElement << endl;
	cout << "Min element of array = " << minArrayElement << endl;
}
