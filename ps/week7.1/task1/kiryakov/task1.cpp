#include <iostream>
using  namespace std;
void bubbleSort(int arr[], int n)
{
	int counter = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				++counter;
			}
		}
	}
	cout << counter;
}

void main()
{
	int arr[5] = { 5,4,3,1,2 };
	bubbleSort(arr, 5);
	
}