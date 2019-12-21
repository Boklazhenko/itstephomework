#include <iostream>

using namespace std;

bool vys(int year)
{
	bool res = false;
	if ((year % 4) == 0)
	{
		res = true;
	}
	if ((year % 100) == 0)
	{
		res = false;
	}
	if ((year % 400) == 0)
	{
		res = true;
	}
	return res;
}

int date(int days, int month, int year)
{
	int count = days;
	if (vys(year) && (month > 2))
	{
		count += year * 366;
	}
	else
	{
		count += year * 365;
	}

	switch (month - 1)
	{
	case 12:
		count += 31;
	case 11:
		count += 30;
	case 10:
		count += 31;
	case 9:
		count += 30;
	case 8:
		count += 31;
	case 7:
		count += 31;
	case 6:
		count += 30;
	case 5:
		count += 31;
	case 4:
		count += 30;
	case 3:
		count += 31;
	case 2:
		count += 28;
	case 1:
		count += 31;

	}
	return count;
}

int differenceDays(int startDay, int endDay, int startMonth, int endMonth, int startYear, int endYear)
{
	int count = date(endDay, endMonth, endYear) - date(startDay, startMonth, startYear);

	return count;
}

int main()
{
	int day1, day2, month1, month2, year1, year2;
	cout << "Enter first day: " << endl;
	cin >> day2;
	cout << "Enter first month: " << endl;
	cin >> month2;
	cout << "Enter first year: " << endl;
	cin >> year2;
	cout << "Enter second day: " << endl;
	cin >> day1;
	cout << "Enter second month: " << endl;
	cin >> month1;
	cout << "Enter second year: " << endl;
	cin >> year1;

	cout << "Difference between these two dates are " << differenceDays(day1, day2, month1, month2, year1, year2) << " days\n";
}