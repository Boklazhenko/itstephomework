// Пользователь вводит целое число. 
//Необходимо вывести все целые числа, на которое 
//заданное число делиться без остатка

#include <iostream>
using namespace std;
int main()
{
    
	int chislo;
	cout << "Enter chislo: ";
	cin >> chislo;

	for (int p = 1; p < chislo; p++)
	{
		if (chislo % p == 0)
			cout << p << endl;

	}


}

