#include <iostream>
#include "MyQueue.h"
#include "PrintingData.h"

int main()
{
	MyQueue<DataPrinting> test;
	const int size = 20;
	for (int i = 0; i < size; ++i) {
		test.push(DataPrinting("Fedya", i));
	}
	test.priorityPush(DataPrinting("Vasia", 25), 0 );
	while (!test.empty())
	{
		test.front().print();
		test.pop();
	}
}