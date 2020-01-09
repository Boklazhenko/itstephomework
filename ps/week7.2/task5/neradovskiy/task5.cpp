#include <iostream>

void printStar(int quantity);

int main()
{
	std::cout << "Enter tht number of stars: ";
	int starCount;
	std::cin >> starCount;
	printStar(starCount);
}
void printStar(int quantity) {

	if (quantity > 0) {
		std::cout << "*";
		return printStar(quantity - 1);
	}
}