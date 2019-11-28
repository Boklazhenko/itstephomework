#include <iostream>

using namespace std;

int main()
{
	int number, option, count = 0, sum = 0;
	float averageArithmetic;

	cout << "Please enter a number: " << endl;
	cin >> number;

	cout << "Press 1 for view count of numbers" << endl
		<< "Press 2 for view sum of numbers" << endl
		<< "Press 3 for view average arithetic" << endl
		<< "Press 4 for view count zero in number" << endl;
	cin >> option;

	switch (option)
	{

	case 1: //колличество цифр

		for (; number > 0; ++count)
		{
			number /= 10;
		}
		cout << "Your number have " << count << " digits" << endl;
		break;

	case 2:     //сумма цифр

		while (number)
		{
			sum += number % 10;
			number /= 10;
		}
		cout << "Sum of your digits = " << sum << endl;
		break;

	case 3:    //среднее арифметическое

		while (number) //вроде бы не рабочий вариант, лучше не смог додумать((
		{
			sum = 0;
			count = 1;
			while (count <= number)
			{
				sum += count;
				count++;
			}
			float averageArithmetic = sum / (float)count;

			cout << "Average sum your digits = " << averageArithmetic;
			break;
		}

	case 4:

		count = 1;
		while ((number /= 10) > 0)
		{
			if (number % 10 == 0)
			{
				++count;
			}
		}
		cout << "New number:  " << count << endl;
		break;
	}
}
