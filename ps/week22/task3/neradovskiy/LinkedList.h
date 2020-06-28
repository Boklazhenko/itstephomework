#pragma once
#include <iostream>
struct ListNode {
	int _value;
	ListNode* _pNext = nullptr;
	ListNode* _pPrev = nullptr;
};
class  LinkedList
{
public:
	LinkedList();
	LinkedList(const LinkedList& other);
	~LinkedList();
	bool empty() const;
	void add(int value);
	void clear();
	void insert(size_t index, int value);
	void print() const;
	void reversePrint() const;
	size_t getSize() const;
	int getLast() const;
	void deleteLast();
	int getHead() const;
	void deleteHead();
private:
	ListNode* _pHead;
	ListNode* _pTail;
	size_t _size;
};

