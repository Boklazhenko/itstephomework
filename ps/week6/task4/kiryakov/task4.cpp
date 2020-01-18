#include <iostream>
using namespace std;

int main()
{
	int x, c, i, a1 = 0, a2 = 0;
	cout << "Enter any six digit number : \n";
	cin >> x;
	if (99999 >= x || x > 999999)
		cout << "Invalid number input! \n";
	else
	{

		for (int i = 0; x; i++)
		{
			int c = x % 10;
			if (i < 3) a1 += c;
			else      a2 += c;
			x = x / 10;
		}
	}
	if (a1 == a2)
		cout << "Congratulations on your lucky number!!!";
	else
	{
		(a1 != a2);
		cout << "Alas, your number is not happy, try again next time..";
	}
}