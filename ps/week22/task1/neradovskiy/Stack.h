#pragma once
#include "LinkedList.h"
class  Stack
{
public:
	Stack();
	~ Stack();
	Stack(const Stack& other);
	void push(const int value);
	bool empty() const;
	void pop();
	int top() const;
	size_t size() const;
private:
	LinkedList* _list;
};