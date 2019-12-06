#include <iostream>
using namespace std;
const int SIZE = 15;
int main()
{
	int i, j, k;
	 
	int variant;

	cout << "enter figure (1 - 10) : ";
	cin >> variant;
	cout << "\n";

	for (i = 0; i < SIZE; i++)
	{
		for (j = 0, k = SIZE; j < SIZE; j++, k--)
		{
			switch (variant)
			{

			case 1:
				cout << (j >= i ? "*" : " ");
				break;
			case 2:
				cout << (j <= i ? "*" : " ");
				break;
			case 3:
				cout << (j >= i && k >= i + 1 ? "*" : " ");
				break;
			case 4:
				cout << (j <= i && k <= i + 1 ? "*" : " ");
				break;
			case 5:
				cout << ((j >= i && k >= i + 1) || (j <= i && k <= i + 1) ? "*" : " ");
				break;
			case 6:
				cout << ((j <= i && k >= i + 1) || (j >= i && k <= i + 1) ? "*" : " ");
				break;
			case 7:
				cout << (j <= i && k >= i + 1 ? "*" : " ");
				break;
			case 8:
				cout << (j >= i && k <= i + 1 ? "*" : " ");
				break;
			case 9:
				cout << (k > i ? "*" : " ");
				break;
			case 10:
				cout << (k <= i ? "*" : " ");
				break;
			default:
				cout << "Invalid shape number!\n";
			}
		}
		cout << "\n";
	}
	cout << "\n";
}