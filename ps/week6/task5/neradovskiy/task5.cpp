#include <iostream>

bool isLeapYear(int year);
int howDayPassed(int startDay, int startMonth, int startYear, int endDay, int endMonth, int endYear);

int main()
{
	std::cout << howDayPassed(12, 02, 2019, 16, 12, 2019);
}
bool isLeapYear(int year) {
	bool answer = false;
	if (year % 4 == 0 || year % 400 == 0)
		answer = true;
	if (year % 100 == 0)
		answer = false;
	return answer;
}
int howDayPassed(int startDay, int startMonth, int startYear, int endDay, int endMonth, int endYear) {

	if (startYear > endYear || startMonth <= 0 || startMonth > 12 || startDay <= 0 ||
		startDay > 31 || endMonth <= 0 || endMonth > 12 || endDay <= 0 || endDay > 31)
	{
		return -222;					//сделал так что бы не путались результаты вычисления и код ошибки
	}
	int monthCounter = startMonth;
	int tempStartMonth = startMonth, tempEndMonth = endMonth;	// создаем переменные чтоб не портить изначальные значения

	if (endMonth < startMonth) {								//вычисляем нужное количество итераций
		tempStartMonth = 12 - startMonth;
		tempEndMonth += tempStartMonth;
	}
	int resultDay = 0;
	for (int i = startYear; i < endYear; ++i)		// считаем годы
	{
		if (endYear - i == 1 && endMonth < startMonth)	//если прошло меньше года но ввели разные года
		{
			continue;
		}
		if (isLeapYear(i))
			resultDay += 366;
		else
			resultDay += 365;


	}
	for (int x = tempStartMonth; x < tempEndMonth; ++x)			// считаем месяцы
	{
		if (monthCounter == 1 || monthCounter == 3 || monthCounter == 5 || monthCounter == 7 || monthCounter == 8
			|| monthCounter == 10 || monthCounter == 12)
			resultDay += 31;
		else if (monthCounter == 2)
		{
			if (isLeapYear(endYear))
				resultDay += 29;
			else
				resultDay += 28;
		}
		else
			resultDay += 30;
		monthCounter++;
		
		}
		if (monthCounter > 12) 
		{
			monthCounter = 1;
		}
	int result = (endDay - startDay) + resultDay;
	return result;
}