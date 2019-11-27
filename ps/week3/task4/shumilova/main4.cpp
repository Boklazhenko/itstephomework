// 4.
// Пользователь вводит любое целое число А. 
//Необходимо вывести все целые числа В, 
//для которых А делиться без остатка на В
//В и не делиться без остатка на ВВ*В

#include <iostream>
using namespace std;
int main()
{

	int num;
	cout << "Enter luboe chislo: ";
	cin >> num;
	

	for (int p = 1; p < num ; p++)
	{
		if (num % p == 0 && num % (p*2) != 0)

			cout << p << endl;

	}


}

