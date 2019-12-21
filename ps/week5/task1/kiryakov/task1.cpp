/*
Сейчас полетят отмазы и оправдания, перед новым годом чет работой завалили
и поэтому на этой недели я чет не успел совсем домашку.
Сделать то сделал, где то у ребят немного списал, где то интернет помог.
Ну и сам чуть-чуть.  =)
*/


#include <iostream>
using namespace std;
int main()
{
	const int arraySize = 5;
	int justArray[arraySize][arraySize], enterNumber;
	cout << "Enter number: " << endl;
	cin >> enterNumber;
	for (int i = 0; i < arraySize; ++i)
	{
		for (int j = 0; j < arraySize; ++j)
		{
			justArray[i][j] = enterNumber;
			enterNumber *= 2;
		}
	}

	for (int i = 0; i < arraySize; ++i)
	{
		for (int j = 0; j < arraySize; ++j)
		{
			cout << justArray[i][j] << " | ";
		}
		cout << endl;
	}
}