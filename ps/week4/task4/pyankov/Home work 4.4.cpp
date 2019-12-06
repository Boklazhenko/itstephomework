#include <iostream>

using namespace std;

const short months = 12; // Кол-во месяцев
int totalProfit[months];
short score = 1; //  Счетчик, показывает номер месяца во время ввода чисел в массив



int main()
{

	int numberMonthsMin = 0; // Номер месяца с минимальной выручкой
	int numberMonthsMax = 0; // Номер месяца с максимальной выручкой


	for (int i = 0; i < months; ++i) // Ввод чисел в массив
	{
		cout << "Input profit " << score << endl;
		cin >> totalProfit[i];
		++score;
		system("cls");
	}

	int minRange; // Нижняя граница диапазона
	int maxRange; // Верхняя граница диапазона

	cout << "Range start" << endl;
	cin >> minRange;
	cout << "Range finish" << endl;
	cin >> maxRange;

	if (minRange > maxRange) // Инвертация границ диапазона
	{
		int m = minRange;
		minRange = maxRange;
		maxRange = m;
	}


	int max = totalProfit[0];


	for (int i = minRange; i < maxRange; ++i) // Поиск максимального числа в диапазоне
	{
		if (totalProfit[i] > max)
		{
			max = totalProfit[i];
			numberMonthsMax = i;
		}
	}


	int min = totalProfit[minRange];

	for (int i = minRange-1; i < maxRange; i++) // Поиск минимального числа в диапазоне
	{
		if (totalProfit[i] <= min)
			min = totalProfit[i];
			numberMonthsMin = i;
	}


	cout << "Min profit in " << numberMonthsMin - 2 << " month: " << min << " $" << endl;
	cout << "Max profit in " << numberMonthsMax + 1 << " month: " << max << " $" << endl;



	cin.get();
	system("pause");
	return 0;
}

