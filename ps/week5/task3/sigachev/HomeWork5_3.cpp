// Создайте двухмерный массив.Заполните его случайными числами и покажите на экран.
// Пользователь выбирает количество сдвигов и положение(влево, вправо, вверх, вниз).
// Выполнить сдвиг массива и показать на экран полученный результат.Сдвиг циклический.
// Например, если мы имеем следующий массив
// 1 2 0 4 5 3
// 4 5 3 9 0 1
// и пользователь выбрал сдвиг на 2 разряда вправо, то мы получим
// 5 3 1 2 0 4
// 0 1 4 5 3 9
#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int arr[size][size];
	int arr1[size][size];
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			arr[i][j] = rand() % (size * size);				// Создание и заполнение массива
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	int choose;
	cout << "Choose direction:\n"
		<< "If move left \tpush 1 "
		<< "\nIf move right \tpush 2 "
		<< "\nIf move up \tpush 3 "
		<< "\nIf move down \tpush 4 \t";
	cin >> choose;
	if (choose <= 0 || 4 < choose)
	{
		cout << "\nIncorrect direction\n";
		return 1;
	}
	int shift;
	cout << "\nHow much to move \t";
	cin >> shift;
	int times = shift / size;						// Количество оборотов если число больше размера массива
	shift %= size;
	cout << endl;
	if (choose == 1 || choose == 3)					// Выбор направления сдвига
	{
		shift *= -1;
	}
	shift;
	if (choose == 1 || choose == 2)
	{
		for (int i = 0; i < size; ++i)				// Сдвиг по горизонтали
		{
			for (int j = 0; j < size; ++j)
			{
				if ((j + shift <= size + 1) || ((1 + shift) <= size))
				{
					arr1[i][j] = arr[i][(j + (size - shift)) % size];
				}
				else
				{
					arr1[i][j] = arr[i][j - shift];
				}
				cout << arr1[i][j] << "\t";
			}
			cout << endl;
		}
	}
	else
	{
		for (int i = 0; i < size; ++i)				// Сдвиг по вертикали
		{
			for (int j = 0; j < size; ++j)
			{
				if ((i + shift <= size + 1) || ((1 + shift) <= size))
				{
					arr1[i][j] = arr[(i + (size - shift)) % size][j];
				}
				else
				{
					arr1[i][j] = arr[i - shift][j];
				}
				cout << arr1[i][j] << "\t";
			}
			cout << endl;
		}
	}
	cout << endl;
	if (times > 0)
		cout << "\nThe array turned around " << times << " times.\n";
}