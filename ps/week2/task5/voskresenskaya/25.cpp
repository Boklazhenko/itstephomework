

#include <iostream>
using namespace std;

int main()
{
	int k;
	int var;
	int comp;
	cout << "Enter the variant " << endl;
	cin >> var;

	if (var >= 1 && var <= 10) {

		for (k = 1; k <= 10; k++)

		{
			comp = k * var;
			cout << comp << endl;
		}
	}

	else { cout << "The variant could not be more 10  and less 1" << endl; }
	return 0;
}

