/*Пользователь вводит число. Определить количество цифр в этом числе, посчитать их сумму и
среднее арифметическое. Определить количество нулей в этом числе. Общение с пользователем
организовать через меню.*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int num, answer, counter = 0, countOfDigits = 0, countOfZero = 0;
	double average = 0, sum = 0;
	cout << "Введите число\n";
	cin >> num;

	do//меню будет выводиться, пока пользователь не решит, выйти из программы
	{
		cout << "Выбирете интересующий вас пункт меню\n";
		cout << "Нажмите 1, если хотите определить количество цифр в этом числе\n";
		cout << "Нажмите 2, если хотите узнать сумму цифр в этом числе их среднее арифметическое\n";
		cout << "Нажмите 3, если хотите узнать сколько нолей в этом числе\n";
		cout << "Нажмите любую другую кнопку, если хотите выйти из программы \n";
		cin >> answer;

		switch (answer)
		{
			case 1:
			for (int temp = num; temp > 0; counter++)
				temp /= 10;
			cout << "\n В выбранном числе " << counter << " цифр(ы)\n\n";
			break;
		case 2:
			for (int temp = num; temp > 0; countOfDigits++, temp /= 10)
				sum += temp % 10;
			average = sum / countOfDigits;
			cout << "\n Сумма цифр в выбранном числе равняется " << sum << ", их среднее арифметическое равняется " << average << "\n\n";
			break;
		case 3:
			for (int temp = num; temp > 0; temp /= 10)
				if (temp % 10 == 0)
					countOfZero++;
			cout << "В выбранном числе " << countOfZero << " ноля(ей) \n";
				}
	} while (answer == 1 || answer == 2 || answer == 3);
}