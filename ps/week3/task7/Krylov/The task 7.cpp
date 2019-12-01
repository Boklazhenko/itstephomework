#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int num1, num2, a = 1, res1, res2;

	cout << "Введите первое число = ";
	cin >> num1;
	cout << "Введите второе число = ";
	cin >> num2;

	while (a <= num1) {
		res1 = num1 % a;
		res2 = num2 % a;

		if (res1 == 0 && res2 == 0)
		{
			cout << "Делятся на = " << a << endl;
		}
		a++;

	}
}

