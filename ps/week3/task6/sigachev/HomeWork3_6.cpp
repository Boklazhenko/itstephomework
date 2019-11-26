//Пользователь вводит целое число.Необходимо вывести 
//все целые числа, на которое заданное число делиться без остатка
#include <iostream>
using namespace std;

int main(){
	long long num, delit = 1, temp, i = 0;			//long long - чтобы можно было ввести большое число
    cout << "Enter the number ";					//вводил 1 миллиард - последние делители медлено считались
	cin >> num;
	while (delit <= num) {
		temp = num % delit;
		if (temp == 0) {
			cout << delit << ", ";
			++i;
		}
		++delit;
	}
	cout << "\n\nTotal " << i << " dividers!\n";	//При вводе большого числа выводит количество делителей
}													//чтобы вручную не считать.