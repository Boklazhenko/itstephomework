// Число называется совершенным, если сумма всех его делителей равна ему самому. Напишите функцию поиска таких чисел во введенном интервале.
//

#include <iostream>
using namespace std;
void searchThePerfectDigitals(long long digitTheFirst, long long digitTheSecond)
{
	long long temp = 0;   //если сначала введено большее число, потом меньшее
	if (digitTheFirst > digitTheSecond)
	{
		temp = digitTheFirst;
		digitTheFirst = digitTheSecond;
		digitTheSecond = temp;
	}
	for (long long x = digitTheFirst; x <= digitTheSecond; ++x)
	{
		long long sum = 0;
		for (int divider = 1; divider <= x / 2; ++divider) // для сокращения количества вычислений делитель можно проверять до тех пор пока
		{                                                    //он не станет равным половине числа  
			if (x % divider == 0)
				sum += divider;
		}
		if (sum == x)
			cout << x << " ";
	}
}
int main()//проверка работы функции
{
	/*long long x, y;
	cout << "Input the first digital\n";
	cin >> x;
	cout << "Input the second digital\n";
	cin >> y;
	searchThePerfectDigitals(x, y);*/
}