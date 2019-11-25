

#include <iostream>

using namespace std;
int main()
{
	int  y, x, res;
	int counter = 1;
	cout << "Enter the digit: ";//Введите цифру
	cin >> x;
	cout << "Enter the power: ";//Введите степень
	cin >> y;
	res = x;
	if (y != 0) {         //Если степень не равна 0,то

		do //Выполняем действия
		{
			res *= x;  //Формула вычисления степени
			cout << res << endl; //Результат
			++counter;   
		} while (counter <= y - 1); //Пока счетчик не превысит степень-1

	}
	else { //Если стенень = 0
		cout << "\nWrong!!!\n"; //Решения нет
	}
}