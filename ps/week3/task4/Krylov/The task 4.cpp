#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	
	int a = 0, b;

	cout << "Введите число = ";
	cin >> a;

	for (b = 1; b <= a; b++) {
		if (a % (b * b) == 0 && a % (b * b * b) != 0);
			
	}

	cout << "Ваше число = " << b;

}

