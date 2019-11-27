

#include <iostream>
using namespace std;
int main()
{
	int A, Sum = 0, A1;
	cout << "A=" << endl;
	cin >> A;
	A1 = A;
	if (A < 0)
	{
		A = -A;
	}

	while (A > 0)
	{
		Sum += A % 10;
		A /= 10;
	}
	if (Sum * Sum * Sum == A1 * A1)

	{
		cout << "True number" << endl;
	}
	else {
		cout << "Enter another number" << endl;
	}
	return 0;
}


