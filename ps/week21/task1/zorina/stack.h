#pragma once

class Stack {

public:
	Stack();
	void push(char);
	char pop();
	void clean();
	bool isEmpty()const;
	bool isFull()const;
	int getCount()const;


private:
	int _top;
	enum { Empty = -1, Full = 20 };
	char _str[Full + 1];
};
