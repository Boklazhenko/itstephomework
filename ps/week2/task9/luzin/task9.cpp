//Пользователь с клавиатуры вводит числа. Посчитать их сумму и вывести на экран, как только пользователь введет ноль.

#include <iostream>
using namespace std;

int main()
{
	int numb1, numb2, numb3;

	cout << "numb 1" << endl;
	cin >> numb1;
	cout << " numb 2" << endl;
	cin >> numb2;
	cout << "good luck" << endl;
	cin >> numb3;
	
	if (numb3==0) {
		cout << numb1+numb2<< endl;
	}
	else {
		cout << "magic don`t work Q_Q" << endl;
	}

}


