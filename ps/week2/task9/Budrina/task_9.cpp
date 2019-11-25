#include <iostream>
using namespace std;
int main()
{
	int digit;
	int sum = 0;
	for (;;) { // реализация бесконечного цикла
		cout << "Enter digit:";
		cin >> digit; // ввод числа
		if (digit == 0) // если введен 0
			break; // остановить цикл
		sum += digit; // накопление суммы
	}
	// показ результата
	cout << "Sum of digits=" << sum << "\n\n";
}