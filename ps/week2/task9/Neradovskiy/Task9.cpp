// Task9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int digit, sum = 0;
	for (;;) {
		std::cout << "Enter digit: ";
		std::cin >> digit;
		if (digit == 0)
			break;
		sum += digit;
	}
	std::cout << "Sum of all numbers is: " << sum;

	//int digit, sum = 0;
	//while (true)
	//{
	//	std::cout << "Enter digit: ";
	//	std::cin >> digit;
	//	if (digit == 0)
	//		break;
	//	sum += digit;
	//}
	//std::cout << "Sum of all numbers is: " << sum;
}