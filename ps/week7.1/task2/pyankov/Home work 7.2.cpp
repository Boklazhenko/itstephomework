#include <iostream>

using namespace std;

int main()
{

	const int sizeArr = 10;
	int arr[sizeArr];

	for (int i = 0; i < sizeArr; ++i)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}

	cout << endl;


	int key = 0, j = 0;
	for (int i = 1; i < sizeArr; ++i)
	{
		key = arr[i];
		for (j = i - 1; (j >= 0) && (arr[j] >= key); --j)
		{
			arr[j + 1] = arr[j];
		}

		arr[j + 1] = key;


	}

	for (int i = 0; i < sizeArr; ++i)
	{

		cout << arr[i] << " ";
	}

	cin.get();
	system("pause");
	return 0;
}
