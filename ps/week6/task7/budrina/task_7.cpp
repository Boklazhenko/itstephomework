// Написать функцию, определяющую количество положительных, отрицательных и нулевых элементов
// передоваемого ей массива
#include <iostream>
using namespace std;
void printArr(double arr[], int size)
{
	double positiveNum = 0;
	double negativeNum = 0;
	int zeroNum = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > 0) ++positiveNum;
		else if (arr[i] < 0) ++negativeNum;
		else  ++zeroNum;
	}
	cout << "\nPozitive number = " << positiveNum;
	cout << "\nNegative number = " << negativeNum;
	cout << "\nZero number = " << zeroNum<< endl;
}
int main()
{
	const int size = 10;
	double arr[size] = { -2.2,4,-3.7,5,0,6,8,-9,0,1 };
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << ", ";
	}
	printArr(arr, 10);
	return 0;
}