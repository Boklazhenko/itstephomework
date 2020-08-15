#include <iostream>
#include "Functors.h"
#include <algorithm>


int main()
{
	std::vector<int> buff{ 28, 5, 3, 3, 18, 5, 6, 7, 8, 9, 19 };
	int result = 25;
	std::for_each(buff.begin(), buff.end(), Min<int>(result));
	std::cout << std::endl;
	std::cout << result << std::endl;
	printBuff(buff);

	std::sort(buff.begin(), buff.end(), Down<int>());
	std::cout << std::endl;
	printBuff(buff);

	std::cout << std::endl;
	std::for_each(buff.begin(), buff.end(), Decrease<int>(result));
	printBuff(buff);

	std::cout << std::endl;
	std::remove_if(buff.begin(), buff.end(), Equal<int>(25));

	printBuff(buff);

}