#include <iostream>
using namespace std;
int main()
{
	int num1,num2,num3;//первая, вторая, третья цифры в числе
	for (int num = 100; num <= 999; num++) {
		num1 = num / 100;
		num2 = (num % 100) / 10;
		num3 = num % 10;
		if (num1 == num2 || num1 == num3 || num2 == num3)
			cout << num << " ";
		}
	}



