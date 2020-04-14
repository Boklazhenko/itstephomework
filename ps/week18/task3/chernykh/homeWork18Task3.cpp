#include <iostream>
#include "overcoat .h"

int main()
{
	Overcoat one("Sweater", 32, 5500);
	Overcoat two("Sweater", 48, 4200);

	one.print();
	two.print();

	Overcoat three = one;

	three.print();

	if (one == two)
	{
		cout << "Overcoat type is equal!" << endl;
	}
	else
	{
		cout << "Overcoat type is'n equal!" << endl;
	}

	if (one != two)
	{
		cout << "Overcoat type is'n equal!" << endl;
	}
	else
	{
		cout << "Overcoat type is equal!" << endl;
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