#include <iostream>

void luckyNum(int num, int digit = 6) {
	int sum1 = 0, sum2 = 0, count = 0;
	for (int i = num; i != 0; i /= 10)
	{
		if (count < (digit / 2))
		{
			sum1 += (i % 10);
		}
		else
		{
			sum2 += (i % 10);
		}
		count++;
	}
	if (count != digit)			// проверяем на корретность вводимых данных
	{
		std::cout << "Error";
	}
	else if (sum1 == sum2) {
		std::cout << "Lucky";
	}
	else {
		std::cout << "False";
	}
}

int main()
{
	luckyNum(123320);
}




