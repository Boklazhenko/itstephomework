// Задание 5. (неделя 7.2) 
//Написать рекурсивную функцию, которая выводит N звезд в ряд, число N задает пользователь. 
//Проиллюстрируйте работу функции примером.

#include <iostream>
#include<stdlib.h>
using namespace std;

void printStars(int number)
{
	if (number < 1)
		return;
	cout << '*';
	printStars(number - 1);
}
void main()
{
	int number;
	cout << "Enter the number of stars: ";
	cin >> number;
	printStars(number);
}
