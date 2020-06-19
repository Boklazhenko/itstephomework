// hw2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "LinkedList.h"

int main()
{
	LinkedList<int> lst;
	lst.pushBack(35);
	lst.pushBack(45);
	lst.print();
	std::cout << std::endl;
	LinkedList<int> lst1 = lst.clone();
	lst1.print();
	std::cout << std::endl;
	lst1.pushBack(35);
	lst1.pushBack(66);
	lst1.pushBack(45);
	lst1.print();
	std::cout << std::endl;
	LinkedList<int> lst2 = lst * lst1;
	lst2.print();
	std::cout << std::endl;
	lst1.print();
	std::cout << std::endl;
	LinkedList<int> lst3 = lst + lst1;
	lst3.print();
}

