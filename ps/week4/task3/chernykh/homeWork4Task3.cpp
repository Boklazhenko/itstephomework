#include <iostream>

using namespace std;

int main()
{
	const int size = 5;

	int array[size] = { 27,89,24,7,1 };
	int max = array[0];
	int min = array[0];

	for (int i = 1; i < size; ++i)
	{
		if (min > array[i])
		{
			min = array[i];
		}
		if (max < array[i])
		{
			max = array[i];
		}
	}

	cout << "Max = " << max << "\n\n";
	cout << "Min = " << min << "\n\n";

	return 0;
}

