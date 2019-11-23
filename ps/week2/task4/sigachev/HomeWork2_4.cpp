//произведение всех целых чисел от a до 20
#include <iostream>
using namespace std;

int main() {
	int number;
	long long result = 1;
	tryAgain:
	cout << "Enter the number to 20\n";
	cin >> number;
		if (number <= 0 || number > 20) {
			cout << "\nYou are wrong, the number is not correct!\n";
			goto tryAgain;      //Все равно оператор goto нравится))))) 
								//Не нужно при ошибке по новой запускать программу!
	}
	//####################### цикл for #############################################
	/*	for (int i = number; i <= 20; ++i) {
		result *= i;
		}*/
	//####################### цикл while ###########################################
	/*	while (number <= 20) {
		result *= number;
		number++;
		}*/
	//####################### цикл do....while #####################################
		do {
		result *= number;
		number++;
		} while (number <= 20);
	cout << result << "\n";
}