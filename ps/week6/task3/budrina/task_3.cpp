// Число называется совершенным, если сумма всех его делителей равна ему самому. 
// Напишите функцию поиска таких чисел во введенном интервале.

#include <iostream>
using namespace std;
bool perfect(int num) {
	int sum = 0;
	for (int j = 1; j <= num / 2; j++) {
		if (num % j == 0) {
			sum += j;
		}
	}
	return sum == num;
}
int main()
{
	int startNum;
	int endNum;
	cout << "Enter start num: ";
	cin >> startNum;
	cout << "Enter end num: ";
	cin >> endNum;
		for (int i = startNum; i < endNum; ++i) {
			if (perfect(i)) {
				cout << i << " "<<endl;
			}
		}
}