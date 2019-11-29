#include <iostream>
using namespace std;
int main()
{
	int k;
	int i = 0;
	int begin = i;
	cout << "Enter the digit from 1 to 10:";// Условие
	cin >> k;

	for (int i = 0; i <= 10; ++i) {
		if (k > 10)continue;
		cout << "\n" << i * k << endl;// Правильный ответ
	}
	cout  << endl;
}


