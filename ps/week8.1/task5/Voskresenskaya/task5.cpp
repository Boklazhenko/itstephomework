

#include <iostream>
#include <cstdlib>
using namespace std;

void fillArray(int* const arr, const int size)
{

	for (int i = 0; i < size; ++i)
	{
		arr[i] = rand() % 100;
	}
}
void showArray(int* const arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

bool isPrime(int N)
{
	bool result(true);
	if ((N == 2) || (N == 3))
		result = true;
	if (N==0)
		result = false;
	else
	{
		for (int i = 2; i <= (sqrt(N)); ++i)
		{

			if (N % i == 0)
			{
				result = false;
				break;
			}
		}
	}
	return result ;
}
int* deletePrimeNum(int* const arr, const int size)
{
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		if (!isPrime(arr[i]))
			++count;
	}
	
	int secondSize = count;
	int* secondArr = new int[secondSize];
	int c = 0;
	for (int i = 0; i < size; ++i)
	{
		if (!isPrime(arr[i]))
		{
			secondArr[c] = arr[i];
				++c;
		}
	}
	showArray(secondArr, secondSize);
	return secondArr;
	delete[]secondArr;

}
int main()
{
	int  size = 10;
	int* arr = new int[size];
	fillArray(arr, size);
	showArray(arr, size);
	deletePrimeNum(arr, size);
	delete[]arr;
	return 0;
}
