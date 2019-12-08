
#include <iostream>
using namespace std;
int main()

{
	setlocale(0, "");
	int cellSize;
	int numberCell = 4;
	do {
		cout << "\nВведите 0 для выхода из программы\n";
		cout << "Введите размер клетки: ";
		cin >> cellSize;
		if (cellSize < 0)
			cout << "\n Ошибка! Число должно быть больше 0 \n";

		for (int i = 1; i <= numberCell; ++i)
		{
			for (int j = 0; j < cellSize; ++j)
			{
				for (int j = 0; j < numberCell; ++j)
				{
					for (int k = 0; k < cellSize; ++k)
					{
						if ((i + j) % 2 == 1)
						{
							cout << "* ";
						}
						else cout << "| ";
					}
				}
				cout << endl;
			}
		}
	} 
	while (cellSize != 0);

}