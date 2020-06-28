#pragma once
template<typename T>
class LinkedList {

public:
	LinkedList();
	~LinkedList();
	LinkedList(const LinkedList& other);
	void popFront();
	void popBack();
	void pushFront(T data);
	void pushBack(T data);
	int getSize() const;
	void clear();
	void insert(T data, const int index);
	void remove(const int index);
	void print()const;
	T& operator[](const int index) const;
	LinkedList<T>& clone();
	LinkedList<T>& operator* (const LinkedList& other) const;
	LinkedList<T>& operator+ (const LinkedList& other) const;


private:
	template<typename T>
	class Node {
	public:
		Node(T data = T(), Node* pNext = nullptr)
			:_data(data), _pNext(pNext) {}
		T _data;
		Node <T>* _pNext;
	};

private:
	bool isEqual(const Node<T>* lhs, const Node<T>*rhs)const;


private:
	Node<T>* _pHead;
	int _size;
};

template<typename T>
inline LinkedList<T>::LinkedList()
	: _size(0), _pHead(nullptr) {}

template<typename T>
inline LinkedList<T>::~LinkedList() {
	clear();
}

template<typename T>
inline LinkedList<T>::LinkedList(const LinkedList& other) {
	Node<T>* node = other._pHead;
	while (node) {
		pushBack(node->_data);
		node = node->_pNext;
	}
}

template<typename T>
inline void LinkedList<T>::popFront() {
	Node<T>* temp = _pHead;
	_pHead = _pHead->_pNext;
	delete temp;
	--_size;
}

template<typename T>
inline void LinkedList<T>::popBack() {
	remove(_size - 1);
}

template<typename T>
inline void LinkedList<T>::pushFront(T data) {
	_pHead = new Node<T>(data, _pHead);
	++_size;
}

template<typename T>
inline void LinkedList<T>::pushBack(T data) {
	if (_pHead == nullptr)
		_pHead = new Node<T>(data);
	else {
		Node <T>* current = _pHead;
		while (current->_pNext != nullptr)
			current = current->_pNext;
		current->_pNext = new Node<T>(data);
	}
	++_size;
}

template<typename T>
inline int LinkedList<T>::getSize() const {
	return _size;
}

template<typename T>
inline void LinkedList<T>::clear() {
	while (_size)
		popFront();
}

template<typename T>
inline void LinkedList<T>::insert(T data, const int index) {
	if (index == 0)
		pushFront();
	Node<T>* prev = _pHead;
	for (int i = 0; i < index - 1; ++i)
		prev = prev->_pNext;
	prev->_pNext = new Node <T>(data, prev->_pNext);
	++_size;

}

template<typename T>
inline void LinkedList<T>::remove(const int index) {
	if (index == 0)
		popBack();
	Node<T>* prev = _pHead;
	for (int i = 0; i < index - 1; ++i)
		prev = prev->_pNext;
	Node <T>* toDelete = prev->_pNext;
	prev->_pNext = toDelete->_pNext;
	delete toDelete;
	--_size;
}

template<typename T>
inline void LinkedList<T>::print() const {
	Node<T>* node = _pHead;
	while (node){
		std::cout << node->_data<<"  ";
		node = node->_pNext;
	}
}

template<typename T>
inline T& LinkedList<T>::operator[](const int index) const {
	int counter = 0;
	Node <T>* current = _pHead;
	while (current != nullptr) {
		if (counter == index)
			return current->_data;
		current = current->_pNext;
		++counter;
	}
}

template<typename T>
inline LinkedList<T>& LinkedList<T>::clone() {
	LinkedList<T>* pNewList = new LinkedList<T>;
	Node <T>* temp = _pHead;
	while (temp != nullptr)	{
		pNewList->pushBack(temp->_data);
		temp = temp->_pNext;
	}
	return *pNewList;
}

template<typename T>
inline LinkedList<T>& LinkedList<T>::operator*(const LinkedList& other) const {
	Node<T>* node = _pHead;
	Node<T>* otherNode = other._pHead;
	LinkedList* newLinkedList = new LinkedList;
	while (node) {
		while (otherNode) {
			if (isEqual(node, otherNode)) {
				newLinkedList->pushBack(otherNode->_data);
			}
			otherNode = otherNode->_pNext;
		}
		node = node->_pNext;
	}
	return *newLinkedList;
}

template<typename T>
inline LinkedList<T>& LinkedList<T>::operator+(const LinkedList& other) const {
	Node<T>* node = other._pHead;
	LinkedList* newLinkedList = new LinkedList(*this);
	while (node) {
		newLinkedList->pushBack(node->_data);
		node = node->_pNext;
	}
	return *newLinkedList;
}


template<typename T>
inline bool LinkedList<T>::isEqual(const Node<T>* lhs, const Node<T> *rhs) const {
	return lhs->_data == rhs->_data;
}