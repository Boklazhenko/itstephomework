#include <iostream>

using namespace std;

int main()
{
	int number;

	cout << "Please enter a number: " << endl;
	cin >> number;



	for (long long i = 1; i <= number; ++i)
	{
		long long square = i * i;
	    long long coub = i * i * i;

		if (number % square == 0 && number % coub != 0)
		{
			cout << i << endl;
		}
	}
}
