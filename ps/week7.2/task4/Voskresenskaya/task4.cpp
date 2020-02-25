//Написать рекурсивную функцию нахождения степени числа.
#include <iostream>
using namespace std;
double findDegree(int a, int N, int Pr = 1)
{
	if (N <= 0)
	{
		cout << Pr;
		return 0;
	}
	Pr *= a;
	--N;
	return findDegree(a, N, Pr);
}

int main()
{
	int a =23;
	int b = 5;
	findDegree(a, b);
	return 0;
}



