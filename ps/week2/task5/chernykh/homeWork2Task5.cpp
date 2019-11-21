#include <iostream>

using namespace std;

int main()
{
	int option;
	int number = 1;
	int sum;

	cout << "Please enter an option: \n";
	cin >> option;

	for (int i = 1; i < 10; i++)
	{
		sum = option* number;
		cout << option << " x " << number++  << " = " << sum << endl;
	}

}
