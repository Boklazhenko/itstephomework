#include <iostream>

using namespace std;

int date, firstDate, secondDate, firstMonth, secondMonth, firstYear,
	secondYear;

bool checkLeapYear(int year);
int checkDate(int day, int month, int year);
int calcDifference(int firstDate, int secondDate, int firstMonth, int secondMonth,
	int firstYear, int secondYear);

int main()
{
	setlocale(LC_ALL, "");
	cout << "Введите день отсчета: " << endl;
	cin >> secondDate;
	cout << "Введиет месяц отсчета: " << endl;
	cin >> secondMonth;
	cout << "Введите год отсчета: " << endl;
	cin >> secondYear;
	cout << "Введите день окончания отсчета: " << endl;
	cin >> firstDate;
	cout << "Введите месяц окончания отсчета: " << endl;
	cin >> firstMonth;
	cout << "Введите год окончания отсчета: " << endl;
	cin >> firstYear;
	cout << "Прошло " << calcDifference(firstDate, firstMonth, firstYear, secondDate, secondMonth, secondYear) << " дней" << endl;
}

bool checkLeapYear(int year)
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

int checkDate(int day, int month, int year)
{
	int date = day;
	if (checkLeapYear(year) && (month > 2))
		date += year * 365;
	else date += year * 365;
	switch (month - 1)
	{
	case 1: date += 31;
	case 2: date += 28;
	case 3: date += 31;
	case 4: date += 30;
	case 5: date += 31;
	case 6: date += 30;
	case 7: date += 31;
	case 8: date += 31;
	case 9: date += 30;
	case 10: date += 31;
	case 11: date += 30;
	case 12: date += 31;
	}
	return date;
}

int calcDifference(int firstDate, int secondDate, int firstMonth, int secondMonth, int firstYear, int secondYear)
{
	int res;
	res = (secondDate, secondMonth, secondYear) - (firstDate, firstMonth, firstYear);
	return res;
}
