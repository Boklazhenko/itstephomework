

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand (time(NULL));
	int const size = 10;
	int arr1[size];
	int* pArr1 = arr1;
	for (int i = 0; i < size; ++i)
	{
		*(pArr1 + i) = rand() % 100;
	}
	for (int i = 0; i < size; ++i)
	{
		cout << *(pArr1 + i) << " ";
	}
	cout << endl;
	int tmp = *pArr1;
	for (int i = 0; i < size / 2; ++i)
	{
		int tmp = *(pArr1 + i);
		*(pArr1 + i) = *(pArr1 + size - i - 1);
		*(pArr1 + size - i - 1) = tmp;
	}
	for (int i = 0; i < size; ++i)
	{
		cout << *(pArr1 + i) << " ";
	}
	return 0;
}


