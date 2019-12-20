#include <iostream>

using namespace std;

int calcDegree(int degreeBasis, int exponent);

int main()
{
	setlocale(LC_ALL, "");
	int degreeBasis, exponent;
	cout << "Введите число которое хотите возвести в степень: " << endl;
	cin >> degreeBasis;
	cout << "Введите степень этого числа: " << endl;
	cin >> exponent;

	cout << "Результат = " << calcDegree(degreeBasis, exponent) << endl;

}

int calcDegree(int degreeBasis, int exponent)
{
	int res = 1;
	for (int i = 0; i < exponent; ++i)
		res *= degreeBasis;
	return res;
}
