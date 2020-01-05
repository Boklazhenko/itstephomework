// Задание 1. (неделя 7.2) 
//Написать рекурсивную функцию нахождения 
//наибольшего общего делителя двух целых чисел.
/*
1.Большее число делим на меньшее.
2.Если делится без остатка, то меньшее число и есть НОД(следует выйти из цикла).
3.Если есть остаток, то большее число заменяем на остаток от деления.
4.Переходим к пункту 1.*/

#include <iostream>
#include<stdlib.h>
using namespace std;

int greatestCommonFactor(int num1, int num2)
{
	if (num2 == 0)
		return num1;
	return greatestCommonFactor(num2, num1 % num2);
}

void main()
{
	int num1, num2;
	cout << "Enter number 1: ";
	cin >>num1;
	cout << "Enter number 2: ";
	cin >> num2;
	cout<<"Greatest common factor: "<<greatestCommonFactor(num1, num2);
}





