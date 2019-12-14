#include <iostream>

using namespace std;

int main()
{
	const int arraySize= 10;
	const int arraySizeJ = 5;
	int simpleArray[arraySize][arraySizeJ], enterednumber;

	cout << "Please enter number: " << endl;
	cin >> enterednumber;

	for (int i = 0; i < arraySize; ++i)
	{
		for (int j = 0; j < arraySizeJ; ++j)
		{
			simpleArray[i][j] = enterednumber;
			enterednumber += 1;
		}
	}

	for (int i = 0; i < arraySize; ++i)
	{
		for (int j = 0; j < arraySizeJ; ++j)
		{
			cout << simpleArray[i][j] << " ";
		}
		cout << endl;
	}

}

