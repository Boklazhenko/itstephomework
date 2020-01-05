/* Задание 3 (неделя 7)
Выходит ли стипендия (стипендия выходит, если средний бал не ниже 10.7)
• Пересдача экзамена(пользователь вводит номер элемента массива и новую оценку)
• Вывод оценок(вывод содержимого массива)
• Написать программу «успеваемость».
Пользователь вводит 10 оценок студента.
Реализовать меню для пользователя
*/

#include <iostream>
using namespace std;
void printTable(int counter, int size); //нарисовать таблицу
void compareAverage(int array[], int size, float averageScore); //вычисление среднего бала
void main()
{
	const int size = 10;
	const float averageScore = 10.7; //средний бал
	int array[size];
	int grade;
	for (int i = 0; i < size; ++i)
	{
		cout << "Enter " << i + 1 << " grade: ";
		cin >> grade;
		array[i] = grade;
	}
	cout << "\n";
	printTable(1, size);
	for (int i = 0; i < size; ++i)
		cout << array[i] << "\t";
	cout << "\n";
	compareAverage(array, size, averageScore);
	cout << "\n\n";
	cout << "Enter cell number: ";
	int cell;
	cin >> cell;
	cout << "Enter new score: ";
	int newScore;
	cin >> newScore;
	array[cell - 1] = newScore;
	cout << "\n";
	printTable(1, size);
	for (int i = 0; i < size; ++i)
		cout << array[i] << "\t";
	cout << "\n";
	compareAverage(array, size, averageScore);
	cout << "\n";
}
void compareAverage(int array[], int size, float averageScore)
{
	int amount = 0;
	for (int i = 0; i < size; ++i)
		amount += array[i];
	float result = (float)amount / size;
	if (result > averageScore)
		cout << "\nYou will receive a scholarship!"; //вы получите стипендию
	else cout << "\nYou will not receive a scholarship!"; //вы не получите стипендию
}
void printTable(int counter, int size)
{
	counter = 1;
	while (counter < size + 1)
	{
		cout << counter << "\t";
		++counter;
	}
	cout << "\n";
	counter = 0;
	while (counter < size)
	{
		cout << "------\t";
		++counter;
	}
	cout << "\n";
}
