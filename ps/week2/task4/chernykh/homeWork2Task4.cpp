#include <iostream>

using namespace std;

int main()
{
	int enteredNumber;
	const int number = 20;
	int sum;

	cout << "Please enter number from 1 to 20: \n";
	cin >> enteredNumber;

	while (enteredNumber < 21)
	{
		sum = enteredNumber * number;

		cout << sum <<endl;
		++enteredNumber;
	}
}
