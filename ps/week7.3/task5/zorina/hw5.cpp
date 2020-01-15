// Используя указатели и оператор разыменования, определить знак числа, введённого с клавиатуры.
//

#include <iostream>
using namespace std;

//та же проблема, что и в предыдущих заданиях

//void defineSign(int* number)
//{
//	if (*number > 0)
//		cout << "You have entered positive number";
//	if (*number < 0)
//		cout << "You have entered negative number ";
//	if (*number == 0)
//		cout << "You have entered zero";
//}


void defineSign(int number)
{
	int* pNumber = &number;
	if (*pNumber > 0)
		cout << "You have entered positive number";
	if (*pNumber < 0)
		cout << "You have entered negative number ";
	if (*pNumber == 0)
		cout << "You have entered zero";
}

int main()
{
	int x;
	cout << "Please, enter any number\n";
	cin >> x;
	//defineSign(&x); вызов функции в первом варианте
	defineSign(x);
}