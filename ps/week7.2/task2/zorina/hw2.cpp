//Написать игру «Быки и коровы».Программа "загадывает" четырёхзначное число и играющий должен угадать его.
//После ввода пользователем числа программа сообщает, сколько цифр числа угадано(быки) и сколько цифр угадано
//и стоит на нужном месте(коровы).После отгадывания
//числа на экран необходимо вывести количество сделанных пользователем попыток.В программе необходимо использовать рекурсию.

#include <iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

void convertNumber(int arr[], int size, int number)
{
	--size;
	if (number != 0)
	{
		arr[size] = number % 10;
		convertNumber(arr, size, number / 10);
	}
}

int countBulls(int secretNumber[], int inputNumber[], int size)
{
	int counter = 0;
	bool secretNumberExist[10] = {};
	int countBulls[10] = {};
	for (int i = 0; i < size; ++i)
	{
		secretNumberExist[secretNumber[i]] = true;
		countBulls[inputNumber[i]] = +1;
	}
	for (int i = 0; i < 10; ++i)
	{
		if (secretNumberExist[i])
			counter += countBulls[i];
	}
	return counter;
}

int countCows(int arr1[], int arr2[], int size)
{
	int counter = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr1[i] == arr2[i])
			++counter;
	}
	return counter;
}


int main()
{
	srand(time(NULL));
	int secretNumber = rand() % 8999 + 1000;
	int inputNumber;
	const int size = 4;
	int guessedNumDigit[size], userNumDigit[size];
	int tryCounter = 0;
	cout << "I am thinking of a fourdigit number, try to guess it!\n";
	cout << "If you guess just a number, you get a bull \n";
	cout << "If guessed number stay on it`s place, you get a cow\n";
	cout << "Let`s get play!\n";
	do
	{
		cout << " Please, enter the number";
		cin >> inputNumber;
		if (inputNumber < 1000 || inputNumber > 9999)
			cout << "Wrong input, try fourdigit number\n";
		else
		{
			convertNumber(guessedNumDigit, size, secretNumber);
			convertNumber(userNumDigit, size, inputNumber);
			cout << "You`ve got " << countBulls(guessedNumDigit, userNumDigit, size) << " bulls\n";
			cout << "You`ve got " << countCows(guessedNumDigit, userNumDigit, size) << " cows\n";
			++tryCounter;
		}
	} 
	while
		(countCows(guessedNumDigit, userNumDigit, size) != 4);
	cout << "Congatulations, you `ve guessed the number!\n";
	cout << "You`ve made " << tryCounter << " attempts";
}