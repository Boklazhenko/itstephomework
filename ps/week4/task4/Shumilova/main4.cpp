// Задание 4. (неделя 4)
//Пользователь вводит прибыль фирмы за год (12 месяцев). 
//Затем пользователь вводит диапазон (например, 3 и 6 – поиск между 3-м и 6-м месяцем). 
//Необходимо определить месяц, в котором прибыль была максимальна 
//и месяц, в котором прибыль была минимальна с учетом выбранного диапазона

#include <iostream>
using namespace std;
int main()
{
	const int size = 12; //размер равен 12
	int array[size]; // создание массива из 12 элементов

	for (int i = 0; i < size; ++i)//цикл перебирающий элементы массива
	{
		cout << "Enter profit for " << i+1 << " month: "; //введите прибыль за 1 месяц
		cin >> array[i]; //пользователь вводит значения массива
	}
	int first = 0, second = 0; //переменные для первого и второго значения
	cout << "\nEnter first month of search ";//введите первый месяц для поиска
	cin >> first;
	cout << "\nEnter second month of search ";//введите второй месяц для поиска
	cin >> second;

	int min = array[first-1], max = second; 
	for (int i = first-1; i<second; ++i) //цикл перебирающий элементы массива, включая первый до второго
	{
		//cout << array[i]<<endl;
		if (array[i] < min)
			min = array[i]; 
		if (array[i] > max)
			max = array[i]; 
	}
	cout << "Minimum = " << min << endl;
	cout << "Maximum = " << max << endl;

}

