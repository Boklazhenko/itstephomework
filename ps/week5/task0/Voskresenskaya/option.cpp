

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	const int row = 10;
	const int col = 10;
	char arr[row][col];

	int herox;
	int heroy;
	cout << "Введите координаты положения героя " << endl << "x " << endl << "y=" << endl;
	cin >> herox;
	cin >> heroy;

	int treasure1x;
	int treasure1y;
	cout << "Введите координаты для расположение первого сокровища " << endl << "x " << endl << "y=" << endl;
	cin >> treasure1x;
	cin >> treasure1y;

	int treasure2x;
	int treasure2y;
	cout << "Введите координаты для расположение второго сокровища " << endl << "x " << endl << "y=" << endl;
	cin >> treasure2x;
	cin >> treasure2y;

	int treasure3x;
	int treasure3y;
	cout << "Введите координаты для расположение третьего сокровища " << endl << "x " << endl << "y=" << endl;
	cin >> treasure3x;
	cin >> treasure3y;

	if (treasure1x > 10 || treasure1x < 0 || treasure1y > 10 || treasure1y < 0 ||
		herox > 10 || herox < 0 || heroy > 10 || heroy < 0 ||
		treasure2x > 10 || treasure2x < 0 || treasure2y > 10 || treasure2y < 0 ||
		treasure3x > 10 || treasure3x < 0 || treasure3y > 10 || treasure3y < 0)
		
	{
		cout << "Число должно быть больше 0 и меньше 10" << endl;
	}
	else
	{
		for (int i = 0; i < row; ++i)
		{
			int j;
			for (j = 0; j < col; ++j)
			{
				if (i == herox - 1 && j == heroy - 1)
				{
					arr[i][j] = 'h';
					cout << arr[i][j] << " ";
				}
				else if (i == treasure1x - 1 && j == treasure1y - 1)
				{
					arr[i][j] = '1';
					cout << arr[i][j] << " ";
				}
				else if (i == treasure2x - 1 && j == treasure2y - 1)
				{
					arr[i][j] = '2';
					cout << arr[i][j] << " ";
				}
				else if (i == treasure3x - 1 && j == treasure3y - 1)
				{
					arr[i][j] = '3';
					cout << arr[i][j] << " ";
				}
				else
				{
					arr[i][j] = '.';
					cout << arr[i][j] << " ";
				}
			}
			cout << endl;

		}

		int x1, x2, x3, x4, y1, y2, y3, y4;

		if (herox > treasure1x)
		{
			x1 = herox;
			x2 = treasure1x;
		}
		else
		{
			x1 = treasure1x;
			x2 = herox;
		}
		if (heroy > treasure1y)
		{
			y1 = heroy;
			y2 = treasure1y;
		}
		else
		{
			y1 = treasure1y;
			y2 = heroy;
		}
		int hypot1 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		float  distans1 = sqrt((float)hypot1);
		cout << distans1 << endl;


		if (herox > treasure2x)
		{
			x1 = herox;
			x2 = treasure2x;
		}
		else
		{
			x1 = treasure2x;
			x2 = herox;
		}
		if (heroy > treasure2y)
		{
			y1 = heroy;
			y2 = treasure2y;
		}
		else
		{
			y1 = treasure2y;
			y2 = heroy;
		}
		int hypot2 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		float  distans2 = sqrt((float)hypot2);
		cout << distans2 << endl;

		if (herox > treasure3x)
		{
			x1 = herox;
			x2 = treasure3x;
		}
		else
		{
			x1 = treasure3x;
			x2 = herox;
		}
		if (heroy > treasure3y)
		{
			y1 = heroy;
			y2 = treasure3y;
		}
		else
		{
			y1 = treasure3y;
			y2 = heroy;
		}
		int hypot3 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		float  distans3 = sqrt((float)hypot3);
		cout << distans3 << endl;

		if (distans1 < distans2 && distans1 < distans3)
		{
			cout << "Ближайшеe сокровищe 1" << endl;
			cout << "Путь до ближайшего сокровища" << endl;
			int wayx = herox - treasure1x;
			int wayy = heroy - treasure1y;

			if (wayx < 0)
			{
				for (int i = wayx; i < 0; ++i)
					cout << "up" << " ";
			}
			if (wayx > 0)
			{
				for (int i = 0; i < wayx; ++i)
					cout << "down" << " ";
			}
			if (wayy < 0)
			{
				for (int i = wayy; i < 0; ++i)
					cout << "left" << " ";
			}
			if (wayy > 0)
			{
				for (int i = 0; i < wayy; ++i)
					cout << "right" << " ";
			}
		}
		if (distans2 < distans1 && distans2 < distans3)
		{
			cout << "Ближайшеe сокровищe 2" << endl;
			cout << "Путь до ближайшего сокровища" << endl;
			int wayx = herox - treasure2x;
			int wayy = heroy - treasure2y;

			if (wayx < 0)
			{
				for (int i = wayx; i < 0; ++i)
					cout << "up" << " ";
			}
			if (wayx > 0)
			{
				for (int i = 0; i < wayx; ++i)
					cout << "down" << " ";
			}
			if (wayy < 0)
			{
				for (int i = wayy; i < 0; ++i)
					cout << "left" << " ";
			}
			if (wayy > 0)
			{
				for (int i = 0; i < wayy; ++i)
					cout << "right" << " ";
			}
		}
		if (distans3 < distans1 && distans3 < distans2)
		{
			cout << "Ближайшеe сокровищe 3" << endl;
			cout << "Путь до ближайшего сокровища" << endl;
			int wayx = herox - treasure3x;
			int wayy = heroy - treasure3y;

			if (wayx < 0)
			{
				for (int i = wayx; i < 0; ++i)
					cout << "up" << " ";
			}
			if (wayx > 0)
			{
				for (int i = 0; i < wayx; ++i)
					cout << "down" << " ";
			}
			if (wayy < 0)
			{
				for (int i = wayy; i < 0; ++i)
					cout << "left" << " ";
			}
			if (wayy > 0)
			{
				for (int i = 0; i < wayy; ++i)
					cout << "right" << " ";
			}
		}

	}

	return 0;
}
/*с радиусом не успеваю уже( */


