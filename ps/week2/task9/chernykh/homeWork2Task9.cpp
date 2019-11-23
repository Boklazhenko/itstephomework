#include <iostream>

using namespace std;

//homeWork2Task9
//Не считает первое число, не знаю почему...

int main()
{
	int numbers;
	int sum = 0;

	cout << "Please enter number:\n";
	cin >> numbers;

	for (int i = numbers; i > 0; i++)
	{
		if (numbers == 0)
		{
			break;
		}
		else
		{

			cout << "Please enter next number: \n";
			cin >> numbers;
			sum += numbers;
			cout << "Total sum of your numbers = " << sum << endl;
		}

	}
}