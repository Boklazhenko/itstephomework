// Написать рекурсивную функцию нахождения наибольшего общего делителя двух целых чисел.
//

#include <iostream>
using namespace std;

int findMaxDivider(int x, int y, int divider) 
{                                             
	if (x % divider == 0 && y % divider == 0)
		return divider;
	if (y < x)
	{
		int	temp = y;
		y = x;
		x = temp;
	}
	return findMaxDivider(x, y, divider - 1);
}

	
int main()
{
	int x, y;
	cout << "Input the first number\n";
	cin >> x;
	cout << "Input the second number\n";
	cin >> y;
	cout << findMaxDivider(x, y, x);
	}