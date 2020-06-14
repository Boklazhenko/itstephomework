#pragma once
#include "LinkedList.h"
class MyQueue {
public:
	MyQueue();
	~MyQueue();
	MyQueue(const MyQueue& other);
	void push(int value);
	bool empty() const;
	void print() const;
	void pop();
	int front();
	size_t size();
private:
	LinkedList* _list;
};