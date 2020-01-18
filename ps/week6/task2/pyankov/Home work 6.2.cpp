#include <iostream>
using namespace std;

int sumRangeNumbers(int startNumber, int finiteNumber);

int main()
{

	int a, b;

	cout << "input number 1" << endl;
	cin >> a;
	cout << endl << "input number 2" << endl;
	cin >> b;
	cout << endl << sumRangeNumbers(a, b);

}

int sumRangeNumbers(int startNumber, int finiteNumber)
{
	int sum = 0;
	if (startNumber > finiteNumber)
	{
		int x = startNumber;
		startNumber = finiteNumber;
		finiteNumber = x;

	}

	for (int i = startNumber + 1; i < finiteNumber; ++i)
	{

		sum += i;
	}

	return sum;
}
