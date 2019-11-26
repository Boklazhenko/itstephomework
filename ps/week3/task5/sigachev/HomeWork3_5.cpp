//Пользователь вводит целое число А.Программа должна определить, 
//что куб суммы цифр этого числа равен А* А
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	long long numUser, sum = 0, a, cube, square, dublNumUser;
	cout << "Введите число: ";
	cin >> numUser;
	dublNumUser = numUser;
	while (numUser > 0) {
		{
			a = numUser % 10;
			sum += a;
		}
		numUser /= 10;
	}
	cube = sum * sum * sum;
	square = dublNumUser * dublNumUser;
	if (cube == square) {
		cout << "\nУ вашего числа "<< dublNumUser << " куб суммы цифр "
			<< cube << " равен квадрату " << square << " вашего числа.\n";
	}
	else {
		cout << "\nУ вашего числа " << dublNumUser << " куб суммы цифр "
			<< cube << " не равен квадрату " << square << " вашего числа.\n";
	}
}