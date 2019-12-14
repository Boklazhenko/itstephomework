#include <iostream>

using namespace std;

int main()
{
	const int arraySize = 5;
	long justArray[arraySize][arraySize], enteredNumber;

	cout << "Please enter number: " << endl;
	cin >> enteredNumber;

	for (int i = 0; i < arraySize; ++i)
	{
		for (int j = 0; j < arraySize; ++j)
		{
			justArray[i][j] = enteredNumber;
			enteredNumber *= 2;
		}
	}

	for (int i = 0; i < arraySize; ++i)
	{
		for (int j = 0; j < arraySize; ++j)
		{
			cout << justArray[i][j] << " ";
		}
		cout << endl;
	}
}

