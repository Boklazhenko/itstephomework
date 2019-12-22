#include <iostream>

using namespace std;

double arifmeticMean(int arr[], int size);

int main()
{
	setlocale(LC_ALL, "");
	const int size = 10;
	int userData = 0;
	int arr[size];
	cout << "Введите 10 чисел для вычесления: " << endl;
	for (int i = 0; i < size; ++i)
	{
		cin >> userData;
		arr[i] = userData;
	}
	cout << "Среднее арифметическое = " << arifmeticMean(arr, size) << endl;

}

double arifmeticMean(int arr[], int size)
{
	int res = 0;
	for (int i = 0; i < size; ++i)
		res += arr[i];
	double average = res / size;
	return average;
}
