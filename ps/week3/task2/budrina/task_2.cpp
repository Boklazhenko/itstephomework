// Подсчитать количество целых чисел в диапазоне от 100 до 999
// у которых все цифры разные

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int res = 0, num1, num2, num3;
	int i = 100;
	int j = 999;
	for (; i < j; i++) {
		num1 = i / 100;			//Первая цифра
		num2 = (i % 100) / 10;	//Вторая цифра
		num3 = i % 10;			//Третья цифра
		if (num1 != num2 && num1 != num3 && num2 != num3) res++;
	}
	cout << "\nКоличество чисел в диапазоне от 100 до 999 у которых все цифры разные = " << res<<"\n\n";
	return 0;
}