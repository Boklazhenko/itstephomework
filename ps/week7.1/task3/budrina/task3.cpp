// Написать программу "успеваемость". Пользователь вводит 10 оценок студента.
// Реализовать меню для пользоавателя. - вывод оценок (вывод содержимого массива)
// - Пересдача экзамена (пользователь водит номер элемента массива и новую оценку)
// - Выходит ли стипендия (выходит, если средний балл не ниже 10.7)
#include <iostream> 
using namespace std;
int main()
{
	setlocale(0, "");
	int key;
	const int size = 10;
	int arr[size];
	cout << "Проставьте 10 оценок от 8-12 баллов\n";
	for (int i = 0; i < size; ++i)
	{
		cout << i + 1 << " оценка: ";
		cin >> arr[i];
	}
	do {
		cout << "\n\n Вывести все баллы: нажмите 1\n";
		cout << " Пересдача экзамена: нажмите 2\n";
		cout << " Выходит ли степендия: нажмите 3\n";
		cout << " Выход из программы : нажмите 0\n";
		cin >> key;
		switch (key)
		{
		case 1:
			for (int i = 0; i < size; ++i)
				cout << arr[i] << "  ";
			break;
		case 2:
			int repl;
			cout << "Введите номер оценки для пересдачи:";
			cin >> repl;
			cout << "Старый бал " << arr[repl - 1] << endl;
			cout << "Введите новый бал:";
			cin >> arr[repl - 1];
			break;
		case 3:
			double average_mark;
			double sum = 0;
			for (int i = 0; i < size; ++i) {
				sum += arr[i];
			}
			average_mark = sum / size;

			cout << "Средний бал успеваемости = " << average_mark << endl;

			if (average_mark == 10.7 || average_mark > 10.7) {

				cout << "Стипендия положена \n";
			}
			else {
				cout << "Стипендия не положена \n";
			}
			break;
		}
	} 
	while (key != 0);
	return 0;
}