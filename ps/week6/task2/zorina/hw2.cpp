// Написать функцию, которая получает в качестве параметров 2 целых числа и возвращает сумму чисел из диапазона между ними.
//

#include <iostream>
using namespace std;
long long sumTheDiditals(long long digitTheFirst, long long digitTheSecond)
{
	long long sum = 0;
	long long temp = 0;
	if (digitTheFirst > digitTheSecond)
	{
		temp = digitTheFirst;
		digitTheFirst = digitTheSecond;
		digitTheSecond = temp;
	}
	for (int x = digitTheFirst+1; x <digitTheSecond; ++x) //введенные числа не учитываются, только числа, находящиеся между ними
		sum += x;
	return sum;
	}

int main()// проверка работы функции
{
	/*long long x, y;
	cout << "Input any digidal\n";
	cin >> x;
	cout << "Input any digital\n";
	cin >> y;
	cout <<"\nSum of all digitals which are between two inputed numbers is "<< sumTheDiditals(x, y)<<endl;*/
}