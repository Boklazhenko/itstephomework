#include <iostream>
using namespace std;
int main()
{
	const int arraySize = 10;
	const int arraySizeJ = 5;
	int simpleArray[arraySize][arraySizeJ], enternum;
	cout << "Enter number: " << endl;
	cin >> enternum;

	for (int i = 0; i < arraySize; ++i)
	{
		for (int j = 0; j < arraySizeJ; ++j)
		{
			simpleArray[i][j] = enternum;
			enternum += 1;
		}
	}
	for (int i = 0; i < arraySize; ++i)
	{
		for (int j = 0; j < arraySizeJ; ++j)
		{
			cout << simpleArray[i][j] << " | ";
		}
		cout << endl;
	}

}
