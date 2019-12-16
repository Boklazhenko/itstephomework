/* Задание 3 (неделя 5)
Создайте двухмерный массив. Заполните его случайными числами и покажите на экран.
Пользователь выбирает количество сдвигов и положение (влево, вправо, вверх, вниз).
Выполнить сдвиг массива и показать на экран полученный результат. Сдвиг циклический.
Например, если мы имеем следующий массив
1 2 0 4 5 3
4 5 3 9 0 1
и пользователь выбрал сдвиг на 2 разряда вправо, то мы получим
5 3 1 2 0 4
0 1 4 5 3 9
*/

#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	
	srand(2);
	
	const int size = 10;
	int massive[size][size]; //создание массива
	
	for (int x = 0; x < size; ++x) 
	{
		for (int y = 0; y < size; ++y)
		{
			massive[x][y] = rand()%100; //заполнение массива
			cout << massive[x][y] << "\t"; //вывод массива
		}
		cout << "\n" << endl;
	}
	cout << "\n" << endl;

	
	cout << "Choose direction: \n1-left, 2-right, 3-up, 4-down\n\n";//выберите направление:
	char direc;
	cin >> direc;
	
	cout << "\nHow much to shift? ";//на сколько сдвинуть?
	int shift;
	cin >> shift;
	if (shift > size) //если сдвиг больше размера,
	{
		shift %= size; //то сдвиг = остаток от размера
	}

	cout << "\n" << endl;

	int massive2[size][size]; //создание второго массива
	
	switch (direc)
	{
	case '1': //сдвиг влево

		for (int x = 0; x < size; ++x)
		{
			for (int y = 0; y < size; ++y)
			{

				if (shift + y - size < 0) //заполнение второго массива
				{
					massive2 [x][y] = massive[x][y + shift];
					cout << massive2[x][y] << "\t"; //вывод второго массива
				}
				else
				{
					massive2[x][y] = massive[x][shift + y - size];
					cout << massive2[x][y] << "\t";
				}
			}
			cout << "\n" << endl;
		}
		break;

	case '2': //сдвиг вправо

		for (int x = 0; x < size; ++x)
		{
			for (int y = 0; y < size; ++y)
			{

				if (size - shift + y > size - 1) 
				{
					massive2[x][y] = massive[x][y - shift];
					cout << massive2[x][y] << "\t"; 
				}
				else
				{
					massive2[x][y] = massive[x][size - shift + y];
					cout << massive2[x][y] << "\t";
				}
			}
			cout << "\n" << endl;
		}
		break;

	case '3': //сдвиг вверх

		for (int y = 0; y < size; ++y)
		{
			for (int x = 0; x < size; ++x)
			{

				if (shift + x - size < 0)
				{
					massive2 [x][y] = massive[x + shift][y];
				}
				else
				{
					massive2[x][y] = massive[shift + x - size][y];
				}
			}
		}

		for (int x = 0; x < size; ++x)
		{
			for (int y = 0; y < size; ++y)
			{
				cout << massive2[x][y] << "\t"; 
			}
			cout << "\n" << endl;
		}
		cout << "\n" << endl;
		break;

	case '4': //сдвиг вниз

		for (int y = 0; y < size; ++y)
		{
			for (int x = 0; x < size; ++x)
			{

				if (size - shift + x > size - 1)
				{
					massive2[x][y] = massive[x - shift][y]; 
				}
				else
				{
					massive2[x][y] = massive[size - shift + x][y];
				}
			}
		}

		for (int x = 0; x < size; ++x)
		{
			for (int y = 0; y < size; ++y)
			{
				cout << massive2[x][y] << "\t";
			}
			cout << "\n" << endl;
		}
		cout << "\n" << endl;
		break;

	default:
		cout << "Unknown command!\n";
	}
	
	

	
	
}

