

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	for (int i = 1; i < size; ++i)
	{
		arr[i] = rand() % 41 - 20;
	}
	for (int i = 1; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 1; i < size; ++i)
	{
		int k = i;
		while (k > 0 && arr[k - 1] > arr[k])
		{
			int tmp = arr[k - 1];
			arr[k - 1] = arr[k];
			arr[k] = tmp;
			k -= 1;
		}
	}
	for (int i = 1; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	return 0;
}

