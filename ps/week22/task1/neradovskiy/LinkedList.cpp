#include "LinkedList.h"

LinkedList::LinkedList()
	:_pHead(nullptr), _size(0) {}

LinkedList::~LinkedList()
{
	clear();
}

bool LinkedList::empty() const {
	return _pHead == nullptr;
}

void LinkedList::add(int value)
{
	if (_pHead == nullptr) {
		_pHead = new ListNode{ value };
	}
	else
	{
		ListNode* node = _pHead;
		while (node) {
			if (!node->_pNext) {
				node->_pNext = new ListNode{ value };
				break;
			}
			else
				node = node->_pNext;
		}
	}
	++_size;
}

void LinkedList::clear()
{
	ListNode* node = _pHead;
	while (node) {
		ListNode* temp = node;
		node = node->_pNext;
		delete temp;
	}
	_pHead = nullptr;
	_size = 0;
}

void LinkedList::insert(size_t index, int value)
{
	ListNode* node = _pHead;
	size_t count = 0;
	while (node)
	{
		if (count == index) {
			ListNode* temp = new ListNode{ value };
			temp->_pNext = node->_pNext;
			node->_pNext = temp;
			break;
		}
		node = node->_pNext;
		++count;
	}
}
size_t LinkedList::getSize() const
{
	return _size;
}

int LinkedList::getLast() const
{
	ListNode* node = _pHead;
	while (node->_pNext)
	{
		node = node->_pNext;
	}
	return node->_value;
}

void LinkedList::deleteLast()
{
	ListNode* node = _pHead;
	size_t size = getSize();
	if (size < 2)
		clear();
	else {
		for (int i = 0; i < size - 2; ++i)
		{
			node = node->_pNext;
		}
		ListNode* temp = node->_pNext;
		delete temp;
		node->_pNext = nullptr;
	}
	--_size;
}

