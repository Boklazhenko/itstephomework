/*Создайте двухмерный массив. Заполните его случайными числами и покажите на экран.
Пользователь выбирает количество сдвигов и положение (влево, вправо, вверх, вниз).
Выполнить сдвиг массива и показать на экран полученный результат. Сдвиг циклический.*/

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
	bool exit = false;
	srand(time(NULL));
	const int line = 5, column = 5;
	int ar[line][column];
	for (int x = 0; x < line; ++x)
	{
		for (int y = 0; y < column; ++y) {
			ar[x][y] = rand() % 10;
			cout << ar[x][y] << " ";
		}
		cout << endl;
	}
	int side, shift;
	cout << "Where do you want to pull the array?\n";
	cout << " Input 1, if you want to pull the array to the right\n";
	cout << " Input 2, if you want to pull the array to the left\n";
	cout << " Input 3, if you want to pull the array to the down\n";
	cout << " Input 4, if you want to pull the array to the up\n";
	cout << " Input 0, if you want to finish the program\n\n";
	while (true) {
		cin >> side;
		if (side < 0 || side>4)
			cout << "\nWrong input, try again\n";
		else break;
	}
	if (side == 0)
	{
		exit = true;
	}
	else {
		cout << "How many shifts do you want?\n\n";
		while (true) {
			cin >> shift;
			if (shift < 0)
				cout << "\nWrong input, try again\n";
			else break;
		}
		switch (side) {
		case 1:
			for (int i = 0; i < shift; ++i)  //сдвиг на 1 будет повторяться столько раз, сколько ввел пользователь
			{
				for (int x = 0; x < line; ++x)
				{
					int temp = ar[x][column - 1]; //запоминаем последние элементы строк
					for (int y = column - 2; y >= 0; --y) { // цикл начинается со 2го эл-та с конца и идет в обратную сторону до нуля
						ar[x][y + 1] = ar[x][y]; //перезаписываем элементы цикла
					}
					ar[x][0] = temp; //присваеваем нулевому элементу значение последнего
				}
			}
			break;
		case 2:
			//двигаем влево
			for (int i = 0; i < shift; ++i)  //логика здесь и далее та же, только движение в разных направлениях
			{
				for (int x = 0; x < line; ++x)
				{
					int temp = ar[x][0];
					for (int y = 1; y < column; ++y)
					{
						ar[x][y - 1] = ar[x][y];
					}
					ar[x][column - 1] = temp;
				}
			}
			break;
		case 3:
			//двигаем вниз
			for (int i = 0; i < shift; ++i)
			{
				for (int y = 0; y < column; ++y)
				{
					int temp = ar[line - 1][y];
					for (int x = line - 2; x >= 0; --x) {
						ar[x + 1][y] = ar[x][y];
					}
					ar[0][y] = temp;
				}
			}
			break;
		case 4:
			//двигаем вверх
			for (int i = 0; i < shift; ++i)
			{
				for (int y = 0; y < column; ++y)
				{
					int temp = ar[0][y];
					for (int x = 1; x < line; ++x)
					{
						ar[x - 1][y] = ar[x][y];
					}
					ar[line - 1][y] = temp;
				}
			}
		}
		for (int x = 0; x < line; ++x)
		{
			for (int y = 0; y < column; ++y)
				cout << ar[x][y] << " ";
			cout << endl;
		}
	}
}