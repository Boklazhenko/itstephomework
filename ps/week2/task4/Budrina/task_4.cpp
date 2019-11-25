#include <iostream>
using namespace std;
int main()
{
	int a;
	int end = 20;
	int res = 0;
	cout << "Enter the digit from 0 to 20:";// Условие
	cin >> a;

	for (int i = a; i <= 20; ++i) {
		res = i * a;
		cout << "\n" << res << endl;// Правильный ответ
		if (a >= 21)continue; //если "a"  не будет соответствовать условию,
	}

	cout << endl; // то конец
}