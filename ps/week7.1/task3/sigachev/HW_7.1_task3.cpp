// Написать программу «успеваемость». Пользователь вводит 10 оценок студента. Реализовать меню для пользователя
// Вывод оценок(вывод содержимого массива)
// Пересдача экзамена(пользователь вводит номер элемента массива и новую оценку)
// Выходит ли стипендия(стипендия выходит, если средний бал не ниже 10.7)
#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    double arr[size], assessment;
    int menu;
    for (int i = 0; i < size; ++i)
    {
        cout << "Enter " << i + 1 << " assessment: ";
        cin >> assessment;
        arr[i] = assessment;
        //arr[i] = rand() % 33;
        //cout << arr[i] << "  ";
    }
    cout << endl;
	while (true) {
		progress:
		cout << "\n\nShow assessment - press 1" << endl;
		cout << "Replace assessment - press 2" << endl;
		cout << "Will receive a scholarship - press 3" << endl;
		cout << "Exit - press 4" << endl;
		cin >> menu;
		if (0 > menu || menu > 5) {
			cout << "Error number menu. Try again";
			goto progress;
		}
		switch (menu) {
		case 1:
			for (int i = 0; i < size; ++i) {
				cout << arr[i] << "\t";
			}
			break;
		case 2:
			int change;
			double newAssessment;
			cout << "What assessment to change: " << endl;
			cin >> change;
			cout << "Enter new assessment: " << endl;
			cin >> newAssessment;
			arr[change - 1] = newAssessment;
			for (int i = 0; i < size; ++i) {
				cout << arr[i] << "  ";
			}
			cout << endl;
			break;
		case 3:
			double sum;
			sum = 0;
			for (int i = 0; i < size; ++i) {
				sum += arr[i];
			}
			cout << "Your average ball " << sum / size << ".\nYou will " << (sum / size <= 10.7 ? "not " : "") << "receive a scholarship";
			break;
		case 4:
			return 0;
			break;
		}
	}
}