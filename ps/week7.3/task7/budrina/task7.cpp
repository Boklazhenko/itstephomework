// Написать примитивный калькулятор, пользуясь только указателями.
#include <iostream>
using namespace std;

void summ(int* x, int* y, int* tmp)
{
	*tmp = *x + *y;
}

void razn(int* x, int* y, int* tmp)
{
	*tmp = *x - *y;
}

void proizv(int* x, int* y, int* tmp)
{
	*tmp = *x * *y;
}

void delen(int* x, int* y, int* tmp)
{
	*tmp = *x / *y;
}
int main()

{
	setlocale(LC_ALL, "Russian");
	int a, b, res;
	char dei;
	cout << "Этот примитивный калькулятор использует только указатели\n";
	do {
		cout << "\nВозможно использовать только + - * / \n";
		cin >> a >> dei >> b;
		cout << "=\n";
		switch (dei) {
		case '+':
			summ(&a, &b, &res);
			cout << res << "\n";
			break;
		case '-':
			razn(&a, &b, &res);
			cout << res << "\n";
			break;
		case '*':
			proizv(&a, &b, &res);
			cout << res << "\n";
			break;
		case '/':
			delen(&a, &b, &res);
			cout << res << "\n";
			break;
		default:
			cout << "Error!";
		}
		cout << "\nЕсли хотите продолжить, нажмите 1:";
		cin >> a;
	} while (a == 1);
}