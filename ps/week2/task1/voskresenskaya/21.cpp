
#include <iostream>
using namespace std;

int main()
{
	int i;
	cout << "Enter the number i" << endl;
	cin >> i;
	long sum = 0;
	if (i <= 500) {
		for (i; i <= 500; i++)
		{
			sum += i;
		}
		cout << sum << endl;
	}
	else {
		cout << "The number coult not be more 500 " << endl;
	}
	return 0;

	
}


