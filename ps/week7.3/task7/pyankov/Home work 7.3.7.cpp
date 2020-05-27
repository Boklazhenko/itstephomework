#include <iostream>

using namespace std;
float calc(float* a, float* b, int action);

int main()
{

	float number1, number2;

	float* pNumb1 = &number1, * pNumb2 = &number2;

	int action = -1;

	cout << "Input number 1" << endl;
	cin >> number1;
	cout << "Input number 2" << endl;
	cin >> number2;

	do {
		cout << "Press 1 - \'-'" << endl
			<< "Press 2 - \'+'" << endl
			<< "Press 3 - \'*'" << endl
			<< "Press 4 - \'/'" << endl;
		cin >> action;
	} while (action < 0 || action >4);

	cout << calc(pNumb1, pNumb2, action);


	cin.get();
	system("pause");
	return 0;
}

float calc(float* a, float* b, int action)
{
	switch (action) {
	case 1:
		return *a - *b;
		break;

	case 2:
		return *a + *b;
		break;

	case 3:
		return *a * *b;
		break;

	case 4:
		return *a / *b;
		break;
	}

}
