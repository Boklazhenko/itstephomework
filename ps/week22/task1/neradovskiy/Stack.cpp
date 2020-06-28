#include "Stack.h"

Stack::Stack()
{
	_list = new LinkedList;
}

Stack::~Stack()
{
	delete _list;
}

Stack::Stack(const Stack& other)
{
	_list = new LinkedList(*other._list);
}

void Stack::push(const int value)
{
	_list->add(value);
}

bool Stack::empty() const
{
	return _list->empty();
}

void Stack::pop()
{
	_list->deleteLast();
}

int Stack::top() const
{
	return _list->getLast();
}

size_t Stack::size() const
{
	return _list->getSize();
}
