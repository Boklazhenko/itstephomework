

#include <iostream>
using namespace std;

const int sizeArr = 3;
int arrNumber[sizeArr];
int inputNumber = 1; // Счетчик введенных чисел


int main()
{
	for (int i = 0; i < sizeArr; ++i) {

		cout << "Input number " << inputNumber << endl;
		cin >> arrNumber[i];
		++inputNumber;

	}

	int max = arrNumber[0];

	for (int i = 0; i < sizeArr; ++i) {

		if (max <= arrNumber[i])
			max = arrNumber[i];
	}


	int min = arrNumber[0];

	for (int i = 0; i < sizeArr; ++i) {
		if (arrNumber[i] < min)
			min = arrNumber[i];
	}

	cout << "Max number " << max << endl;
	cout << "Min number " << min << endl;

}


