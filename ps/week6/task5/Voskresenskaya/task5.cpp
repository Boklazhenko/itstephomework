

#include <iostream>
using namespace std;

int countDays(int day1, int month1, int year1, int day2, int month2, int year2)
{
	int days;
	if (year1 < year2)
	{
		int daysInYearLeap = 0;
		int daysInYearNoLeap = 0;
		for (int i = year1 + 1; i < year2; ++i)
		{
			if (i % 4 == 0)
			{
				daysInYearLeap += 366;
			}
			else
			{
				daysInYearNoLeap += 365;
			}
		}
		int daysInYear = daysInYearLeap + daysInYearNoLeap;

		int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		int arrLeap[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

		int daysInMonthFirstYear = 0;
		if (year1 % 4 == 0)
			for (int i = month1; i < 12; ++i)
			{
				daysInMonthFirstYear += arrLeap[i];
			}
		else
			for (int i = month1; i < 12; ++i)
			{
				daysInMonthFirstYear += arr[i];
			}

		int daysInMonthLastYear = 0;
		if (year2 % 4 == 0)
			for (int i = 0; i < month2 - 1; ++i)
			{
				daysInMonthLastYear += arrLeap[i];
			}
		else
			for (int i = 0; i < month2 - 1; ++i)
			{
				daysInMonthLastYear += arr[i];
			}

		int daysFirstMonthFirstYear;
		if (year1 % 4 == 0)
		{
			daysFirstMonthFirstYear = arrLeap[month1 - 1] - day1;
		}
		else
		{
			daysFirstMonthFirstYear = arr[month1 - 1] - day1;
		}

		int dayslastMonthLastYear;
		dayslastMonthLastYear = day2;

		days = daysInYear + daysInMonthFirstYear + daysInMonthLastYear + daysFirstMonthFirstYear + dayslastMonthLastYear;
	}
	else
	{
		cout << "error";
	}
	cout << endl;
	return days;
}

int main()
{
	int day1, day2, month1, month2, year1, year2;
	cout << "Enter dates: day, month, year.";
	cin >> day1;
	cin >> month1;
	cin >> year1;
	cout << "Enter dates: day, month, year.";
	cin >> day2;
	cin >> month2;
	cin >> year2;
	cout << countDays(day1, month1, year1, day2, month2, year2);
	return 0;
}



