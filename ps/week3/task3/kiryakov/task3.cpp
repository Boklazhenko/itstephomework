#include <iostream>
using namespace std;
int main()
{

	int a = 0, k;
	cout << "Insert the number: ";
	cin >> k;
	cout << endl;
	while (k > 0)
	{
		if (k % 10 != 3 && k % 10 != 6)
		{
			a *= 10;
			a += k % 10;
		}
		k /= 10;
	}

	cout << "Received number: ";
	while (a > 0)
	{
		cout << a % 10;
		a /= 10;
	}
	cout << endl;


}
