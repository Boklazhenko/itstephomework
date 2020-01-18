

#include <iostream>
using namespace std;
int findPositivNum(int arr[], int size)
{
	int counterPos = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > 0)
			++counterPos;
	}
	return counterPos;
}
int findNegativeNum(int arr[], int size)
{
	int counterNeg = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < 0)
			++counterNeg;
	}
	return counterNeg;
}

int findNullNum(int arr[], int size)
{
	int couterNul = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == 0)
			++couterNul;
	}
	return  couterNul;
}



int main()
{
	const int size = 10;
	int array[size];
	for (int i = 0; i < size; ++i)
	{
		cout << "Insert the number " << endl;
		cin >> array[i];
	}

	int pos = findPositivNum(array, size);
	int neg = findNegativeNum(array, size);
	int null = findNullNum(array, size);
	cout << pos << " " << neg << " " << null;
	return 0;
}


