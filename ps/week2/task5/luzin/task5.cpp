//Написать программу, которая выводит на экран таблицу умножения на k, где k – номер варианта. Например, для 7-го варианта: 7 x 2 = 14 7 x 3 = 21
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int res;
	cout << "Номер варианта ";
	cin >> res;
	for (int i = 1; i < 10; i++)
	{
		cout << res;
		cout << " * ";
		cout << i;
		cout << " = ";
		cout << res * i << endl;
	}

}

