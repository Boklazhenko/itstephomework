#pragma once
#include <iostream>
template<typename T>
struct ListNode {
	T _value;
	ListNode* _pNext = nullptr;
	ListNode* _pPrev = nullptr;
};
template<typename T>
class  LinkedList
{
public:
	LinkedList()
		:_pHead(nullptr), _pTail(_pHead), _size(0) {}

	LinkedList(const LinkedList& other) {
		ListNode<T>* node = other._pHead;
		while (node) {
			add(node->_value);
			node = node->_pNext;
		}
	}

	~LinkedList()
	{
		clear();
	}

	bool empty() const {
		return _pHead == nullptr;
	}

	void add(const T& value)
	{
		if (_pHead == nullptr) {
			_pHead = new ListNode<T>{ value };
			_pTail = _pHead;
		}
		else
		{
			_pTail = new ListNode<T>{ value };
			ListNode<T>* node = _pHead;
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
	void clear()
	{
		ListNode<T>* node = _pHead;
		while (node) {
			ListNode<T>* temp = node;
			node = node->_pNext;
			delete temp;
		}
		_pHead = nullptr;
		_size = 0;
	}

	void insert(size_t index, T& value)
	{
		ListNode<T>* node = _pHead;
		size_t count = 0;
		while (node)
		{
			if (count == index && count < _size - 1) {
				ListNode<T>* temp = new ListNode<T>{ value };
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

	void print() const
	{
		ListNode<T>* node = _pHead;
		while (node)
		{
			std::cout << node->_value << std::endl;
			node = node->_pNext;
		}
	}

	void reversePrint() const
	{
		ListNode<T>* node = _pTail;
		while (node)
		{
			std::cout << node->_value << std::endl;
			node = node->_pPrev;
		}
	}


	size_t getSize() const
	{
		return _size;
	}

	T getLast() const
	{
		return _pTail->_value;
	}


	void deleteLast()
	{
		ListNode<T>* nodeLast = _pTail;
		_pTail = _pTail->_pPrev;
		delete nodeLast;
		_pTail->_pNext = nullptr;
		--_size;
	}

	ListNode<T>* getHead() const
	{
		return _pHead;
	}

	void deleteHead()
	{
		ListNode<T>* node = _pHead;
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
	ListNode<T>* getNode(ListNode<T>* node) {
		ListNode<T>* temp = _pHead;
		while (temp)
		{
			if (node->_value == temp->_value)  //!!!!
				return temp;
			temp = temp->_pNext;
		}
		return nullptr;
	}

	void deleteAt(size_t index) {
		ListNode<T>* node = _pHead;
		size_t count = 0;
		if (index == 0)
			deleteHead();
		if (index == _size - 1)
			deleteLast();
		else
		{
			while (node)
			{
				if (count == index && count <= _size - 1) {
					ListNode<T>* prev = node->_pPrev;
					ListNode<T>* next = node->_pNext;
					if (next)
						next->_pPrev = prev;
					if (prev)
						prev->_pNext = next;
					delete node;
					--_size;
					break;
				}
				if (count >= _size) {
					std::cout << "Error" << std::endl;
					break;
				}
				++count;
				node = node->_pNext;
			}
		}
	}

private:
	ListNode<T>* _pHead;
	ListNode<T>* _pTail;
	size_t _size;
};

