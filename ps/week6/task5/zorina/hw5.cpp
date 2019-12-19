//Написать функцию, которая принимает две даты(т.е.функция принимает шесть параметров) и вычисляет разность в днях между этими датами.
//Для решения этой задачи необходимо также написать функцию, которая определяет, является ли год високосным.

#include <iostream>
using namespace std;
bool findLeapYear(int year)  //функция которая проверяет, является ли год високосным
{
	bool res = false;
	if (year % 4 == 0)
		res = true;
	if (year % 100 == 0)
		res = false;
	if (year % 400 == 0)
		res = true;
	return res;
}

int date(int day, int mounth, int year) //функция, которая переводит введенную дату в дни
{
	int daysAmount = day;
	if (findLeapYear(year))
		daysAmount += (year - 1) * 366;
	else daysAmount += (year - 1) * 365;
	switch (mounth - 1)
	{
	case 11: daysAmount += 30;
	case 10: daysAmount += 31;
	case  9: daysAmount += 30;
	case  8: daysAmount += 31;
	case  7: daysAmount += 31;
	case  6: daysAmount += 30;
	case  5: daysAmount += 31;
	case  4: daysAmount += 30;
	case  3: daysAmount += 31;
	case  2: daysAmount += 28;
	case  1: daysAmount += 31;
	case 0: daysAmount += 0;
	}
	return daysAmount;
}

int findDifference(int firstDay, int secondDay, int firstMounth, int secodMounth, int firstYear, int secondYear)
{
	int dif = date(secondDay, secodMounth, secondYear) - date(firstDay, firstMounth, firstYear);
	int counter = 0;
	for (int i = firstYear; i < secondYear; i++)//за каждый високосный год будет добавляться 1 день
	{
		if (findLeapYear(i))
			++counter;
	}
	dif += counter;
	return dif;
}
int main()
{//проверка работы функции
	/*int firstDay, secondDay, firstMounth, secodMounth, firstYear, secondYear;
	cout << "Input first day: ";
	cin >> firstDay;
	cout << "Input first month: ";
	cin >> firstMounth;
	cout << "Input first year: ";
	cin >> firstYear;
	cout << "Input last day: ";
	cin >> secondDay;
	cout << "Input last month: ";
	cin >> secodMounth;
	cout << "Input last year: ";
	cin >> secondYear;
	cout << "There are " << findDifference(firstDay, secondDay, firstMounth, secodMounth, firstYear, secondYear) << " days between your dates\n";*/
}