#include "flat.h"

int main()
{
    Flat one(60.5, 2300000.99, 3);
    Flat two(31, 1250000.10, 1);

    one.print();
    two.print();

    Flat three = one;

    three.print();

	if (one == two)
	{
		cout << "Flat area is equal!" << endl;
	}
	else
	{
		cout << "Flat area is'n equal!" << endl;
	}

	if (one != two)
	{
		cout << "Flat area is'n equal!" << endl;
	}
	else
	{
		cout << "Flat area is equal!" << endl;
	}

	if (one > two)
	{
		cout << "One is expensive!" << endl;
	}
	else
	{
		cout << "One is cheaper" << endl;
	}
}
