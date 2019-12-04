// Пользователь вводит прибыль фирмы за год(12 месяцев).Затем пользователь вводит диапазон (например, 
// 3 и 6 – поиск между 3 - м и 6 - м месяцем).Необходимо определить месяц, в котором прибыль была 
// максимальна и месяц, в котором прибыль была минимальна с учетом выбранного диапазона
#include <iostream>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "");
	const int size = 12;
	double arr[size];
	for (int i = 0; i < 12; ++i) 
	{
		cout << "Введите прибыль по месяцам ";
		cin >> arr[i];
	}
	int firstMonth, lastMonth, a = 1, d = 1;		// Без '= 1' выдавало ошибку  "Переменная используется
	cout << "Введите первый месяц диапазона ";		// без инициализации." Не смог понять почему(((
	cin >> firstMonth;
	cout << "Введите последний месяц диапазона ";
	cin >> lastMonth;
	int min = arr[firstMonth], max = arr[firstMonth];
	
	for (int i = firstMonth - 1; i < lastMonth; ++i)
	{
		if (min > arr[i])
		{
			min = arr[i]; a = i;
		}
		if (max < arr[i])
		{
			max = arr[i]; d = i;
		}
	}
	cout << "\nВ диапазоне от " << firstMonth << " до " << lastMonth << " месяцев:";
	cout << "\nМинимальная прибыль " << arr[a] << " в " << a + 1 << " месяце.";
	cout << "\nМаксимальная прибыль " << arr[d] << " в " << d + 1 << " месяце."<< endl;
}