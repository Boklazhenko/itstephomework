#pragma once
#include <iostream>
template<typename T>
struct Elem
{
	Elem<T>* next;
	T data;
};
template<typename T>
class Stack
{
public:
	Stack(); 
	Stack(const Stack& other);
	~Stack();
	void push(T value); /*���������� �������� � ����*/
	Elem<T>* pop(); /*���������� �������� �� �����*/
	bool isEmpty ()const;/*�������� ������������� ��������� � ������*/
	T count() const; /*���������� ���-�� ��������� � ������*/
	void print () const;/*�������� ������*/
	void �lear();
	/*bool IsFull(); ?????*/


private:
	int _count;
	Elem<T>* _head;
};

template<typename T>
inline Stack<T>::Stack() : _head(nullptr), _count(0) {}

template<typename T>
inline Stack<T>::Stack(const Stack& other)
{
	_head = nullptr;
	Elem <T>* ptr = other._head;
	while (ptr != nullptr)
	{
		push(ptr->data);
		ptr = ptr->next;
	}
}

template<typename T>
inline Stack<T>::~Stack()
{
	if (!isEmpty())
		�lear();
}

template<typename T>
inline void Stack<T>::push(T value)
{
	Elem<T>* ptr = new Elem<T>;
	ptr->data = value;
	ptr->next = nullptr;
	if (isEmpty())
	{
		_head = ptr;
	}
	else
	{
		Elem<T>* node = _head;
		while (node->next != nullptr)
			node = node->next;
		node->next = ptr;

	}
	++_count;
}

template<typename T>
inline Elem<T>* Stack<T>::pop()//����� ����� ��������� ����� ���������, ��� ��� ������ ��������� �� ������� �� ���� � ���� ���������?
{
	if (isEmpty())
	{
		std::cout << " no Elem" << std::endl;
		return nullptr;
	}
	else
	{
		Elem<T>* ptr = _head;
		Elem<T>* ptr1 = _head;
		while (ptr->next != nullptr)
		{
			ptr1 = ptr;
			ptr = ptr->next;
			
		}
		ptr1->next = nullptr;
		--_count;
		return ptr;
	}
}

template<typename T>
inline bool Stack<T>::isEmpty ()const
{
	return _count == 0;
}

template<typename T>
inline T Stack<T>::count() const
{
	return _count;
}

template<typename T>
inline void Stack<T>::print () const
{
	if (isEmpty())
	{
		std::cout << " no Elem" << std::endl;
		return;
	}
	else
	{
		Elem<T>* ptr = _head;
		while (ptr != nullptr)
		{
			std::cout << ptr->data << "  " <<  std::endl;
			ptr = ptr->next;
		}
	}
}

template<typename T>
inline void Stack<T>::�lear()
{
	if (isEmpty())
	{
		std::cout << " no Elem" << std::endl;
		return;
	}
	else
	{
		while (_head->next != nullptr)
		{
			Elem<T>* ptr = _head;
			_head = ptr->next;
			delete ptr;
			--_count;
		}
		delete _head;
		--_count;
	}
}

