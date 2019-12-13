/*не могу понять откуда берется мусор, в отладчике
проверяю массивы, вроде все хорошо
*/

#include <iostream>

using namespace std;

void Levo();
void Pravo();
void Verh();
void Vniz();

int main()
{
	setlocale(LC_ALL, "");

	const int row = 2;
	const int col = 6;
	int arr[row][col]
	{
		{1, 2, 8, 4, 5, 3},
		{4, 5, 3, 9, 2, 1}
	};
	int choice;
	int step;
	cout << "Выберите в какую сторону сдвигать:" << endl << "1 - влево\n" << "2 - вправо\n"
		<< "3 - вверх\n" << "4 - вниз\n" << endl;
	cin >> choice;
	cout << "На сколько шагов сдвинуть?" << endl;
	cin >> step;

	int arr2[row][col]{};

	switch (choice)
	{
	case 1:
		Levo();
		break;

	case 2:
		Pravo();
		break;

	case 3:
		Verh();
		break;

	case 4:
		Vniz();
		break;
	}

	void Levo();
	{
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				if (step + j - row < 0)
				{
					arr2[i][j] = arr[i][j + step];
					cout << arr2[i][j] << "\t";
				}
			}
			cout << "\n" << endl;
		}
	}
	void Pravo();
	{
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				if (row - step + j > col - 1)
				{
					arr2[i][j] = arr[i][j - step];
					cout << arr2[i][j] << "\t";
				}
				else
				{
					arr2[i][j] = arr[i][col - step + j];
					cout << arr2[i][j] << "\t";
				}
			}
		}
		cout << "\n" << endl;
	}

	void Verh();
	{
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				if (step + i - col > 0)
				{
					arr2[i][j] = arr[i + step][j];
				}
				else
				{
					arr2[i][j] = arr[step + i - row][j];
				}
			}
		}
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				cout << arr2[i][j] << "\t";
			}
			cout << "\n" << endl;
		}
	}

	void Vniz();
	{
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				if (row - step + i > col - 1)
				{
					arr2[i][j] = arr[i - step][j];
				}
				else
				{
					arr2[i][j] = arr[row - step + i][j];
				}
			}
		}
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				cout << arr2[i][j] << "\t";
			}
			cout << "\n" << endl;
		}
	}



}

void Levo()
{
}

void Pravo()
{
}

void Verh()
{
}

void Vniz()
{
}
