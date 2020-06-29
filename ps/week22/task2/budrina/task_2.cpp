
#include "List.h"


int main()
{

	List<int> lst;
	lst.print();
	lst.push_front(5);
	lst.push_front(7);
	lst.push_front(101);
	lst.print();

	lst.pop_back();
	lst.print();
	lst.pop_front();
	lst.print();
	lst.clear();
	lst.print();

	List<int> lst2, lst3;
	lst2.push_front(9);
	lst2.push_front(34);
	lst2.push_front(1);
	lst2.print();
	lst2.removeAt(1);
	lst2.print();
	lst3.push_front(1);
	List<int>* pNewList = new List<int>;
	pNewList = lst2.cloneList();
	lst2.print();
	List<int>* lst4 = lst2 + *pNewList;
	lst4->print();
	
	return 0;
}

