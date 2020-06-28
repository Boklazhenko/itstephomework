#pragma once

class Stack {
	enum { empty = -1, full = 21 };
	char st[full + 1];
	int top;
public:
	Stack();
	void push(char c);
	char pop();
	void clear();
	bool isEmpty();
	bool isFull();
	int getCount();
};