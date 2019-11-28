#include <iostream>
using namespace std;
int main()
{
	cout << "please enter number : ";
	int a;
	cin >> a;
	cout << "divisor : " << endl;
	a = (a < 0) ? -a : a;

	for (int i = -a; i <= a; i++) {
		if (i == 0) continue;
		if (a % i == 0) {
			cout << i << ' ';
		}
	}
	cout << endl;

}