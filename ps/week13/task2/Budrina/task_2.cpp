
#include <iostream>
#include <algorithm>
#include <windows.h>

#define MAX(a, b) (((a)>(b)) ? (a) : (b))
#define MIN(a, b) (((a)<(b)) ? (a) : (b))
#define TEXT_MAX "The largest number: "
#define TEXT_MIN "The smallest number: "
#define EVEN_OR_ODD(a) (((a)%2)==0 ? 1 : 0)
#define TEXT_EVEN " - Even number"
#define TEXT_ODD " - Odd number"
#define POW(a, b) pow(a,b)
#define SQUARED_NUMBER(a) ((a)*(a))

using namespace std;

int readNumber() {
	int x;
	cout << "Enter a number: ";
	cin >> x;
	return x;
}
int readPow() {
	int x;
	cout << "Enter a power: ";
	cin >> x;
	return x;
}
void writeAnswerMaxOrMin() {
	int x = readNumber();
	int y = readNumber();
	cout << TEXT_MAX << MAX(x, y) << endl;
	cout << TEXT_MIN << MIN(x, y) << endl;
}
void writeAnswerSquaredNumber() {
	int x = readNumber();
	cout << x << '*' << x << '=' << SQUARED_NUMBER(x) << endl;
}
void writeAnswerPow() {
	int x = readNumber();
	int y = readPow();
	cout << x << '^' << y << '=' << POW(x, y) << endl;
}
void writeAnswerEvenOrOdd() {
	int x = readNumber();
	if (EVEN_OR_ODD(x))
		cout << x << TEXT_EVEN << endl;
	else
		cout << x << TEXT_ODD << endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int key;
	do
	{
		cout << "\n\t\tВыберите следующие действия:\n";
		cout << "\t1 - Нахождение большего и меньшего из двух чисел.\n";
		cout << "\t2 - Возведение числа в квадрат.\n";
		cout << "\t3 - Возведение числа в степень.\n";
		cout << "\t4 - Проверка числа на чётность и не нечетность.\n";
		cout << "\t0 - Выйти из программы.\n";
		cin >> key;
		if (key > 4)
			cout << "Введите правильный вариант действия\n";
		{
			switch (key) {
			case 1:
				writeAnswerMaxOrMin();
				break;
			case 2:
				writeAnswerSquaredNumber();
				break;
			case 3:
				writeAnswerPow();
				break;
			case 4:
				writeAnswerEvenOrOdd();
				break;
			}
		}

	} while (key != 0);
	cout << "End\n";
	return 0;
}




