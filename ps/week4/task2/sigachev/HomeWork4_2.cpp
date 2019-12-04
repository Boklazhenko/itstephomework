//Написать программу, которая выводит на экран шахматную доску с заданным размером клеточки.

#include<iostream>
using namespace std;

int main()
{
	int sizeBoard, sizeCell;			// Пользователь сам вводит размер доски и клеток
	cout << "Enter board size ";		// Так же можно предложить пользователю самому выбрать значек для клетки
	cin >> sizeBoard;
	cout << "Enter cell size ";
	cin >> sizeCell;

	for (int i = 0; i < sizeBoard * sizeCell; ++i)
	{
		for (int j = 0; j < sizeBoard * sizeCell; ++j)
		{
			if (((j < sizeCell) || (j % (sizeCell * 2) < sizeCell)) &&		// На составление условий для вывода клеток
				((i < sizeCell) || (i % (sizeCell * 2) < sizeCell)) ||		// у меня ушло примерно 7,5 часов вторника.
				((j % (sizeCell * 2) >= sizeCell) && (i % (sizeCell * 2) >= sizeCell)))
			{
				cout << "%%";		// поставил два знака чтобы на выходе была ровная таблица
			}
			else
			{
				cout << "  ";		// Проценты - белые, пробел - черные. Или наоборот, все зависит от фона.
			}
		}
		cout << endl;
	}
	cout << endl;
}