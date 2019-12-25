// Задание 2 (неделя 6)
// Написать функцию, которая получает в качестве параметров 
// 2 целых числа и возвращает сумму чисел из диапазона между ними.


#include <iostream>
using namespace std;

int summa(int num1, int num2)
{
	if (num2 < num1)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	int res = num1+1;
	for (int i = num1+2; i < num2; ++i)
		res += i;
	return res;
}
int main()
{
	cout<<summa(13, 25);
}

