// Задание 1 (неделя 6)
// Написать функцию, которая принимает два параметра : 
// основание степени и показатель степени, 
// и вычисляет степень числа на основе полученных данных

#include <iostream>
using namespace std;

long long degree(int basis, int exponent)
{
	int res = 1;
	for (int i = 0; i < exponent; ++i)
		res *= basis;
	return res;
}
int main()
{
	int basis, exponent;
	cin >> basis >> exponent;
	cout << degree(basis, exponent);
}

