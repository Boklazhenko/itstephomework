#include <iostream>

double averageArray(double arr[], int size);
int main()
{

}
double averageArray(double arr[], int size) {
	double sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	double average = sum / size;
	return average;
}