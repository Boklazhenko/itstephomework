// Пользователь вводит целое число А. 
//Программа должна определить, 
//что куб суммы цифр этого числа равен А*А



#include <iostream>
using namespace std;
int main()
{

	int num, one, sum = 0;
	cin >> num;
	int k = num;
	while (num > 0)

	{
		one = num % 10;
		num = (num - one) / 10;
		sum = sum + one;
	}
	if (sum * sum * sum == k * k)

		cout << "+";
	else cout << "-";
	

cout << endl;



}
