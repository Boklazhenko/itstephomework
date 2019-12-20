using namespace std;

#include <iostream>
#include<stdlib.h> 
int findMax(int arr[], const int size)
{

	int max = arr[0];
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

float findMax(float arr[], const int size)
{

	float max = arr[0];
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
double findMaxTwoNum(double arr[], const int size)
{
	double max = arr[0];
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
int findMaxTwoNum(int a, int b)
{
	int max;
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	return max;
}

float findMaxTwoNum(float a, float b)
{
	float max;
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	return max;
}
double findMaxTwoNum(double a, double b)
{
	int max;
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	return max;
}

int findMaxThreeNum(int a, int b, int c)
{
	int max;
	if (a > b&& a > c)
	{
		max = a;
	}
	else if (b > a&& b > c)
	{
		max=b;
	}
	else
	{
		max=c;
	}
	return max;
}
float findMaxThreeNum(float a, float b, float c)
{
	float max;
	if (a > b&& a > c)
	{
		max = a;
	}
	else if (b > a&& b > c)
	{
		max = b;
	}
	else
	{
		max = c;
	}
	return max;
}
double findMaxThreeNum(double a, double b, double c)
{
	double max;
	if (a > b&& a > c)
	{
		max = a;
	}
	else if (b > a&& b > c)
	{
		max = b;
	}
	else
	{
		max = c;
	}
	return max;
}
int main()
{
	const int size = 5;
	int array[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 100;
		cout << array[i] << " ";
	}
	cout << endl;
	cout << findMax(array, size);
	cout << endl;
	/*int a=10, b=42;
	cout << findMaxTwoNum(a, b);*/
	float  a=2.4, b=5.8, c=6.5;
	cout << findMaxThreeNum(a, b, c);
	return 0;
}


