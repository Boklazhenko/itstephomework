#include <iostream>
int main()
{
	int const monthProfit = 11;
	int startedRange, endRange;
	float minProfit, maxProfit;		//флоат потому что прибыль может быть не целым числом
	float month[monthProfit];
	for (int i = 0; i <= monthProfit; ++i)
	{
		std::cout << "Enter profit for " << (i + 1) << " each month: \n"; // +1 что бы начиналась нумерация с 1 для пользователя
		std::cin >> month[i];
	}
	std::cout << "Enter search started range(number month) : ";
	std::cin >> startedRange;
	std::cout << "Enter search end of range(number month) : ";
	std::cin >> endRange;
	minProfit = month[startedRange];
	maxProfit = month[startedRange];
	if (startedRange <= 0 || endRange <= 0 || startedRange > 12 || endRange > 12)
		std::cout << "Error, enter correct month number";				//проверяем пользователя на корректность диапазона
	else
	{
		for (int i = startedRange - 1; i < endRange; ++i) {					// -1 потому что до этого прибавляли а массив хранит значения
			if (minProfit > month[i])										// с 0 индекса т.е на 1 меньше чем ввел пользователь
				minProfit = month[i];
			if (maxProfit < month[i])
				maxProfit = month[i];

		}
		std::cout << "Min profit of range is: " << minProfit << std::endl;
		std::cout << "Max profit of range is: " << maxProfit << std::endl;
	}
}

