#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> y;
	cin >> x;
			double res = 1.;
	for (int i = 0; i < x; i++) res *= y;
	cout << res;
}