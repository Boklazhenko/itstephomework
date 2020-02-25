//Написать рекурсивную функцию, которая выводит N звезд в ряд, 
//число N задает пользователь.Проиллюстрируйте работу функции примером.

#include <iostream>
using namespace std;
int printStars(int N)
{
	if (N <= 0)
		return 0;
	cout << "* ";
	--N;
	return printStars(N);
}
int main()
{
	int a;
	cout << "Enter number rom greater than 0";
	cin >> a;
	if (a > 0)
	{
		printStars(a);
	}
	else
	{
		cout << "error";
	}
	return 0;
}


