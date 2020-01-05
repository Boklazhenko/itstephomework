//Задание 4. (неделя 7.2)
//Написать рекурсивную функцию нахождения степени числа.

#include <iostream>
using namespace std;

int findDegree(int basis, int exponent)
{
	if (exponent == 1)
		return basis;
	int res = basis * findDegree(basis, exponent - 1);
	return res;
}

void main()
{
	cout << findDegree(5, 3);
}
