// Написать программу, копирующую последовательно элементы одного массива размером 10 элементов 
// в 2 массива размером 5 элементов каждый.
#include <iostream>
using namespace std;

int main()
{
	int arr1[] = { 0,1,2,3,4,5,6,7,8,9 };
	int arr2[5], arr3[5];
	for (int i = 0; i < 5; ++i)
	{
		arr2[i] = arr1[i];
		cout << arr2[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 5; ++i) 
	{
		arr3[i] = arr1[i+5];
		cout << arr3[i] << " ";
	}
}