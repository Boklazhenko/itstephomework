#include <iostream>

using namespace std;

int main()
{
	int startRange, endRange;
	int sum = 0;

	cout << "Please enter first number:\n";
	cin >> startRange;
	cout << "Please enter second number:\n";
	cin >> endRange;

	while (startRange<=endRange)
	{
		sum += startRange;
		++startRange;
	}
	cout << "Total sum of your range numbers = " << sum;
}
