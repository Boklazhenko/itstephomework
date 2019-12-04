#include <iostream>

using namespace std;

enum Char {A,B,C,D,E,F,G,H,J,K};

int main()
{
	const int N = 20;
	setlocale(0, "");

	cout << "\n\nМеню:" << endl;
	cout << "0 - Треугольник вверху справа\n"
		<< "1 - Треугольник внизу слева\n"
		<< "2 - Треугольник сверху\n"
		<< "3 - Треугольник снизу\n"
		<< "4 - Два треугольника расположенные сверху и снизу\n"
		<< "5 - Два треугольника по бокам\n"
		<< "6 - Треугольник слева\n"
		<< "7 - Треугольник справа\n"
		<< "8 - Треугольник вверху слева\n"
		<< "9 - Треугольник внизу справа\n";
	int rawInput;
	cin >> rawInput;

	Char input = static_cast<Char>(rawInput);
	switch (input)
	{
	case A:
		for (int i = 0; i < N; ++i) //0
		{
			for (int j = 0; j < N; j++)
			{
				if (i == j || i <= j)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		break;

	case B:
		for (int i = 0; i < N; ++i) //1
		{
			for (int j = 0; j < N; j++)
			{
				if (i == j || i >= j)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		break;

	case C:
		for (int i = 0; i < N; ++i) //2
		{
			for (int j = 0; j < N; j++)
			{
				if (i + j >= 19 || i >= j)
				{
					cout << " ";
				}
				else
				{
					cout << "*";
				}
			}
			cout << endl;
		}
		break;

	case D:
		for (int i = 0; i < N; ++i) //3
		{
			for (int j = 0; j < N; j++)
			{
				if (i + j >= 19 && i >= j)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		break;

	case E:
		for (int i = 0; i < N; ++i) //4
		{
			for (int j = 0; j < N; j++)
			{
				if (i + j <= 19 && i <= j)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
				if (i + j >= 19 && i >= j)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		break;

	case F:
		for (int i = 0; i < N; ++i) //5
		{
			for (int j = 0; j < N; j++)
			{
				if (i + j <= 19 && i >= j)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
				if (i + j >= 19 && i <= j)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		break;

	case G:
		for (int i = 0; i < N; ++i) //6
		{
			for (int j = 0; j < N; j++)
			{
				if (i + j <= 19 && i >= j)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		break;

	case H:
		for (int i = 0; i < N; ++i) //7
		{
			for (int j = 0; j < N; j++)
			{
				if (i + j >= 19 && i <= j)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		break;

	case J:
		for (int i = 0; i < N; ++i) //8
		{
			for (int j = 0; j < N; j++)
			{
				if (i + j == N - 1 || i + j <= 19)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		break;

	case K:
		for (int i = 0; i < N; ++i) //9
		{
			for (int j = 0; j < N; j++)
			{
				if (i + j == N - 1 || i + j >= 19)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
		break;

	default:
		cout << "Wrong key!" << endl;
		break;
	}
}