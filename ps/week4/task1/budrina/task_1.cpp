#include <iostream>
using namespace std;
int main()
{
	enum unname
	{
		A, B, C, D, E, F, G, H, I, J, K
	};
	setlocale(0,"");
	int base = 10; // Размер квадрата.
	int answer;
	do {
		cout << "\nВыберете треугольник: ";
		cout << "\n1 - Треугольная область над главной диагональю ";
		cout << "\n2 - Треугольная область под главной диагональю ";
		cout << "\n3 - Перевернутый треугольник ";
		cout << "\n4 - Треугольник ";
		cout << "\n5 - Два треугольника сверху и снизу ";
		cout << "\n6 - Два треугольника справа и слева ";
		cout << "\n7 - Треугольник слева ";
		cout << "\n8 - Треугольник справа ";
		cout << "\n9 - Треугольная область над побочной диагональю ";
		cout << "\n10 -Треугольная область под побочной диагональю ";
		cout << "\n0 - Выйти из программы \n\n";
		cin >> answer;
		if (answer >= 11)
			cout << "Введите правильный вариант";
		{
			for (int i = 0; i < base; ++i)
			{
				for (int j = 0; j < base; ++j)
				{
					switch (answer)
					{
					case B:
						if (i < j) //область над главной диагонали
							cout << " *";
						else
							cout << "  ";
						break;
					case C:
						if (i >= j) //область под главной диагонали
							cout << "* ";
						else
							cout << "  ";
						break;
					case D:
						if (i + j < base && i < j) //область над главной и над побочной диагоналями
							cout << "* ";
						else
							cout << "  ";
						break;
					case E:
						if (i + j >= base && i >= j)//область под главной и под побочной диагоналями
							cout << " *";
						else
							cout << "  ";
						break;
					case F:
						if (i + j < base && i < j || i + j >= base && i >= j)//область над и под главной и побочной диагоналями
							cout << " *";
						else
							cout << "  ";
						break;
					case G:
						if (i + j <  base && i <= j || i + j >= base && i > j)//область над и под главной и побочной диагоналями наоборот
							cout << "  ";
						else
							cout << " *";
						break;
					case H:
						if (i + j < base - 1 && i >= j)//область  треугольника слева
							cout << " *";
						else
							cout << "  ";
						break;
					case I:
						if (i + j >= base && i <= j) //область  треугольника справа
							cout << " *";
						else
							cout << "  ";
						break;
					case J:
						if (i + j < base)//область  над побочной диагональю
							cout << " *";
						else
							cout << "  ";
						break;
					case K:
						if (i + j >= base)//область  под побочной диагональю
							cout << " *";
						else
							cout << "  ";
						break;
					}
				}
				cout << endl;
			}
		} 
	}
	while (answer != 0);
		cout << "bay";
}