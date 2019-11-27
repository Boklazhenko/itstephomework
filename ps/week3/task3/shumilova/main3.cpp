// 3.
// Пользователь вводит любое целое число. 
//Необходимо из этого целого числа 
//удалить все цифры 3 и 6 и вывести обратно на экран.

#include <iostream>
using namespace std;
int main()
{

	long long num, one;
	
	cin >> num;

	while (num > 0)
	{
		one = num % 10;
		num = (num - one) / 10;

		if (one != 3 && one != 6)
		{
			cout << one;
		}
		
	}
	
}
//весь мозг сломала над обратным циклом, 
//не получается хоть убей((