// Написать функцию, которая принимает две даты (т.е функция принимает шесть параметров)
// и вычисляет разность в днях между этими датами.
// Для решения этой задачи необходимо также написать функцию,
// которая определяет, является ли год високосным.
#include <iostream>
#include <ctime> //использовала эту библиотеку функции для решения задачи (нашла в интернете)
using namespace std;
bool calendar(int year1, int year2) {
	setlocale(0, "russian");
	cout << "\n\t Все високосные и не високосные года из диапазона\n\n";
	int startYear = 0;
	for (int y = year1; y <= year2; ++y) {
		if (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) {
			cout << y << "- високосный год\n";
		}
		else
		{
			cout << y << "- не високосный год\n";
		}
	}
	return startYear;
}
int main()
{
	setlocale(0, "russian");
	const int oneday = 86400; //столько секунд в одних сутках
	int day1, mon1, year1;
	int day2, mon2, year2;
	cout << "Введите первую дату:\n\tВведите число: "; // Проверку на правильность введения чисел не сделала. Если это будет нужно: добавлю
	cin >> day1;
	cout << "\tВведите месяц: ";
	cin >> mon1;
	cout << "\tВведите год: ";
	cin >> year1;
	cout << "Введите вторую дату:\n\tВведите число: ";
	cin >> day2;
	cout << "\tВведите месяц: ";
	cin >> mon2;
	cout << "\tВведите год: ";
	cin >> year2;
	tm FirstDate = { 0, 0, 0, day1, mon1, year1 - 1000, 0, 0, 0 }; //сделала ограничение по году от 1000
	tm SecondDate = { 0, 0, 0, day2, mon2, year2 - 1000, 0, 0, 0 };
	time_t t1 = mktime(&FirstDate); // Оператор &. Это унарный оператор, возвращающий адрес операнда в памяти.
	time_t t2 = mktime(&SecondDate);
	time_t diff = ((t1 > t2) ? t1 - t2 : t2 - t1) / oneday;
	cout << "\nДней между датами: " << diff << endl;
	system("pause");
	calendar(year1, year2);
	return 0;
}
