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

	int count2 = 0;
	for (int i = 0; i < M; ++i)
	{
		int count = 0;
		for (int j = 0; j < N; ++j)
		{
			if (firstArr[i] != secondArr[j])
				++count;
		}
		if (count == N)
		{
			++count2;
		}
	}
	cout << "count2= " << count2 << endl;

	int count3 = 0;
	for (int i = 0; i < N; ++i)
	{
		int count = 0;
		for (int j = 0; j < M; ++j)
		{
			if (secondArr[i] != firstArr[j])
				++count;
		}
		if (count == M)
		{
			++count3;
		}
	}
	cout << "count3= " << count3 << endl;

	int thirdSize = count2 + count3;
	int* thirdArr = new int[thirdSize];
	int k, c = 0;
	for (int i = 0; i < M; ++i)
	{
		k = 0;
		for (int j = 0; j < N; ++j)
		{

			if (firstArr[i] != secondArr[j])
			{
				++k;
			}
			if (k == N)
			{
				thirdArr[c] = firstArr[i];
				++c;
			}
		}
	}
	c = 0;
	for (int i = 0; i < N; ++i)
	{
		k = 0;
		for (int j = 0; j < M; ++j)
		{

			if (secondArr[i] != firstArr[j])
			{
				++k;
			}
			if (k == M)
			{
				thirdArr[count2 + c] = secondArr[i];
				++c;
			}
		}
	}
	showArray(thirdArr, thirdSize);
	delete[] firstArr;
	delete[] secondArr;
	delete[] thirdArr;
	return 0;
}
