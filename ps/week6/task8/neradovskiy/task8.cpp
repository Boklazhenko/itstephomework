#include <iostream>

double maxValueArr(int arr[], int size);
double maxValueArr(float arr[], int size);
double maxValueArr(double arr[], int size);

double maxValue2(int a, int b);
double maxValue2(double a, double b);

double maxValue3(int a, int b, int c);
double maxValue3(float a, float b, float c);

int main()
{
	const int size = 5;
	int arr[size] = { 1, 2, -3, 0, 5 };
	float arr2[size] = { 2.5f, 15.1f, 25.3f, -26.8f, 1.6f };
	double arr3[size] = { 1234.0, -12345.1, 1.2, 1.24, 12.0 };

	std::cout << " Max value in arr int is: " << maxValueArr(arr, size) << std::endl;
	std::cout << " Max value in arr float is: " << maxValueArr(arr2, size) << std::endl;
	std::cout << " Max value in arr double is: " << maxValueArr(arr3, size) << std::endl;
	std::cout << "Max of two value int is: " << maxValue2(6, -20) << std::endl;
	std::cout << "Max of two value double is: " << maxValue2(123456.0, -20.0) << std::endl;
	std::cout << "Max of three value int is: " << maxValue3(6, -20, 0) << std::endl;
	std::cout << "Max of three value float is: " << maxValue3(6.3f, -20.1f, 3.3f) << std::endl;
}
double maxValueArr(int arr[], int size) {
	int max = arr[0];
	for (int i = 0; i < size; ++i)
	{
		max = max < arr[i] ? arr[i] : max;
	}
	return max;
}

double maxValueArr(float arr[], int size) {
	float max = arr[0];
	for (int i = 0; i < size; ++i)
	{
		max = max < arr[i] ? arr[i] : max;
	}
	return max;
}
double maxValueArr(double arr[], int size) {
	double max = arr[0];
	{
		for (int x = 0; x < size; ++x)
		{
			max = max < arr[x] ? arr[x] : max;
		}
		return max;
	}
}

double maxValue2(int a, int b) {
	int max = a > b ? a : b;
	return max;
}
double maxValue2(double a, double b) {
	double max = a > b ? a : b;
	return max;
}

double maxValue3(int a, int b, int c) {
	if (a > b && a > c)
		return a;
	else if (b > a && b > c)
	{
		return b;
	}
	else
	{
		return c;
	}
}
double maxValue3(float a, float b, float c) {
	if (a > b && a > c)
		return a;
	else if (b > a && b > c)
	{
		return b;
	}
	else
	{
		return c;
	}
}
