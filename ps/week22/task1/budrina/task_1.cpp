//Реализуйте стек в виде односвязного списка.Требуется
//реализовать типичные операции по работе со стеком.

#include "ListStack.h"

int main()
{
	StackList<int> SL;
	SL.print("SL");

	SL.push(8);
	SL.push(5);
	SL.push(10);
	SL.push(7);
	SL.print("SL");
	SL.count();

	StackList<int> SL2 = SL;
	SL2.print("SL2");

	SL.empty();
	SL.print("SL");

	SL = SL2;
	SL.print("SL = SL2");

	StackList<int> SL3;
	SL3.push(2);
	SL3.push(4);
	SL3.push(6);
	SL3.print("SL3");
	SL3.count();

	SL = SL2 = SL3;
	SL.print("SL");
	SL2.print("SL2");

	SL2.pop();
	SL2.print("SL2-1");

	SL2.pop();
	SL2.print("SL2-2");

	SL2.pop();
	SL2.print("SL2-3");
	

	SL2.pop();
	SL2.print("SL2----");

	return 0;
}