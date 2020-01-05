//5 (неделя 7.3)
//Используя указатели и оператор разыменования, определить знак числа, введённого с клавиатуры.
#include <iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	int* pn = &num;
	
	if (*pn < 0)cout << "-";
	if (*pn > 0)cout << "+";
	if (*pn == 0)cout << "0";
}