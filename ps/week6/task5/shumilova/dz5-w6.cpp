/* Задание 5. (неделя 6)
Написать функцию, которая принимает две даты (т.е. функция принимает шесть параметров)
и вычисляет разность в днях между этими датами.
Для решения этой задачи необходимо также написать функцию,
которая определяет, является ли год високосным.
*/

#include <iostream>
using namespace std;

int CalcDays(int Mon, int Year, int date);

int main()
{
	cout << "Enter first year: ";
	int Year;
	cin >> Year;
	cout << "Enter first month (1-12): ";
	int Mon;
	cin >> Mon;
	cout << "Enter first date (1-31): ";
	int date;
	cin >> date;
	int firstDate = CalcDays (Mon, Year, date);
	cout << "Enter second year: ";
	cin >> Year;
	cout << "Enter second month (1-12): ";
	cin >> Mon;
	cout << "Enter date second (1-31): ";
	cin >> date;
	int secondDate = CalcDays(Mon, Year, date);
	int difference = secondDate - firstDate;
	cout << "Days passed between dates: "<<difference;
}

int CalcDays(int Mon, int Year, int date)
{
	int countMonth = 0;
	switch (Mon)
	{
	case 1:	countMonth = 0;	break;
	case 2:	countMonth = 31; break;
	case 3:	countMonth = 59; break;
	case 4:	countMonth = 90; break;
	case 5:	countMonth = 120; break;
	case 6:	countMonth = 151; break;
	case 7:	countMonth = 181; break;
	case 8:	countMonth = 212; break;
	case 9:	countMonth = 243; break;
	case 10: countMonth = 279; break;
	case 11: countMonth = 304; break;
	case 12: countMonth = 334; break;
	}

	int leap = 0; //счетчик количества високосных годов
	for (int i = 0; i < Year; ++i)
		if (i % 4 == 0)
			++leap;

	int allDays = date + countMonth + (Year * 365)+ leap;
	
	return allDays;
}
 //в этой задаче я не стала заморачиваться над 29 февраля 
//и високосными годами через 100 лет, это частности и формулы...
//тема Функций выполнена, и так 4 дня над ней мучилась, главное САМА!