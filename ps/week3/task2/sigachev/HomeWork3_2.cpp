// Подсчитать количество целых чисел в диапазоне 
// от 100 до 999 у которых все цифры разные

// Так же добавил свободу действий пользователю!!!!!!!!!
#include <iostream>
using namespace std;

int main()
{
	int sum = 0, digit1, digit2, digit3, startRange, endRange, i;
	cout << "Enter start of range > 100 and < 999 ";
	cin >> startRange;
	cout << "Enter end of range > 100 and < 999 ";
	cin >> endRange;
	for (i = startRange; i <= endRange; i++) {
		digit1 = i / 100;			//first number
		digit2 = (i / 10) % 10;		//second namber
		digit3 = i % 10;			//third namber
		if (digit1 != digit2 && digit1 != digit3 && digit2 != digit3) sum++;
	}
	cout << "\nAmount of numbers " << sum;
	cout << "\n";
}