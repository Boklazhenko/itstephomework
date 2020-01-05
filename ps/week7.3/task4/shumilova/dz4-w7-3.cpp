//4 (неделя 7.3)
//Используя указатели и оператор разыменования, определить наибольшее из двух чисел
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter 2 number: \n";
	cin >> a >> b;
	int* pa = &a;
	int* pb = &b;
	int max = (*pa > * pb) ? *pa : *pb;
	cout << "Maximum = " << max << endl;
}