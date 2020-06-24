
#include <iostream>
#include "queneList.h"
int main()
{
	QueneList<int> list;
	list.add(5);
	list.add(7);
	list.add(9);
	list.add(3);
	list.show();
	Elem<int>* elem = list.extract();
	list.showElem(elem);
	list.show();
	std::cout << list.count();
	list.clearAll();
	std::cout << list.count();
	return 0;
}