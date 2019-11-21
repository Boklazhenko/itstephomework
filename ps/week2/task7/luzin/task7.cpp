// Пользователь вводит две границы диапазона, вывести на экран все числа из этого диапазона. Предусмотреть, чтобы пользователь мог вводить границы диапазона в произвольном порядке. 
// вывести все четные числа из диапазона. вывести все нечетные числа из диапазона. вывести все числа, кратные семи.


#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "начало диапозона" << endl;
	cin >> x;
	cout << "конец диапозона" << endl;
	cin >> y;
	if (x < y) 
	{
		
	}
	else 
	{ cout << "введите значение с наменьшего до наибольшего "; }
	cout << "решение" << endl;
	for (int i = x; i <= y; i++)
		cout << i << endl;

	cout << "чётные" << endl;
	for (int i = x ; i <=y ; i++)
		if (i % 2 == 0)
			cout << i << endl;

	cout << "не чётные" << endl;
	for (int i = x; i <= y; i++)
		if (i % 2 != 0)
			cout << i << endl;
	cout << "кратные 7" << endl;
	for (int i = x; i <= y; i++)
		if (i % 7 == 0)
			cout << i << endl;
} 


