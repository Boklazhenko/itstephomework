#include <iostream>

using namespace std;

int main()
{
	int number;
	int zero = 0;

	cout << "Please enter a number: \n";
	cin >> number;

	while (zero <= number)
	{
		cout << zero << endl;
		++zero;
	}
}
