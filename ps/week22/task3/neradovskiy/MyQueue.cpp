#include "MyQueue.h"

MyQueue::MyQueue()
{
	_list = new LinkedList;
}

MyQueue::~MyQueue()
{
	delete _list;
}

MyQueue::MyQueue(const MyQueue& other)
{
	_list = new LinkedList(*other._list);
}

void MyQueue::push(int value)
{
	_list->add(value);
}

bool MyQueue::empty() const
{
	return _list->empty();
}

void MyQueue::print() const
{
	_list->print();
}

void MyQueue::pop()
{
	_list->deleteHead();
}

int MyQueue::front()
{
	return _list->getHead();
}

size_t MyQueue::size()
{
	return _list->getSize();
}
