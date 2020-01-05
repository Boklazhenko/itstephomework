/* Задание 2. (неделя 7.2)
Написать игру «Быки и коровы». Программа "загадывает" четырёхзначное число
и играющий должен угадать его. После ввода пользователем числа программа сообщает,
сколько цифр числа угадано(быки) и сколько цифр угадано и стоит на нужном месте(коровы).
После отгадывания числа на экран необходимо вывести количество сделанных пользователем попыток.
В программе необходимо использовать рекурсию.
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void guessNumber(int num[], int user[], int size, int counter)
{
	cout << "Enter four-digit number: \n";
	for (int i = 0; i < size; ++i)
		cin >> user[i];
	for (int i = 0; i < size; ++i)
		cout << user[i];
	cout << "\n";
	int bull = 0;
	int cow = 0;
	
	for (int i = 0; i < 4; ++i)
	{
		if (num[i] == user[i])
			++bull;
		for (int j = 0; j < 4; ++j)
		{
			if (num[j] == user[i])
				++cow;
			//если одна цифра загадана два раза,то коровы удваиваются
			//как это исправить?
		}
	}
	cout << "bull: " << bull << endl;
	cout << "cow: " << cow << endl;
	
	if (bull != 4)
			guessNumber(num, user, size, ++counter);
	if (bull == 4)
	{
		cout << "\nWinner!\n\n";
		cout << "Attempts used: "<<counter<<"\n\n";
	}
}
void main()
{
	srand(time(NULL));
	const int size = 4;
	//int num[size] = { 7,8,3,2 };
	int num[size];
	for (int i = 0; i < size; ++i)
		num[i] = rand() % 10;
		
	int user[size];
int counter = 1;
	guessNumber(num, user, size,counter);
}

