#include <iostream>
using namespace std;
int main()
{
	int num, res;
	cout << "Enter num : ";
		cin >> num;
	if (num < 0)
		num = -num;
	for (int i = 1; i <= num; ++i) {
		res = i * i;
		if (num % res == 0 && num % (res * i) != 0)
		cout << i << " \n";
	}
}