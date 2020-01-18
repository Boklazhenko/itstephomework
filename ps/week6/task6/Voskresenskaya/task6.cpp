

#include <iostream>
#include <stdlib.h>

using namespace std;
float calculArithmMeanArr(int arr[], int size)
{
	int sumArr = 0;
	for (int i = 0; i < size; ++i)
	{
		sumArr += arr[i];
	}
	float ArithmMean = sumArr / size;
		return (float)ArithmMean;
}



int main()
{
	const int size=10;
	int arr[size];
	for (int i = 0; i < size; ++i)
	{ 
		arr[i] = rand()% 100;
		cout << arr[i] << " ";
    }
	cout << endl;

	float ArithmMean = calculArithmMeanArr (arr, size);
	cout << (float)ArithmMean;
}

