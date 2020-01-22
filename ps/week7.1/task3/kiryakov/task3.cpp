#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int arr[10];
	cout << "input marks:" << endl;
	for (int q = 0; q < 10; q++)
	{
		cout << "mark " << q + 1 << ":" << endl;
		cin >> arr[q];
	}

	int chose;

	do
	{
		cout << "Menu" << endl;
		cout << "output all marks < --- 1 \n";
		cout << "exam remake < -------- 2 \n";
		cout << "scholarships  < ------ 3 \n";
		cin >> chose;
		cout << endl;

		switch (chose)
		{
		case 1:
			for (int w = 0; w < 10; w++)
				cout << arr[w] << endl;
			break;
		case 2:
			int repl;
			cout << "mark for replacement:";
			cin >> repl;
			cout << "old mark " << arr[repl - 1] << endl;

			cout << "enter new mark:";
			cin >> arr[repl - 1];
			break;
		case 3:
			int sum=0;
			double average_mark;

			for (int q = 0; q < 10; q++)
				sum += arr[q];

			average_mark = sum / 10;
			cout << sum << endl;

			cout << average_mark;

			if (average_mark == 10.7 || average_mark > 10.7)
				cout << "have scholarships \n";
			break;
		}

	} while (true);
	return 0;
}