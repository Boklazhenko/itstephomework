#include <iostream>

int summOfDiapazon(int a, int b) {
	if (a == b)
		return 0;
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	if (b - a == 1) {
		return a + b;
	}
		return a + summOfDiapazon(a + 1, b);
}

int main()
{
	std::cout << summOfDiapazon(1, -13);
	
}
