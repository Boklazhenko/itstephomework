#include <iostream>


using namespace std;
void searchPerfectNumbers(int startRange, int endRange);

int main()
{

	int a, b;
	cout << "input start range" << endl;
	cin >> a;
	cout << "input end range" << endl;
	cin >> b;

	searchPerfectNumbers(a, b);

	cin.get();
	system("pause");
	return 0;
}

void searchPerfectNumbers(int startRange, int endRange)
{

	if (startRange > endRange)
	{
		int revers = startRange;
		startRange = endRange;
		endRange = revers;
	}

	int sum = 0;

	for (int c = startRange; c < endRange; ++c) {

		for (int i = 1; i < c; ++i)
		{

			if (c % i == 0)
				sum += i;

		}
		if (sum == c && c != 0)
			cout << sum << endl;
		sum = 0;
	}

}
