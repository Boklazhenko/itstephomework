#include <iostream>

using namespace std;
int calculateTheAverage(int arr[], const int sizeArr);
void sortingTwoThirds(int arr[], const int sizeArr);
void sortingOneThirds(int arr[], const int sizeArr);

int main()
{

	const int sizeArr = 9;
	int arr[sizeArr];

	for (int i = 0; i < sizeArr; ++i)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}

	cout << endl;

	int check = calculateTheAverage(arr, sizeArr);



	if (check == 1)
		sortingTwoThirds(arr, sizeArr);
	else
		sortingOneThirds(arr, sizeArr);






	cin.get();
	system("pause");
	return 0;
}

int calculateTheAverage(int arr[], const int sizeArr)
{
	int check;
	int sum = 0;
	int average = 0;
	for (int i = 0; i < sizeArr; ++i)
	{
		sum += arr[i];
	}
	average = sum / sizeArr;




	check = (average > 0) ? 1 : 0;

	return check;

}

void sortingTwoThirds(int arr[], const int sizeArr)
{
	for (int i = 0; i < (sizeArr / 3 * 2); ++i)
	{
		for (int i = 0; i < (sizeArr / 3 * 2) - 1; ++i)
		{
			int x = arr[i];
			if (arr[i] > arr[i + 1])
			{
				arr[i] = arr[i + 1];
				arr[i + 1] = x;

			}
		}
	}


	for (int i = 0; i < sizeArr / 3 * 2; ++i)
	{

		cout << arr[i] << " ";
	}

	for (int i = sizeArr - 1; i > (sizeArr / 3 * 2) - 1; --i)
	{

		cout << arr[i] << " ";
	}

}

void sortingOneThirds(int arr[], const int sizeArr)
{
	for (int i = 0; i < (sizeArr / 3 * 1); ++i)
	{
		for (int i = 0; i < (sizeArr / 3 * 1) - 1; ++i)
		{
			int x = arr[i];
			if (arr[i] > arr[i + 1])
			{
				arr[i] = arr[i + 1];
				arr[i + 1] = x;

			}
		}
	}


	for (int i = 0; i < sizeArr / 3 * 1; ++i)
	{

		cout << arr[i] << " ";
	}

	for (int i = sizeArr - 1; i > (sizeArr / 3 * 1) - 1; --i)
	{

		cout << arr[i] << " ";
	}

}

