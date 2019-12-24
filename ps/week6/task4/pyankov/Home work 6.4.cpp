#include <iostream>

using namespace std;

int checkTicket(int numberTicket);

int main()
{
	int numberTicket;
	cout << "Input number" << endl;;
	cin >> numberTicket;

	checkTicket(numberTicket);



	cin.get();
	system("pause");
	return 0;
}


int checkTicket(int numberTicket)
{
	int number = numberTicket;
	int sum1 = 0;
	int sum2 = 0;
	int c = 0;
	bool result;

	while (number > 0)
	{
		number /= 10;
		++c;
	}

	if (c < 6)
	{
		cout << "Error, enter a positive six digit number" << endl;
	}


	else {

		for (int i = 0; i < 6; ++i)
		{
			if (i < 3)
				sum1 += numberTicket % 10;
			else
				sum2 += numberTicket % 10;

			numberTicket /= 10;
		}

		if (sum1 == sum2)
			result = true;
		//cout << "Yes" <<endl;
		else
			result = false;
		// cout << "No" << endl;

	}
	return result;
}
