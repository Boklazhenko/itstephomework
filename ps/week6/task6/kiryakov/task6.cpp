#include <iostream>

using namespace std;
#define SIZE_ 10
double ArithmeticalMean(int* mas, int num)
{
	int mean = 0;
	for (int i = 0; i < num; i++)
	{
		mean += *mas++;
	}
	cout << "\nsum elements:" << mean;
	return (double)mean / num;
}

int main()
{
	int arr[SIZE_];
	cout << "arr:";
	for (int i = 0; i < SIZE_; i++)
	{ 
		arr[i] = i;
		cout << " " << arr[i];
	}

	cout << "\nmean:" << ArithmeticalMean(arr, SIZE_) << endl;


	cout << endl;
	
}