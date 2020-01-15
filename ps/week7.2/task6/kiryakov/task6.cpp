#include <iostream>
using namespace std;
int sum(int a, int b)
{
	if (a - b == 1)
		return 0;
	return b + sum(a, b - 1);
}
int main()
{
	int a;
	cout << "\nEnter a: ";
	cin >> a;

	int b;
	cout << "\nEnter b: ";
	cin >> b;
	if (a == b || a > b)
		return 0;

	cout << "\nThe sum of all numbers, between " << a << " and "
		<< b << " is " << sum(a, b) << "\n";
	return 0;
}