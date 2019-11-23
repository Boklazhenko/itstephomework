// границы диапазона в произвольном порядке.
// вывести на экран все числа из этого диапазона. вывести все четные числа из диапазона.
// вывести все нечетные числа из диапазона. вывести все числа, кратные семи.

#include <iostream>
using namespace std;

int main() {
	int firstNumber, secondNumber, smallNumber, bigNumber;
		cout << "Enter first number of the range ";
		cin >> firstNumber;
		cout << "Tnter second number of the range ";
		cin >> secondNumber;
			if (firstNumber < secondNumber) {		//Здесь проверяется какое число начальное в диапазоне
				smallNumber = firstNumber;	bigNumber = secondNumber;
			}
			else {
				smallNumber = secondNumber;	bigNumber = firstNumber;
			}
	//---------------------------------выводим все числа----------------------------
	cout << "\n\nAll numbers of the range ";
	//############################## цикл for ######################################
	/*		for (int i = smallNumber; i <= bigNumber; ++i) {
				cout << i << " ";
			}*/
	//############################## цикл while ####################################
	/*		int i = smallNumber - 1;
			while (i < bigNumber) {
				++i;
				cout << i << " ";
			}*/
	//############################## цикл do....while ##############################
			int i = smallNumber;
			do {
				cout << i << " ";
				i++;
			} while (i <= bigNumber);
	//---------------------------------выводим четные числа-------------------------
	cout << "\n\nAll even numbers ";
	//############################## цикл for ######################################
	/*		for (int j = smallNumber; j <= bigNumber; ++j) {
				if (j % 2 == 0)
					cout << j << " ";
			}*/
	//############################## цикл while ####################################
	/*		int j = smallNumber;
			while (j <= bigNumber) {
				if (j % 2 == 0)
					cout << j << " ";
				 ++j;
			}*/
	//############################## цикл do....while ##############################
			int j = smallNumber;
			do {
				if (j % 2 == 0)
					cout << j << " ";
				j++;
			} while (j <= bigNumber);
	//---------------------------------выводим нечетные числа-----------------------
	cout << "\n\nAll odd numbers ";
	//############################## цикл for ######################################
	/*		for (int ij = smallNumber; ij <= bigNumber; ++ij) {
				if (ij % 2 != 0)
					cout << ij << " ";
			}*/
	//############################## цикл while ####################################
	/*		int ij = smallNumber;
			while (ij <= bigNumber) {
				if (ij % 2 != 0)
					cout << ij << " ";
				 ++ij;
			}*/
	//############################## цикл do....while ##############################
			int ij = smallNumber;
			do {
				if (ij % 2 != 0)
					cout << ij << " ";
				ij++;
			} while (ij <= bigNumber);
	//---------------------------------выводим числа кратные 7----------------------
	cout << "\n\nAll multiples of seven ";
	//############################## цикл for ######################################
	/*		for (int ji = smallNumber; ji <= bigNumber; ++ji) {
				if (ji % 7 == 0)
					cout << ji << " ";
			}*/
	//############################## цикл while ####################################
	/*		int ji = smallNumber;
			while (ji <= bigNumber) {
				if (ji % 7 == 0)
					cout << ji << " ";
				 ++ji;
			}*/
	//############################## цикл do....while ##############################
			int ji = smallNumber;
			do {
				if (ji % 7 == 0)
					cout << ji << " ";
				ji++;
			} while (ji <= bigNumber);
	cout << "\n";
}