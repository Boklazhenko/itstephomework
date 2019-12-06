

#include <iostream>
using namespace std;
int mainArr[10] = { 1,2,3,4,5,6,7,8,9,10 };
int arr1[5];
int arr2[5];


int main()
{
	for (int i = 0; i < 10; ++i)
	{
		if (i <= 5)
		{
			arr1[i] = mainArr[i];
		}
		else (arr1[i] = mainArr[i]);
	}

	cout << "Array 1: ";

	for (int i = 0; i < 5; ++i)
	{

		cout << arr1[i] << " ";

	}

	cout << endl;

	cout << "Array 2: ";
	for (int i = 0; i < 5; ++i)
	{

		cout << arr2[i] << " ";

	}

}


