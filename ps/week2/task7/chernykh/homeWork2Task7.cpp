#include <iostream>

using namespace std;

int main()
{
	int startRange, endRange;
	int options;

	cout << "Please enter first number: \n";
	cin >> startRange;
	cout << "Please enter second number: \n";
	cin >> endRange;

	cout << "\nOption 1 - All numbers.\n"
		<< "Option 2 - Numbers that are divisible by two.\n"
		<< "Option 3 - Numbers that are not divisible by two.\n"
		<< "Option 4 - Numbers that are divisible by seven.\n"

		<< "\nYour option?\n";
	cin >> options;

	switch (options)
	{
	case 1:
		while (startRange <= endRange)
		{
			cout << startRange << endl;
			++startRange;
		}
		break;
	case 2:
		for (startRange = startRange; startRange <= endRange; startRange++)
		{
			if (startRange % 2 == 0)
			{
				cout << startRange << endl;
			}
		}
		break;
	case 3:
		for (int count = startRange; count <= endRange; count++)
		{
			if (count % 2 == 1)
			{
				cout << count << endl;
			}
		}
		break;
	case 4:
		for (int i = startRange; i <= endRange; i++)
		{
			if (i % 7 == 0)
			{
				cout << i << endl;
			}
		}
		break;
	default:
		break;
	}
}
