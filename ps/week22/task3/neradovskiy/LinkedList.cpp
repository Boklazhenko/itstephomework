#include "LinkedList.h"

LinkedList::LinkedList()
	:_pHead(nullptr), _pTail(_pHead), _size(0) {}

LinkedList::LinkedList(const LinkedList& other)
{
	ListNode* node = other._pHead;
	while (node) {
		add(node->_value);
		node = node->_pNext;
	}
}

LinkedList::~LinkedList()
{
	clear();
}

bool LinkedList::empty() const
{
	return _pHead == nullptr;
}

void LinkedList::add(int value)
{
	if (_pHead == nullptr) {
		_pHead = new ListNode{ value };
		_pTail = _pHead;
	}
	else
	{
		_pTail = new ListNode{ value };
		ListNode* node = _pHead;
		while (node) {
			if (!node->_pNext) {
				node->_pNext = _pTail;
				_pTail->_pPrev = node;
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
		if (count == index && count < _size - 1) {
			ListNode* temp = new ListNode{ value };
			temp->_pNext = node->_pNext;
			temp->_pPrev = node;
			node->_pNext = temp;
			break;
		}
		if (count >= _size - 1) {
			add(value);
			break;
		}
		node = node->_pNext;
		++count;
	}
	++_size;
}

void LinkedList::print() const
{
	ListNode* node = _pHead;
	while (node)
	{
		std::cout << node->_value << std::endl;
		node = node->_pNext;
	}
}

void LinkedList::reversePrint() const
{
	ListNode* node = _pTail;
	while (node)
	{
		std::cout << node->_value << std::endl;
		node = node->_pPrev;
	}
}

size_t LinkedList::getSize() const
{
	return _size;
}

int LinkedList::getLast() const
{
	return _pTail->_value;
}

void LinkedList::deleteLast()
{
	ListNode* nodeLast = _pTail;
	_pTail = _pTail->_pPrev;
	delete nodeLast;
	_pTail->_pNext = nullptr;
	--_size;
}

int LinkedList::getHead() const
{
	return _pHead->_value;
}

void LinkedList::deleteHead()
{
	ListNode* node = _pHead;
	if (_size > 1) {
		_pHead = _pHead->_pNext;
		_pHead->_pPrev = nullptr;
	}
	else {
		_pHead = nullptr;
	}
	delete node;
	--_size;
}


