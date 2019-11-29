#include <iostream>

using namespace std;

int main()
{
	int number;

	cout << "Please enter a number: " << endl;
	cin >> number;

	for (int i = 1; i <= number; ++i)
	{
		if (number % i == 0)
		{
			cout << i << endl;
		}
	}
}

