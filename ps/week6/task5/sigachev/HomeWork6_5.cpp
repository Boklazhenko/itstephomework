// Написать функцию, которая принимает две даты (т.е.функция принимает шесть параметров) и
// вычисляет разность в днях между этими датами. Для решения этой задачи необходимо также
// написать функцию, которая определяет, является ли год високосным.
#include <iostream>
using namespace std;
//------------------------------------------------------------------------------//
//   При написании задачи пользовался форумом на http://www.cyberforum.ru/      //
//   Но код не копипастил! (западло копировать)                                 //
//------------------------------------------------------------------------------//
double leapYear(int year) {
    double count = 0;
    for (int i = 0; i < year; ++i) {        
        if (
            (((i % 4) == 0) && ((i % 100) == 0) && ((i % 400) == 0)) ||
            (((i % 4) == 0) && ((i % 100) != 0) && ((i % 400) != 0))
            ) 
        {
            count += 366;
        }
        else {
            count += 365;
        }        
    }
    return count;
}
int date(int year, int month, int day) {
    switch (month)
    {
    case 1: month = 0; break;
    case 2: month = 31; break;
    case 3: month = 59; break;
    case 4: month = 90; break;
    case 5: month = 120; break;
    case 6: month = 151; break;
    case 7: month = 181; break;
    case 8: month = 212; break;
    case 9: month = 253; break;
    case 10: month = 283; break;
    case 11: month = 314; break;
    case 12: month = 344; break;
    default: break;
    }
    int anyDate = (day + month + (leapYear(year)));
        return anyDate;
}
int dateDifference(int beginYear, int beginMonth, int beginDay, int finishYear, int finishMonth, int finishDay) {
    int dayCount = ((date(finishYear, finishMonth, finishDay)) - (date(beginYear, beginMonth, beginDay)));
    return dayCount;
}
int main()
{
    int beginYear, beginMonth, beginDay;            // Проверку введеных данных сделал самую простую
    cout << "Enter begin date:\n" << "Year ";       // только введеные месяца от 0 до 12
    cin >> beginYear;                               // от введенные дни от 0 до 31
    cout << "Month ";                               // Надежда на адекватность пользователя умирает последней!
    cin >> beginMonth;
    if (0 > beginMonth || beginMonth > 12) {
        cout << "You entered the wrong month. Try again." << endl;
        return 1;
    }
    cout << "Day ";
    cin >> beginDay;
    if (0 > beginDay || beginDay > 31) {
        cout << "You entered the wrong day. Try again." << endl;
        return 1;
    }
    int finishYear, finishMonth, finishDay;
    cout << "\nEnter finish date:\n" << "Year ";
    cin >> finishYear;
    if (finishYear < beginYear) {
        cout << "You entered a year earlier than the begin date. Try again." << endl;
        return 1;
    }
    cout << "Month ";
    cin >> finishMonth;
    if (0 > finishMonth || finishMonth > 12) {
        cout << "You entered the wrong month. Try again." << endl;
        return 1;
    }
    cout << "Day ";
    cin >> finishDay;
    if (0 > finishDay || finishDay > 31) {
        cout << "You entered the wrong day. Try again." << endl;
        return 1;
    }
    cout << "\n" << dateDifference(beginYear, beginMonth, beginDay, finishYear, finishMonth, finishDay) << endl;
}
