#pragma once
#include <iostream>
#include <string.h>
#include <time.h>

class Stek
{
public:
	Stek();
	~Stek();
	void push(char c);
	char pop();
	void clear();
	bool isEmpty();
	bool isFull();
	int getCount();

private:
	int _top;
	enum {
		_empty = -1, 
		_full=20
	};
	char _st[_full+1];
};

