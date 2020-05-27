#include <iostream>


using namespace std;


int main()
{

	const int arrSize = 5;
	int arr[arrSize] = { 1,2,3,4,5 };

	int* pArr = arr;

	int* x = &arr[arrSize - 1];


	while (*pArr != *x)
	{
		int a = *pArr;
		*pArr = *x;
		*x = a;

		++pArr;
		--x;



	}

	for (int i = 0; i < arrSize; ++i)
	{
		cout << arr[i] << " ";
	}




	cin.get();
	system("pause");
	return 0;
}




