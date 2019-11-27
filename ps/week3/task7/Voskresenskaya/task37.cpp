#include <iostream>
using namespace std;
int main()
{
	int A;
	int B;
	int i;
	int j;
	cout << "A=" << endl;
	cin >> A;
	cout << "B=" << endl;
	cin >> B;


	if (A > B) {
		for (i = 1; i <= A; i++)
		{
			if (A % i == 0 && B % i == 0)
				cout << i << endl;
		}
	}
	else {
		for (i = 1; i <= B; i++)
		{
			if (A % i == 0 && B % i == 0)
				cout << i << endl;
		}


	}

	return 0;
}
