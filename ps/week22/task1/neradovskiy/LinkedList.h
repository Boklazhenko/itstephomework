#pragma once
#include <iostream>
struct ListNode {
	int _value;
	ListNode* _pNext = nullptr;
};
class  LinkedList
{
public:
	LinkedList();

	~LinkedList();
	bool empty() const;
	void add(int value);
	void clear();
	void insert(size_t index, int value);
	size_t getSize() const;
	int getLast() const;
	void deleteLast();
private:
	ListNode* _pHead;
	size_t _size;
};
