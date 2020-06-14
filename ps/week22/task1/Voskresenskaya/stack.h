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
	void push(T value); /*добавление элемента в стек*/
	Elem<T>* pop(); /*извлечение элемента из стека*/
	bool isEmpty ()const;/*проверка существования элементов в списке*/
	T count() const; /*возвращает кол-во элементов в списке*/
	void print () const;/*печатает список*/
	void сlear();
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
		сlear();
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
inline Elem<T>* Stack<T>::pop()//здесь лучше применять умный указатель, так как отдаем указатель на элемент на куче и надо почистить?
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
inline void Stack<T>::сlear()
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

