#include <iostream>

int searchMaxDivider(int a, int b) {				//алгоритм нашел в гугле, как работает разобрался, но сам бы вряд ли придумал

	if (b == 0)
		return a;
	if (a > b)
		return searchMaxDivider(b, a % b);
	else
		return searchMaxDivider(a, b % a);
}

int main()
{
	std::cout << "Enter num 1: ";
	int num1;
	std::cin >> num1;
	std::cout << "Enter num 2: ";
	int num2;
	std::cin >> num2;
	std::cout << searchMaxDivider(num1, num2);
}