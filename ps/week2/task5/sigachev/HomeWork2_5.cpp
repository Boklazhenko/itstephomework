//таблица умножения на k, где k – номер варианта
#include <iostream>
#include <iomanip>      //добавил <iomanip> чтобы таблица более-менее ровно выглядела

using namespace std;

int main() {
	int variant;
	int result;
	cout << "Which variant - ";
	cin >> variant;
	cout << "\n";
	//############################ цикл for ######################################
	/*	for (int i = 0; i <= 10; ++i) {
		result = variant * i;
		cout << setfill(' ') << variant << " x " <<setw(2) << i << " = " << result << "\n";
		}*/
	//############################ цикл while ######################################
	/*	int i = 0;
		while (i <= 10) {
		result = variant * i;
		cout << setfill(' ') << variant << " x " <<setw(2) << i << " = " << result << "\n";
		i++;
		}*/
	//############################ цикл do....while ######################################
		int i = 0;
		do {
		result = variant * i;
		cout << setfill(' ') << variant << " x " <<setw(2) << i << " = " << result << "\n";
		i++;
		} while (i <= 10);
}