// hw3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "QueueInList.h"

int main()
{
	QueueInList<int> qLst;
	qLst.push(56);
	qLst.push(9898);
	qLst.push(777);
	qLst.print();
	std::cout<<qLst.front()<<std::endl;
	std::cout << qLst.getLast() << std::endl;
	}