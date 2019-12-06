#include <iostream>
using namespace std;

int main()
{
	const int num=5;
	int arr1[] = { 0,1,2,3,4,5,6,7,8,9 };
	int arr2[num], arr3[num];
	for (int i = 0; i <num; ++i)
	{
		arr2[i] = arr1[i];
		cout << arr2[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < num; ++i)
	{
		arr3[i] = arr1[i + num];
		cout << arr3[i] << " ";
	}
}