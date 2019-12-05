
#include <iostream>
using namespace std;

int main()
{
	int A;
	cout << "A=" << endl;
	cin >> A;
	for (int B = 1; B * B <= A; B++) 
	{
		if (A % (B * B) == 0 && A /( B * B * B) != 0)
		{
			cout << B;
		}
	}
	return 0;
	 
}

