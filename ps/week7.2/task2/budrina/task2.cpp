// Написать игру "Быки и коровы".


#include <iostream>
#include <ctime>

using namespace std;

int mass1[4], mass2[4], inp;

void zadum()
{
	srand(time(0));
	mass1[0] = rand() % 9 + 1; // диапазон от 0 до 9
	for (int i = 1; i <= 3; ++i)
		mass1[i] = rand() % 10;
}
void razb()
{
	int del = 10;
	for (int i = 3; i > -1; --i)
	{
		mass2[i] = inp % 10;
		inp /= 10;
	}

}
int b()
{
	int res = 0;
	for (int i = 0; i < 4; ++i)
		if (mass1[i] == mass2[i])
			res++;
	return res;
}
int c()
{
	int res = 0;
	for (int i = 0; i < 4; ++i)
		for (int j = 0; j < 4; ++j)
			if (mass1[i] == mass2[j] && i != j)
				res++;
	return res;
}
void game()
{
	zadum();
	cout << "Число  Б К\n"
		<< "----------\n";
	for (;;)
	{
		cin >> inp;
		razb();
		cout << "       " << b() << " " << c() << "\n";
		if (b() == 4)
		{
			cout << "Вы выйграли!!!\n";
			break;
		}
	}
}
int main()
{
	setlocale(0, "Russian");
	char M;
	cout << "Здравствуйте, это игра 'Быки и коровы'.\n"
		<< "Компьютер задумал 4-хзначное число. Ваша задача - отгадать его. Посредством ввода 4-х значных чисел.\n"
		<< "Если цифра совпадает, но стоит на другом месте - это корова, если стоит на том же месте - бык.\n\n";
	for (;;)
	{
		game();
		cout << "Ещё раз? (Д/Н)\n"; cin >> M;
		if (M == 'Д' || M == 'Н')
			break;
	}
	
}