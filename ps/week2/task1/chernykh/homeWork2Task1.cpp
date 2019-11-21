#include <iostream>

using namespace std;

//homeWork2Task1

int main()
{
	int enteredNumber;
	int sum = 0;
	int rangeEnd = 501;

	cout << "Please enter a numner from 0 to 500\n";
	cin >> enteredNumber;
	do

	{
		sum += enteredNumber;
		enteredNumber++;
	} while (enteredNumber<rangeEnd);
	cout << "Sum from your entered number to 500 = " << sum;
}
