#include <iostream>

void searchPerfectNum(int a, int b);

int main()
{
	
}
void searchPerfectNum(int a, int b) {			// сделал воид для наглядности и не очень понял надо чтоб функция эти числа возвращала?

	if (a > b) {
		int temp = b;
		b = a;
		a = temp;
	}
	for (int i = a; i < b; ++i) {
		int result = 0;
		for (int x = 1; x < i; ++x) {
			if ((i % x) == 0)
			{
				result += x;
			}
		}
		if (result == i) {
			std::cout << i << " ";
		}
	}
}