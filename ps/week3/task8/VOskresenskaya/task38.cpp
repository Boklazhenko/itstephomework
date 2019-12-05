

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A, A1;
	int B;
	int i = 0;
	int k = 0;
	cout << "A=" << endl;
	cin >> A;
	A1 = A;
	while (A > 0)
	{
		A /= 10;
		++i;
	}
	cout << "Колличество цифр в числе=" << i << endl;

	int j = 0;
	for (j; j <= A1; j++)
	{
		j += A1 % 10;
		if (A1 % 10 == 0)
		{
			k++;
		}
		A1 /= 10;
	}
	cout << "Сумма цифр в числе=" << j << endl;

	cout << "Среднее арифметическое=" << (float)j / i << endl;

	cout << "Колличество нулей=" << k << endl;

	return 0;
}

