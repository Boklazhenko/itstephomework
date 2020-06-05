#include "stack.h"

Stack::Stack()
	:_top(Empty) {}

void Stack::push(char someChar) {
	if (!isFull())
	_str[++_top] = someChar;
}

char Stack::pop() {
	if (!isEmpty())
		return _str[_top--];
	return 0;
}

void Stack::clean() {
	_top = Empty;
}

bool Stack::isEmpty() const {
	return _top == Empty;
}

bool Stack::isFull() const {
	return _top == Full;
}

int Stack::getCount() const {
	return _top + 1;
}
