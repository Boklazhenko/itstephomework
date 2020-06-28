#include "stack.h"

Stack::Stack() {
	top = empty;
}

void Stack::clear() {
	top = empty;
}

bool Stack::isEmpty() {
	return top == empty;
}

bool Stack::isFull() {
	return top == full;
}

int Stack::getCount() {
	return top + 1;
}

void Stack::push(char c) {
	if (!isFull())
		st[++top] = c;
}

char Stack::pop() {
	if (!isEmpty())
		return st[top--];
	else
		return 0;
}

