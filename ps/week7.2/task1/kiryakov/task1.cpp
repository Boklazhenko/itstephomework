#include <iostream>
using namespace std;
int gcd(int x, int y)
{
	if (y== 0)
		return x;
	if (x > y)
		return gcd(y, x % y);
	else
		return gcd(x, y % x);
}

int main()
{
	setlocale(0, "");
	int x, y;
	cout << "Enter the first number:\n ";
	cin >> x;
	while (x <= 0)
	{
		cout << "\nError: The number must be integer and positive.\n";
		cin >> x;
	}
	cout << "Enter the second number:\n";
	cin >> y;
	while (y <= 0)
	{
		cout << "\nError: The number must be integer and positive.\n";
		cin >> y;
	}

	cout << "The greatest common factor is: " << gcd(y, x % y) << endl;

}