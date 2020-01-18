#include <iostream>
#include <cstdlib>
using namespace std;

void fillArray(int* const arr, const int size)
{

	for (int i = 0; i < size; ++i)
	{
		arr[i] = rand() % 101 - 50;
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
void distribArray(int* const arr, const int size)
{
	int count1 = 0, count2 = 0, count3 = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > 0)
		{
			++count1;
		}

		else if (arr[i] < 0)
		{
			++count2;
		}
		else
		{
			++count3;
		}
	}
	int firstSize = count1;
	int* firstArr = new int[count1];
	int secondSize = count2;
	int* secondArr = new int[secondSize];
	int thirdSize = count3;
	int* thirdtArr = new int[thirdSize];

	int a = 0, b = 0, c = 0;

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > 0)
		{
			firstArr[a] = arr[i];
			++a;
		}
		else if (arr[i] < 0)
		{
			secondArr[b] = arr[i];
			++b;
		}
		else
		{
			thirdtArr[c] = arr[i];
			++c;
		}
	}
	cout << "Positive members of the array" << endl;
	showArray(firstArr, firstSize);
	cout << "Negativ members of the array" << endl;
	showArray(secondArr, secondSize);
	cout << "Null members of the array" << endl;
	showArray(thirdtArr, thirdSize);
	delete[] firstArr;
	delete[] secondArr;
	delete[] thirdtArr;
}
int main()
{
	const int size = 100;
	int arr[size];
	fillArray(arr, size);
	showArray(arr, size);
	distribArray(arr, size);
	return 0;
}

