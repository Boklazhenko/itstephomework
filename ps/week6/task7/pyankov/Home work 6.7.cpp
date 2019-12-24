#include <iostream>


using namespace std;

void findeNumberItems(int arr[], int arrSize);

int main()
{
	const int arrSize = 10;
	int array[arrSize] = { 1,5,4,-1,6,-10,0,-45,0,8 };

	findeNumberItems(array, arrSize);


	cin.get();
	system("pause");
	return 0;
}


void findeNumberItems(int arr[], int arrSize)
{
	int positiveNumber = 0;
	int negativeNumber = 0;
	int zeroNumber = 0;

	for (int i = 0; i < arrSize; ++i)
	{
		if (arr[i] > 0)
			++positiveNumber;

		if (arr[i] < 0)
			++negativeNumber;

		if (arr[i] == 0)
			++zeroNumber;

	}
	cout << "Positive number " << positiveNumber << endl;
	cout << "Negative number " << negativeNumber << endl;
	cout << "Zero number " << zeroNumber << endl;

}
