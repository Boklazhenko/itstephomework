#include <iostream>


using namespace std;
void sumArr(int* pArr, const int size);

int main()
{
	const int arrSize = 5;
	int arr[arrSize] = { 1,2,3,4,5 };

	int* pArr = arr;

	sumArr(pArr, arrSize);


	cin.get();
	system("pause");
	return 0;
}

void sumArr(int* pArr, const int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += *(pArr + i);
	}
	cout << sum;

}
