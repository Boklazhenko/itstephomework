//Подсчитать количество целых чисел в диапазоне от 100 до 999
//у которых есть две одинаковые цифры.

#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int result = 0, num1, num2, num3;
	int i = 100, j = 999;
	for (; i < j; i++) // Сделала до значения 999
	{
		num1 = j / 100;         //первая цифра
		num2 = (j % 100) / 10;  // вторая цифра
		num3 = j % 10;          //третья цифра
		if (num1 == num2 || num2 == num3 || num3 == num1)
			result++;
	}
	cout << "Количество целых чисел в диапазоне от 100 до 999 у которых две одинаковые цифры = " << result << endl;

	return 0;
}