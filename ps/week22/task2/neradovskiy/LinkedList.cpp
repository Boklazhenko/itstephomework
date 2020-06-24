#include "LinkedList.h"

LinkedList::LinkedList()
	:_pHead(nullptr), _size(0) {}

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

void LinkedList::print() const
{
	ListNode* node = _pHead;
	while (node)
	{
		std::cout << node->_value << std::endl;
		node = node->_pNext;
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

LinkedList LinkedList::getClone() const
{

	return *(new LinkedList(*this));
}

LinkedList LinkedList::operator*(const LinkedList& other) const
{
	ListNode* node = _pHead;
	ListNode* otherNode = other._pHead;
	LinkedList* buff = new LinkedList;
	while (node)
	{
		while (otherNode)
		{
			if (isEqual(node, otherNode) && (!buff->hasAlready(otherNode->_value))) {
				buff->add(otherNode->_value);
				break;
			}
			otherNode = otherNode->_pNext;
		}

		node = node->_pNext;
	}
	return *buff;
}

LinkedList LinkedList::operator+(const LinkedList& other) const
{
	ListNode* node = _pHead;
	LinkedList* buff = new LinkedList(*this);
	while (node)
	{
		buff->add(node->_value);
		node = node->_pNext;
	}
	return *buff;
}

bool LinkedList::hasAlready(int value)
{
	ListNode* node = _pHead;
	while (node)
	{
		if (node->_value == value)
			return true;
		node = node->_pNext;
	}
	return false;
}

bool isEqual(const ListNode* lhs, const ListNode* rhs)
{
	return lhs->_value == rhs->_value;
}

