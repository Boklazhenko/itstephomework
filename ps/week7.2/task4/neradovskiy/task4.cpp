#include <iostream>

double findDegreeNum(double num, int pow) {
	if (pow > 0) {
		return num * findDegreeNum(num, pow - 1);
	}
	else if (pow == 0) {
		num = 1;
		return num;
	}
	else if (num == 0)
	{
		return 0;
	}
	else
	{
		return 1 / num * findDegreeNum(num, pow + 1);
	}
}

int main()
{
	std::cout << findDegreeNum(12, 3);
}