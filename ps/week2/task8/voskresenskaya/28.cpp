
#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout << "a=" << endl;
	cin >> a;
	cout << "b=" << endl;
	cin >> b;
	long sum=0;
	if (a < b) {
		for (a; a <= b; a++)
		{
			sum = sum + a;
		}
		cout << sum << endl;
	}
	else {
		for (b; b <= a; b++)
		{
			sum = sum + b;
		}
		cout << sum << endl;
	}
 return 0;
}


