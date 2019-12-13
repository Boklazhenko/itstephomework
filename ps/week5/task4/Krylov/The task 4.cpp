#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	const int row = 3;
	const int col = 4;
	int arr[row][col];
	int sum = 0;
	int count = 0;

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			arr[i][j] = rand() % 10 + 1;
			sum += arr[i][j];
			cout << arr[i][j] << endl;
			++count;
		}
	}
	
	int min = arr[0][0];
	int max = arr[0][0];

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if (min > arr[i][j])
				min = arr[i][j];
			if (max < arr[i][j])
				max = arr[i][j];
		}
	}

	float average = sum / count;
	cout << "Сумма элементов = " << sum << endl;
	cout << "Среднее арифметическое = " << average << endl;
	cout << "Минимальный элемент = " << min << endl;
	cout << "Максимальный элемент = " << max << endl;
	
}
