#include <iostream>
using namespace std;

void printStars(int stars)
{
	if (stars > 0)
	{
		cout << "* ";
		return printStars(stars - 1);
	}
}

int main()
{
	int stars;
	cout << "How much stars do you want to see?\n";
	cin >> stars;
	printStars(stars);
}