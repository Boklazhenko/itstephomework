//Сумма целых чисел от а до 500
#include <iostream>
using namespace std;

int main() {
	int number;
	int count = 0;

tryAgain:
	cout << "Enter a number from 0 to 500: ";
	cin >> number;
	if (number < 0 || number > 500) {    //проверка на правильность введенния диапазона
		cout << "\nYou are wrong, the number is not correct!\n";
		goto tryAgain;			//оператор не рекомендуют, поставил для проверки и возврата к запросу числа.
	}
	/*
	//########################## цикл for ##########################################
	for (int i = number; i <= 500; ++i) {
		count = count + i;
	}
	cout << "\n" << count << endl;
	*/
	//########################## цикл while ########################################
	/*
	while (number <= 500) {
		count = count + number;
		number++;
		}
	cout << "\n" << count << endl;
	*/
	//########################## цикл do.....wile ##################################

	do {
		count = count + number;
		number++;
	} while (number <= 500);
	cout << "\n" << count << endl;

}