#include <iostream>
#include "queue.h"

//Queue::Queue(int m)
//{
//	maxQueueLength = m;
//	wait = new int[maxQueueLength];
//	priority = new int[maxQueueLength];
//	currentQueueLength = 0;
//}
//
//Queue::~Queue()
//{
//	delete[]wait;
//	delete[]priority;
//}
//
//void Queue::add(int c, int p)
//{
//	if (!isFull()) 
//	{
//		wait[currentQueueLength] = c;
//		priority[currentQueueLength] = p;
//		currentQueueLength++;
//	}
//}

int Queue::extract()
{
	if (!isEmpty())
	{
		int maxPr = 1;
		int posMaxPr = 0;
		for (int i = 1; i < currentQueueLength; i++)
		{
			if (maxPr<priority[i])
			{
				maxPr = priority[i];
				posMaxPr = i;
			}
		}
		int temp1 = wait[posMaxPr];
		int temp2 = priority[posMaxPr];
		for (int i = posMaxPr; i < currentQueueLength; i++)
		{
			wait[i] = wait[i + 1];
			priority[i] = priority[i + 1];
		}
		currentQueueLength--;
		return temp1;
	}
	else return -1;
}

void Queue::clear()
{
	currentQueueLength = 0;
}

bool Queue::isEmpty()
{
	return currentQueueLength == 0;
}

bool Queue::isFull()
{
	return currentQueueLength == maxQueueLength;
}

int Queue::getCount()
{
	return currentQueueLength;
}

void Queue::show()
{
	for (int i = 0; i < currentQueueLength; i++)
	{
		std::cout << "value:" << wait[i] << "    priority: " << priority[i] << std::endl;;
	}
}