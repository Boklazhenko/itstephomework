#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int a, b, result = 0;

	cout << "Введите число = ";
	cin >> a;

	for (b = a; b > 0; b /= 10) {
		result += b % 10;
	}

	if (result * result * result == a * a)
		cout << "Ок";

	else
		cout << "Not ok";
}
