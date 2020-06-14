
#include "list.h"
#include <iostream>

int main()
{
	
	List<int> list;
	list.pushBack(1);
	list.pushBack(2);
	list.pushBack(3);
	list.pushBack(4);
	list.pushFront(1);
	list.pushFront(2);
	list.pushFront(3);
	list.pushFront(4);
	list.popFront();
	list.popBack();
	list.insert(9, 5);
	list.remuveAt(5);
	List<int> newList;
	List<int>* pNewList = new List<int>;
	pNewList = list.clonеList();
	/*pNewList->print();*/
	List<int>* lists = list + *pNewList;
	List<int>* comElem;
	comElem = *lists * list;
	comElem->print();
  
	
}


