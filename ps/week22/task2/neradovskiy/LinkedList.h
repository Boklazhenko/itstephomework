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
	LinkedList(const LinkedList& other);
	~LinkedList();
	bool empty() const;
	void add(int value);
	void clear();
	void insert(size_t index, int value);
	void print() const;
	size_t getSize() const;
	int getLast() const;
	void deleteLast();
	LinkedList getClone() const;
	LinkedList operator* (const LinkedList& other) const;
	LinkedList operator+ (const LinkedList& other) const;
private:
	bool hasAlready(int value);
private:
	ListNode* _pHead;
	size_t _size;
};

bool isEqual(const ListNode* lhs, const ListNode* rhs);
