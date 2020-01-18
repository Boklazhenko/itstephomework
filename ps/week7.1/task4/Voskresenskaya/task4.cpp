

#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

float findArithmeticMean(int a[], int size)
{
	float Sum = 0;
	for (int i = 0; i < size; ++i)
	{
		Sum += a[i];
	}
	float ArithmeticMean = Sum / size;
	return ArithmeticMean;
}
int main()
{
	const int size = 12;
	int arr[size];
	srand(time(NULL));
	for (int i = 0; i < size; ++i)
	{
		arr[i] = rand() % 41 - 20;
	}
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	float arMean = findArithmeticMean(arr, size);
	cout << "Arithmetic Mean = " << arMean << endl;
	if (arMean > 0)
	{
		for (int i = 1; i < (size / 3) * 2; ++i)
		{
			int k = i;
			while (k > 0 && arr[k - 1] > arr[k])
			{
				int tmp = arr[k - 1];
				arr[k - 1] = arr[k];
				arr[k] = tmp;
				k -= 1;
			}
		}
		for (int i = (size / 3) * 2, j=1; i < size, j<=(size/3)/2; ++i,++j)
		{
			int tmp = arr[i];
			arr[i] = arr[size - j];
			arr[size - j] = tmp;
		}
	}
	else
	{
		for (int i = 1; i < size / 3; ++i)
		{
			int k = i;
			while (k > 0 && arr[k - 1] > arr[k])
			{
				int tmp = arr[k - 1];
				arr[k - 1] = arr[k];
				arr[k] = tmp;
				k -= 1;
			}
			for (int i = size / 3, j = 1; i < size, j <= size / 3; ++i, ++j)
			{
				int tmp = arr[i];
				arr[i] = arr[size - j];
				arr[size - j] = tmp;
			}
		}
	}
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	return 0;
}

