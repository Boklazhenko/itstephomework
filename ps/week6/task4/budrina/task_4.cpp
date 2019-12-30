// Написать функцию, которая определяет, является ли "счастливым"
// шестизначное число.
// Решила задачу по принципу счастливый билет. Сумма первых трёх цифр равна сумме трёх последних.
#include <iostream>
using namespace std;
bool happyTicket(int firstSum, int secondSum) {
	int sum = 0;
	if (sum = firstSum == secondSum) {
		cout <<"\n"<< true << " = Happy ticket" << endl;
	}
	else {
		cout << "\n" << false << " = Not a happy ticket" << endl;
	}
	return sum;
}
int main()
{
	using namespace std;
	setlocale(0, "");
	const int bigSize = 6; // Шесть знаков в билете
	const int smallSize = bigSize / 2; //Делим на две части
	int arr[bigSize];
	int firstSmallArr[smallSize];
	int secondSmallArr[smallSize];
	int sum1 = 0;
	int sum2 = 0;
	cout << "\t\tСчастливый билет\n\n";
	cout << "Введите цифры от 0 до 9 шесть раз\n";
	for (int i = 0; i < bigSize; ++i) {
		cout << "Цифра " << i + 1 << " = ";
		cin >> arr[i];
		if (arr[i] < 0 || arr[i]>9) {
			cout << "\nError\n";
			return 0;
		}
	}
	for (int i = 0; i < smallSize; ++i) {
		firstSmallArr[i] = arr[i];
		sum1 += firstSmallArr[i];
	}
	for (int i = 0; i < smallSize; ++i) {
		secondSmallArr[i] = arr[i + smallSize];
		sum2 += secondSmallArr[i];
	}
	happyTicket(sum1, sum2);
}