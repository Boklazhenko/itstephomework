#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter a number: " << endl;
	int number = 0;
	int* pNumber = &number;

	cin >> *pNumber;

	if (*pNumber < 0)
	{
		cout << "Sign is minus!" << endl;
	}
	else if (*pNumber > 0)
	{
		cout << "Sign is plus!" << endl;
	}
	else
	{
		cout << "You entered zero!" << endl;
	}
}
