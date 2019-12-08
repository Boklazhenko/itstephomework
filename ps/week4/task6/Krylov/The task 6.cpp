#include <iostream>

using namespace std;

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int firstArr[5];
	int lastArr[5];

	for (int i = 0; i < 5; ++i)
	{
		firstArr[i] = arr[i];
		cout << firstArr[i] << endl;
	}
	for (int x = 5, i = 5; i < 10; ++x, ++i)
	{
		lastArr[x] = arr[i];
		cout << lastArr[x] << endl;
	}
}

