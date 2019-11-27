#include <iostream>
using namespace std;

int main()
{
	
	int j = 0, A;

	cout << "A ";
	cin >> A;

	while (A > 0)
	{
		if (A % 10 != 3 &&
			A % 10 != 6)
		{
			j *= 10;
			j += A % 10; /*вот эту штуку гуглила, не сообразила как сделать*/
		}
		A /= 10;
	}


	while (j > 0)
	{
		cout << j % 10;
		j /= 10;
	}
	
	return 0;
}
