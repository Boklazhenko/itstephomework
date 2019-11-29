

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int answer, a, b;
	do { // вход в цикл
	// запрос на выбор операции
		cout << "\n Выберете операцию для просмотра:\n";
		cout << "\n 1 - все числа диапазона.\n";
		cout << "\n 2 - все четные числа диапазона.\n";
		cout << "\n 3 - все нечетные числа диапазона.\n";
		cout << "\n 4 - все числа кратные семи.\n";
		cout << "\n 5 - Для выхода из программы.\n";
		cin >> answer;
		// анализ действия
		switch (answer) {
		case 1: // если пользователь выбрал числа диапазона
			cout << "Enter frst digit:";
			cin >> a;
			cout << "Enter second digit:";
			cin >> b;
			for (int i = a; i <= b; i++)
			{
				cout << "\n" << i << "\n";
			}
			cout << endl;

			break; // остановка switch

		case 2: // если пользователь выбрал все четные числа диапазона
			cout << "Enter frst digit:";
			cin >> a;
			cout << "Enter second digit:";
			cin >> b;
			for (int i = a; i <= b; i++)
			{
				if (i % 2 != 0) // если число делится на два
				// без остатка
				{
					continue; // остановить итерацию цикла
					// и перейти к i++
				}
				cout << "\n" << i << "\n";
			}
			cout << endl;

			break; // остановка switch

		case 3: // если пользователь выбрал все не четные числа диапазона
			cout << "Enter frst digit:";
			cin >> a;
			cout << "Enter second digit:";
			cin >> b;
			for (int i = a; i <= b; i++)
			{
				if (i % 2 == 0) // если число делится на два
				// без остатка
				{
					continue; // остановить итерацию цикла
					// и перейти к i++
				}
				cout << "\n" << i << "\n";
			}
			cout << endl;

			break; // остановка switch

		case 4: // если пользователь выбрал все числа кратные 7
			cout << "Enter frst digit:";
			cin >> a;
			cout << "Enter second digit:";
			cin >> b;
			for (int i = a; i <= b; i++)
			{
				if (i % 7 != 0) // если число делится на 7
				// без остатка
				{
					continue; // остановить итерацию цикла
					// и перейти к i++
				}
				cout << "\n" << i << "\n";
			}
			cout << endl;

			break; // остановка switch

		case 5: // если пользователь выбрал выход
			cout << "\nEXIT!!!\n";
			break;
		default: // если выбранное действие
		// некорректно
			cout << "\nError!!! This operator isn’t correct\n";
		}
	} while (answer != 5);
	cout << "\nBye....\n";
}