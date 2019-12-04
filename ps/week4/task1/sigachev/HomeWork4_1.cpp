// Вывести на экран фигуры заполненые звездочками. Диалог через меню.

#include <iostream>
using namespace std;

int main()
{
	int figure, size = 11;		// квадрат с нечетным количеством значков на сторону выглядит красивее
	string symbol;				// Хотел завести 'char', но при вводе двух и более символов запускался бесконечный цикл
	cout << "Enter symbol  ";	// чуть чуть пофантазировал))))))
	cin >> symbol;
	bool exit = true;
	while (exit)
	{
		cout << "Enter a figure number from 1 to 10 ";		
		cin >> figure;
		cout << endl;
		while (1 > figure || figure > 10)
		{
			cout << "Wrohg number! Tray agayn \n";
			break;
		}
			for (int i = 0; i < size; ++i)
			{
				for (int j = 0; j < size; ++j)
				{
					switch (figure - 1)
					{
					case 0:
						if (i <= j)
						{
							cout << symbol << " ";
						}
						else
						{
							cout << "  ";
						}
						break;
					case 1:
						if (i >= j)
						{
							cout << symbol << " ";
						}
						else
						{
							cout << "  ";
						}
						break;
					case 2:
						if ((i + j) <= (size - 1) && i <= j)
						{
							cout << symbol << " ";
						}
						else
						{
							cout << "  ";
						}
						break;
					case 3:
						if ((i + j) >= (size - 1) && i >= j)
						{
							cout << symbol << " ";
						}
						else
						{
							cout << "  ";
						}
						break;
					case 4:
						if ((i + j) >= (size - 1) && i >= j || (i + j) <= (size - 1) && i <= j)
						{
							cout << symbol << " ";
						}
						else
						{
							cout << "  ";
						}
						break;
					case 5:
						if (i >= j && (i + j) <= (size - 1) || i <= j && (i + j) >= (size - 1))
						{
							cout << symbol << " ";
						}
						else
						{
							cout << "  ";
						}
						break;
					case 6:
						if (i >= j && (i + j) <= (size - 1))
						{
							cout << symbol << " ";
						}
						else
						{
							cout << "  ";
						}
						break;
					case 7:
						if (i <= j && (i + j) >= (size - 1))
						{
							cout << symbol << " ";
						}
						else
						{
							cout << "  ";
						}
						break;
					case 8:
						if (i + j <= size - 1)
						{
							cout << symbol << " ";
						}
						else
						{
							cout << "  ";
						}
						break;
					case 9:
						if (i + j >= size - 1)
						{
							cout << symbol << " ";
						}
						else
						{
							cout << "  ";
						}
						break;
					}
				}
				cout << endl;				
			}
			cout << "\nEnter 0 to exit \n";   // Это я подсмотрел на сайте http://cppstudio.com 
			cout << "Enter 1 to continue ";   // но не смог разобраться как это работает. Выходит списал!!! 
			cin >> exit;					  // При вводе символа отличного от 1 и 0 запускается бесконечный цикл
	}
}