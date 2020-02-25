//Написать рекурсивную функцию нахождения наибольшего общего делителя двух целых чисел.
#include <iostream>
using namespace std;

int finMinDivider(int a, int b)
{
	if (a % b == 0)
	{
		cout << b;
		return 0;
	}
	int rem = a % b;
	int tmp = b;
	b = rem;
	a = tmp;
	return finMinDivider(a, b);
}

int main()
{
	int a = 1200;
	int b = 360;
	finMinDivider(a, b);
	return 0;
}


