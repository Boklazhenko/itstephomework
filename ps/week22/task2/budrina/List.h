#pragma once

#include <iostream>
using namespace std;

template <typename T>
class List
{
public:
	List();
	~List();

	void pop_front();

	void push_back(T data);

	void clear();

	int getSize() { return _size; }

	T& operator[](const int index);

	void push_front(T data);

	void insert(T data, int index);

	void removeAt(int index);

	void pop_back();

	void print();

	bool empty()const {
		return _head == nullptr;
	}

	List<T>* cloneList();

	List<T>* operator +(List<T>& other);

	List<T>* operator *(List<T>& other);



	template<typename T>
	class Node
	{
	public:
		Node<T>* _pNext;
		T _data;

		Node(T data = T(), Node* pNext = nullptr)
		{
			this->_data = data;
			this->_pNext = pNext;
		}
	};
private:
	int _size;
	Node<T>* _head;
};


template<typename T>
List<T>::List()
{
	_size = 0;
	_head = nullptr;
}


template<typename T>
List<T>::~List()
{
	clear();
}


template<typename T>
void List<T>::pop_front()
{
	Node<T>* temp = _head;

	_head = _head->_pNext;

	delete temp;

	_size--;
	cout << "\npop_front " << "\n";

}

template<typename T>
void List<T>::push_back(T data)
{
	if (_head == nullptr)
	{
		_head = new Node<T>(data);
	}
	else
	{
		Node<T>* current = this->_head;

		while (current->_pNext != nullptr)
		{
			current = current->_pNext;
		}
		current->_pNext = new Node<T>(data);

	}

	_size++;
}



template<typename T>
void List<T>::clear()
{
	Node<T>* node = _head;
	while (node != nullptr) {
		Node<T>* temp = node;

		node = node->_pNext;
		delete temp;
	}
	_head = nullptr;
}


template<typename T>
T& List<T>::operator[](const int index)
{
	int counter = 0;

	Node<T>* current = this->_head;

	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->_data;
		}
		current = current->_pNext;
		counter++;
	}
}

template<typename T>
void List<T>::push_front(T data)
{
	_head = new Node<T>(data, _head);
	_size++;
}

template<typename T>
void List<T>::insert(T data, int index)
{

	if (index == 0)
	{
		push_front(data);
	}
	else
	{
		Node<T>* previous = this->_head;

		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->_pNext;
		}

		Node<T>* newNode = new Node<T>(data, previous->_pNext);

		previous->_pNext = newNode;

		_size++;
	}

}

template<typename T>
void List<T>::removeAt(int index)
{
	if (index == 0)
	{
		pop_front();
	}
	else
	{
		Node<T>* previous = this->_head;
		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->_pNext;
		}


		Node<T>* toDelete = previous->_pNext;

		previous->_pNext = toDelete->_pNext;

		delete toDelete;

		_size--;
	}

}

template<typename T>
void List<T>::pop_back()
{
	cout << "pop_back " << "\n";
	removeAt(_size - 1);
}

template<typename T>
void List<T>::print() {

	if (empty())
		cout << "\nThe list is empty \n";
	else
	{
		Node<T>* current;
		current = _head;

		while (current != nullptr) {
			cout << current->_data << " ";
			current = current->_pNext;
		}
		cout << endl;
	}

}

template<typename T>
inline List<T>* List<T>::cloneList()
{
	List<T>* pNewList = new List<T>;
	Node <T>* ptr = _head;
	while (ptr != nullptr)
	{
		pNewList->push_back(ptr->_data);
		ptr = ptr->_pNext;
	}
	return pNewList;
}

template<typename T>
inline List<T>* List<T>::operator +(List<T>& other)
{
	Node <T>* ptr = _head;
	while (ptr->_pNext != nullptr)
	{
		ptr = ptr->_pNext;
	}
	ptr = other._head;
	while (ptr->_pNext != nullptr)
	{
		push_back(ptr->_data);
		ptr = ptr->_pNext;
	}
	push_back(ptr->_data);
	return  this;
}

template<typename T>
inline List<T>* List<T>::operator*(List<T>& other)
{
	List<T>* pNewList = new List<T>;
	Node <T>* tmp = _head;
	while (tmp != nullptr && (!empty()))
	{
		T key = _head->_data;
		Node <T>* ptr = other._head;
		while (ptr != nullptr)
		{
			if (ptr->_data == key)
			{
				pNewList->push_back(key);
				break;

			}
			ptr = ptr->_pNext;
		}
		Node <T>* del = _head;
		Node<T>* beforDel = _head;
		Node<T>* afterDel;
		Node<T>* forDel = _head;

		while (del != nullptr)
		{

			if (del->_data != key)
			{
				beforDel = del;
				del = del->_pNext;
			}

			if (del->_data == key)
			{
				afterDel = del->_pNext;
				forDel = del;

				if (beforDel != _head)
				{
					beforDel->_pNext = afterDel;
				}
				if (del == _head)
				{
					_head = del->_pNext;
				}
				del = del->_pNext;
				delete forDel;
				--_size;
			}
		}

	}
	return pNewList;
}

