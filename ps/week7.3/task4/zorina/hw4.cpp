// Используя указатели и оператор разыменования, определить наибольшее из двух чисел
//

#include <iostream>
using namespace std;

//вариант 1, но опять же, я так понимаю, нужно использовать прям указатели на адрес, поэтому еще вариант 2

//void findMaxNumber(int *firstNumber, int *secondNumber)
//{
//	if (*firstNumber > * secondNumber)
//		cout << "The biggest number is " << *firstNumber;
//	if (* secondNumber>*firstNumber)
//		cout << "The biggest number is " << *secondNumber;
//	if (*firstNumber == *secondNumber)
//		cout << "Numbers are equal";
//}

void findMaxNumber(int firstNumber, int secondNumber)
{
	int* px = &firstNumber, * py = &secondNumber;
	if (*px > * py)
		cout << "The biggest number is " << *px;
	if (* py>*px)
		cout << "The biggest number is " << *py;
	if (*px == *py)
		cout << "Numbers are equal";
}

int main()
{
	int x, y;
	cout << "Input the first number\n";
	cin >> x;
	cout << "Input the second number\n";
	cin >> y;
	findMaxNumber(x,y);
	//findMaxNumber(&x,&y); вызов функции для первого варианта
}