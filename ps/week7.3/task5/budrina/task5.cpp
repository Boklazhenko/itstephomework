// Используя указатели и оператор разыменования, определить знак числа введенного с клавиатуры.

#include <iostream>
using namespace std;


int main()
{
	setlocale(0, "");
	int digit;
	int* pdigit = &digit;
	cout << "Введите число: ";
	cin >> *pdigit;
	cout << ((*pdigit < 0) ? "Число отрицательное" : (*pdigit > 0) ? "Число положительное" : "Равен 0") << endl;
	
}