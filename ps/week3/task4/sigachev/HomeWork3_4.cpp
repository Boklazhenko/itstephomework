//Пользователь вводит любое целое число А.Необходимо вывести все целые числа В,
//для которых А делиться без остатка на В* В и не делиться без остатка на В* В* В
#include <iostream>
using namespace std;

int main() {
	long long num, qDelit, tDelit, delit = 1, temp2, temp3, i = 0;		//long long - чтобы можно было ввести большое число
	cout << "Enter the number ";					
	cin >> num;
	while (delit <= num) {
		qDelit = delit * delit;
		tDelit = delit * delit * delit;
		temp2 = num % qDelit;
		temp3 = num % tDelit;
		if (temp2 == 0 && temp3 != 0) {
			cout << delit << ", ";
			++i;
		}
		++delit;
	}
	cout << "\n\nTotal " << i << " dividers!\n";	//При вводе большого числа выводит количество делителей
}													//чтобы вручную не считать при больших числах.