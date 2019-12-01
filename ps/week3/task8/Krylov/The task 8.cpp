//подглядел тут - https://github.com/AleksejMoiseev/project/issues/55
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int a = 0, b, c, k = 0, res = 0, k1 = 0;
	cout << "Введите число = ";
	cin >> a;

	if (a < 0)
	{
		a = a * -1;
	}

	b = a; c = a;

	for (int i = 0; b > 0; i++)
	{
		c = b % 10; k = i + 1;
		b = b / 10;
		res = c + res;
		if (c == 0) 
		{ 
			k1 = k1++; 
		}
	}

	cout << "Количество чисел = " << k << endl;
	cout << "Сумма чисел = " << res << endl;
	cout << "Среднее арифметическое = " << (float)res / k << endl;
	cout << "Количество нулей = " << k1 << endl;


}