//Вычисляет и выводит значение x в степени y
#include <iostream>
using namespace std;

int main() {
	int number, degree;
	long long resuit = 1;
	int i = 0;
	cout << "Enter number:  ";
	cin >> number;
	cout << "Enter degree:  ";
	cin >> degree;

	//функцию возведения числа в заданую степень <<< pow(a,b) >>> нашел в интернете.

cout << "\nNumber " << number << " in degree " << degree << " is equal " << pow(number, degree) <<"\n";

//########################### цикл for ###################################
/*	for (int i = 0; i < degree; ++i) {
		resuit *= number;
	}*/
//########################### цикл while #################################
/*	while (i < degree) {
		resuit *= number;
			i++;
	}*/
//########################### цикл do...while ############################
	do {
		resuit *= number;
		i++;
	} while (i < degree);
cout << "\nNumber " << number << " in degree " << degree << " is equal " << resuit << "\n";
}