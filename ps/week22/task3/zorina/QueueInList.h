#pragma once
#include <iostream>

template<typename T>
struct Node {
	Node<T>* Next;
	Node<T>* Prev;
	T Data;
};

template<typename T>
class QueueInList {
public:
	QueueInList();
	~QueueInList();
	int getCount() const;
	void push(const T& data);
	void clear();
	bool isEmpty()const;
	void print()const;
	T& getLast() const;
	void deleteLast();
	T& front() const;
	void pop();

private:
	Node<T>* _pHead;
	Node<T>* _pTail;
	int _count;
};
template<typename T>
QueueInList<T>::QueueInList()
	:_pHead(nullptr), _pTail(nullptr), _count(0) {}


template<typename T>
inline QueueInList<T>::~QueueInList() {
	if (!isEmpty())
		clear();
}

template<typename T>
inline int QueueInList<T>::getCount()const {
	return _count;
}


template<typename T>
inline void QueueInList<T>::push(const T& data) {
	Node<T>* node = new  Node<T>;
	node->Data = data;
	node->Next = nullptr;
	node->Prev = _pTail;
	if (_pTail != nullptr)
		_pTail->Next = node;
	if (isEmpty())
		_pTail = _pHead = node;
	else _pTail = node;
	++_count;
}


template<typename T>
inline void QueueInList<T>::clear() {
	while (_pHead->Next != nullptr) {
		Node<T>* toDelete = _pHead;
		_pHead = toDelete->Next;
		_pHead->Prev = 0;
		delete toDelete;
		--_count;
	}
	delete _pHead;
	--_count;
}

template<typename T>
inline bool QueueInList<T>::isEmpty() const {
	return _count == 0;
}

template<typename T>
inline void QueueInList<T>::print() const {
	if (isEmpty()) {
		std::cout << "There`re no elements" << std::endl;
	}
	Node <T>* temp = _pHead;
	while (temp->Next != 0) {
		std::cout << temp->Data << "  ";
		temp = temp->Next;
	}
	std::cout << temp->Data << std::endl;
}


template<typename T>
inline T& QueueInList<T>::getLast() const {
	return _pTail->Data;
}

template<typename T>
inline void QueueInList<T>::deleteLast() {
	Node<T>* lastNode = _pTail;
	_pTail = _pTail->Prev;
	delete lastNode;
	_pTail->Next = nullptr;
	--_count;
}

template<typename T>
inline T& QueueInList<T>::front() const {
	return _pHead->Data;
}

template<typename T>
inline void QueueInList<T>::pop() {
	Node<T>* temp = _pHead;
	if (_count > 1) {
		_pHead = _pHead->Next;
		_pHead->Prev = nullptr;
	}
	_pHead = nullptr;
	delete temp;
	--_count;
}
