#include <iostream>
using namespace std;
int main()
{
long key, num, num1, temp, k = 0;
float mean, digit = 0, sum = 0;
cout << "Enter the number ";
cin >> num;
num1 = num;
cout << "Number of digits press 1 \n";
cout << "Sum digits press 2 \n";
cout << "Arithmetic mean of digits press 3 \n";
cout << "Number of zeros press 4 \n";
cin >> key;
switch (key) {
case 1: for (; num > 0; digit++) {
	num /= 10;
}
	  cout << "\nNumber of digits = " << digit;
	  break;
case 2: while (num1 > 0) {
	sum += num1 % 10;
	num1 /= 10;
}
	  cout << "\nSum digits = " << sum;
	  break;
case 3:
	while (num1 > 0) {
		sum += num1 % 10;
		num1 /= 10;
	}
	for (; num > 0; digit++) {
		num /= 10;
	}
	mean = sum / digit;
	cout << "\nArithmetic mean of digits = " << mean;
	break;
case 4:
	for (; num > 0; digit++) {
		num /= 10;
	}
	for (int i = 0; i < digit; ++i) {
		temp = num1 % 10;
		num1 /= 10;
		if (temp == 0) ++k;
	}
	cout << "\nNumber of zeros = " << k;
	break;
default:
	cout << "You wrong number, try again ";
}
cout << "\n\n";
}
 