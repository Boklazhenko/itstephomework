#include <iostream>

using namespace std;

int main()
{
	int number;
	cout << "Please enter a number: " << endl;
	cin >> number;

	int newNumber = 0;
	for (int i = 1;number; number /=10)
	{
		if (number % 10 != 3 && number % 10 != 6)
		{
			newNumber += (number % 10) * i;
			i *= 10;
		}
	}
	cout << "New number:  " << newNumber << endl;
	return 0;
}
