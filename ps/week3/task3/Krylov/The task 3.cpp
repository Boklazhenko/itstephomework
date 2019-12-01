#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int a = 0, b = 0;

	cout << "Введите число = ";
	cin >> a;

	while (a > 0) {
		if (a % 10 != 3 && a % 10 != 6) {
			b *= 10;
			b += a % 10;
		}
		a /= 10;
	}

	cout << "Ваше число = ";

	while (b > 0) {
		cout << b % 10;
		b /= 10;
	}


}
