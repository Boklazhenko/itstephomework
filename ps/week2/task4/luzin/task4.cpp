//Найти произведение всех целых чисел от a до 20 (значение a вводится с клавиатуры: 1 <=a <= 20).
#include <iostream>
using namespace std;
int main()
{
	int a, res = 1;
	cin >> a;
	for (int i = a; i <= 20; i++)
		res *= i;
	cout << res  << endl;

}

