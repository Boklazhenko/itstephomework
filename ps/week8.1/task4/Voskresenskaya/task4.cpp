
#include <iostream>
#include <cstdlib>
using namespace std;

void fillArray(int* const arr, const int size)
{

	for (int i = 0; i < size; ++i)
	{
		arr[i] = rand() % 100;
	}
}
void showArray(int* const arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int main()
{
	int M, N;
	cout << "Enter first array size" << endl;
	cin >> M;
	cout << "Enter second array size" << endl;
	cin >> N;
	int* firstArr = new int[M];
	int* secondArr = new int[N];

	fillArray(firstArr, M);
	fillArray(secondArr, N);
	showArray(firstArr, M);
	showArray(secondArr, N);

	int count = 0;
	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (firstArr[i] == secondArr[j])
				++count;
		}
	}
	if (count == 0)
	{
		cout << "No common elements" << endl;
	}
	int thirdSize = count;
	int* thirdArr = new int[thirdSize];
	int k = 0;
	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (firstArr[i] == secondArr[j])
			{
				thirdArr[k] = secondArr[j];
				++k;
			}
		}
	}

	if (count!= 0)
	cout << "Common elements" << endl;
	showArray(thirdArr, thirdSize);
	delete[] firstArr;
	delete[] secondArr;
	delete[] thirdArr;
	return 0;
}


