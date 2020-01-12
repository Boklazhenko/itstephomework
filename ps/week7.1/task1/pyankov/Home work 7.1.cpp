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

	for (int i = 0; i < sizeArr; ++i)
	{
		for (int i = 0; i < sizeArr - 1; ++i)
		{
			int x = arr[i];
			if (arr[i] > arr[i + 1])
			{
				arr[i] = arr[i + 1];
				arr[i + 1] = x;

			}
		}
	}

	for (int i = 0; i < sizeArr; ++i)
	{

		cout << arr[i] << " ";
	}


	cin.get();
	system("pause");
	return 0;
}
