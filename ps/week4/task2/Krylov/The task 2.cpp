#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int h, a, w;

	cout << "Введите высоту шахматной доски = ";
	cin >> h;
	cout << "Введите ширину шахматной доски = ";
	cin >> w;
	cout << "Введите величину ячейки шахматной доски = ";
	cin >> a;

	for (int i = 0; i < h; i++)
	{
		for (int x = 0; x < a; ++x)
		{
			for (int y = 0; y < w; ++y)
			{
				for (int z = 0; z < a; ++z)
				{
					((i + y) % 2) ? (cout << '-') : (cout << '*');
				}
			}

		}
	}
}

