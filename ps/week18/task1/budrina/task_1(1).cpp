//Создайте класс Дробь(или используйте уже ранее созданный вами).Используя перегрузку операторов реализуйте
//для него арифметические операции для работы с дробями
//(операции + , -, *, / ).

#define _CRT_SECURE_NO_WARNINGS
#include "Fraction.h"

int main()
{
	Fraction f1(3, 4), f2(2, 7), f3;
	f1.Print();
	f1.Change(4, 3);
	f1.Print();
	f2.Print();
	f3 = f1 * f2;
	f3.Print();
	f3 = f1 / f2;
	f3.Print();
	f3 = f1 + f2;
	f3.Print();
	f3 = f1 - f2;
	f3.Print();

	return 0;
}