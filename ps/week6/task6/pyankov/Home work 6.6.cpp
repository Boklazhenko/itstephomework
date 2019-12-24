#include <iostream>


using namespace std;

int calcArithmeticMean(int arr[], int arrSize);

int main()
{

	int array[5] = { 1,5,4,1,6 };

	cout << calcArithmeticMean(array, 5);


	cin.get();
	system("pause");
	return 0;
}


int calcArithmeticMean(int arr[], int arrSize)
{
	int sum = 0;
	int arithmeticMean = 0;
	int counter = 0;
	for (int i = 0; i < arrSize; ++i)
	{
		sum += arr[i];
		++counter;
	}
	arithmeticMean = sum / counter;
	return arithmeticMean;

}
