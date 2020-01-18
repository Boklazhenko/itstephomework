
#include <iostream>
using namespace std;

void  changeRating(int a[], int size)
{
	int answer;
	cout << "Do you want to change the rating ?" << endl;
	cout << "1- if you want to change the rating." << endl;
	cout << "0- if you want to exit." << endl;
	cin >> answer;
	while (answer != 0)
	{
		switch (answer)
		{
		case 1:
			int i, rat;
			cout << "Enter rating number" << endl;;
			cin >> i;
			cout << "Enter rating" << endl;;
			cin >> rat;
			a[i - 1] = rat;
			break;
		case 0:
			cout << "Exit" << endl;;
			break;
		default:
			cout << "Error" << endl;;
		}
		cout << "Do you want to change the rating ?" << endl;
		cout << "1- if you want to change the rating." << endl;
		cout << "0- if you want to exit." << endl;
		cin >> answer;
	}
}
float findArithmeticMean(int a[], int size)
{
	float Sum = 0;
	for (int i = 0; i < size; ++i)
	{
		Sum += a[i];
	}
	float ArithmeticMean = Sum / size;
	return ArithmeticMean;
}


int main()
{
	const int size = 10;
	int arr[size];
	for (int i = 0; i < 10; ++i)
	{
		cout << "Enter " << i + 1 << " rating 1-12" << endl;
		cin >> arr[i];
	}
	for (int i = 0; i < 10; ++i)
	{
		cout << "Rating " << i + 1 << "\t" << arr[i] << endl;
	}

	changeRating(arr, size);
	for (int i = 0; i < 10; ++i)
	{
		cout << "Rating " << i + 1 << "\t" << arr[i] << endl;
	}
	float ArM = findArithmeticMean(arr, size);
	cout << "Arithmetic Mean" << "\t" << ArM << endl;
	if (ArM < 10.7)
	{
		cout << "You do not get a scholarship";
	}
	else
	{
		cout << "You get a scholarship";
	}
	return 0;
}


