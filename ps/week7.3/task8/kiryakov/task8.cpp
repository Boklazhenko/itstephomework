#include <iostream>
using namespace std;
int main()
{
	int const size = 5;
	int arr[size] = { 1,2,38,4,45 };
	int sum = 0;
	int* pArr = arr;
	for (int i = 0; i < size; ++i)
	{
		sum += *(pArr + i);
	}
	cout << sum;
}