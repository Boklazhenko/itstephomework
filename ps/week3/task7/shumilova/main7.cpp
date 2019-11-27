// Пользователь вводит два целых числа. 
//Необходимо вывести все целые числа, 
//на которые оба введенных числа делятся без остатка.

#include <iostream>
using namespace std;
int main()
{

	int chislo1, chislo2;
	cout << "Enter first chislo: ";
	cin >> chislo1;
	cout << "Enter second chislo: ";
	cin >> chislo2;

	for (int p = 1; p < chislo1 && p < chislo2; p++)
	{
		if (chislo1 % p == 0 && chislo2 % p == 0)

			cout << p << endl;

	}


}

