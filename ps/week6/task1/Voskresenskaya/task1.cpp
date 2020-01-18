

#include <iostream>
using namespace std;
double exponentiationNum(double a, int b)
{
	double c;
	if (b > 0)
	{
		c = 1.0;
		for (int i = 0; i < b; ++i)
		{
			c *= a;
		}
	}
	else if (b == 0)
	{
		c = 1.0;
	}
	else
	{
		int k = -1 * b;
		c = 1.0;
		for (int i = 0; i < k; ++i)
		{
			c *= (1/a);
		}
	}
	return c;
}

int main()
{
	double num;
	int pow;
	cout << "Insert the namber" << endl;
	cin >> num;
	cout << "Insert the power" << endl;
	cin >> pow;
	cout << exponentiationNum(num, pow);
}


