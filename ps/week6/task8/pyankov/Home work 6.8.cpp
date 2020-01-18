#include <iostream>
using namespace std;

int findMaxValueArray(int array[], int arrSize);
int findingMaxValue(int numberOne, int numberTwo);
int findingMaxValue(int numberOne, int numberTwo, int numberThree);

int main()
{

	const int arraySize = 5;
	int myArr[arraySize] = { 1,0,-4,59,-65 };


	cout << findMaxValueArray(myArr, arraySize) << endl;
	cout << findingMaxValue(-1, -5) << endl;
	cout << findingMaxValue(-3, 0, 4);

	cin.get();
	system("pause");
	return 0;
}

int findMaxValueArray(int array[], int arrSize)
{
	int max = array[0];

	for (int i = 0; i < arrSize; ++i)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}



int findingMaxValue(int numberOne, int numberTwo)
{
	if (numberOne > numberTwo)
		return numberOne;

	else
		return numberTwo;

}

int findingMaxValue(int numberOne, int numberTwo, int numberThree)
{
	int maxNumber = numberOne;


	if (maxNumber < numberTwo)
		maxNumber = numberTwo;

	if (maxNumber < numberThree)
		maxNumber = numberThree;

	return maxNumber;

}
