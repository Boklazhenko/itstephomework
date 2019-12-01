#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a = 2, b, result;

	cout << "Введите число: ";
	cin >> b;
	
	while (a <= b)
	{
		result = b % a;
		if (result == 0)
		{
			cout << "Делится на = " << a << endl;
		}
		a++;
	}
	

}
