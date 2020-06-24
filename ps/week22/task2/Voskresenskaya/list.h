#pragma once
#include <iostream>
template<typename T>
struct Elem
{
	Elem<T>* next;
	T data;
};
template<typename T>
class List
{
public:
	List();
	List(const List<T>& other);
	~List();
	void pushFront(T data);//добавляет элемент в начало списка 
	void pushBack(T data); // добавляет данные в конец списка
	Elem<T>* popFront(); // возвращает и удаляет первый элемент из списка
	Elem<T>* popBack();// удаляет последний элемент из списка
	int size();
	void clear();//удаляет все элементы списка
	void insert(T data, int index); //добавляет данные по индексу
	void remuveAt(int index);
	bool isEmpty()const;//пустой ли список
	void print() const;/*печатает список*/
	List<T>* clonеList(); //клонирует лист
	List<T>* operator +  (List<T>& other);
	List<T>* operator * (List<T>& other);
private:
	int _size;
	Elem<T>* _head;
};
template<typename T>
List<T>::List()
	:_size(0), _head(nullptr) {}

template<typename T>
inline List<T>::List(const List<T>& other)
{
	_head = nullptr;
	Elem <T>* ptr = other._head;
	while (ptr != nullptr)
	{
		pushBack(ptr->data);
		ptr = ptr->next;
	}
}

template<typename T>
List<T>::~List()
{
	if (!isEmpty())
		clear();
}

template<typename T>
inline Elem<T>* List<T>::popFront()
{
	if (isEmpty())
	{
		std::cout << " no Elem" << std::endl;
		return nullptr;
	}
	else
	{
		Elem<T>* ptr = _head;
		_head = _head->next;
		--_size;

		return ptr;
	}
}

template<typename T>
inline void List<T>::pushBack(T value)
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
	++_size;
}

template<typename T>
inline int List<T>::size()
{
	return _size;
}

template<typename T>
inline void List<T>::clear()
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
			--_size;
		}
		delete _head;
		--_size;
	}
}

template<typename T>
inline void List<T>::insert(T data, int index)
{
	if (index < 0 || index > _size)
	{
		std::cout << "bad index" << std::endl;
		return;
	}
	int count = 2;
	Elem<T>* beforPtr;
	Elem<T>* afterPtr;
	Elem<T>* ptr;
	ptr = _head;
	while (count < index)
	{
		ptr = ptr->next;
		++count;
	}
	beforPtr = ptr;
	afterPtr = ptr->next;
	Elem<T>* tmp = new Elem<T>;
	tmp->data = data;
	tmp->next = afterPtr;
	beforPtr->next = tmp;
	++_size;
}

template<typename T>
inline void List<T>::remuveAt(int index)
{
	if (index < 0 || index > _size)
	{
		std::cout << "bad index" << std::endl;
		return;
	}
	int count = 2;
	Elem<T>* beforPtr;
	Elem<T>* afterPtr;
	Elem<T>* del;
	Elem<T>* ptr;
	ptr = _head;
	while (count < index)
	{
		ptr = ptr->next;
		++count;
	}
	beforPtr = ptr;
	del = ptr->next;
	afterPtr = del->next;
	beforPtr->next = afterPtr;
	delete del;
	--_size;
}

template<typename T>
inline void List<T>::pushFront(T value)
{
	Elem<T>* ptr = new Elem<T>;
	ptr->data = value;
	ptr->next = _head;
	_head = ptr;
	++_size;
}

template<typename T>
inline Elem<T>* List<T>::popBack()
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
		--_size;
		return ptr;
	}
}

template<typename T>
inline bool List<T>::isEmpty() const
{
	return _size == 0;
}

template<typename T>
inline void List<T>::print() const
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
			std::cout << ptr->data << "  " << std::endl;
			ptr = ptr->next;
		}
	}
}

template<typename T>
inline List<T>* List<T>::clonеList()
{
	List<T>* pNewList = new List<T>;
	Elem <T>* ptr = _head;
	while (ptr != nullptr)
	{
		pNewList->pushBack(ptr->data);
		ptr = ptr->next;
	}
	return pNewList;
}

template<typename T>
inline List<T>* List<T>::operator +(List<T>& other)
{
	Elem <T>* ptr = _head;
	while (ptr->next != nullptr)
	{
		ptr = ptr->next;
	}
	ptr = other._head;
	while (ptr->next != nullptr)
	{
		pushBack(ptr->data);
		ptr = ptr->next;
	}
	pushBack(ptr->data);
	return  this;
}

template<typename T>
inline List<T>* List<T>::operator*(List<T>& other)
{
	List<T>* pNewList = new List<T>;
	Elem <T>* tmp = _head;
	while (tmp != nullptr && (!isEmpty()))
	{
		T key = _head->data;
		Elem <T>* ptr = other._head;
		while (ptr != nullptr)
		{
			if (ptr->data == key)
			{
				pNewList->pushBack(key);
				break;

			}
			ptr = ptr->next;
		}
		Elem <T>* del = _head;
		Elem<T>* beforDel = _head;
		Elem<T>* afterDel;
		Elem<T>* forDel = _head;

		while (del != nullptr)
		{

			if (del->data != key)
			{
				beforDel = del;
				del = del->next;
			}

			if (del->data == key)
			{
				afterDel = del->next;
				forDel = del;

				if (beforDel != _head)
				{
					beforDel->next = afterDel;
				}
				if (del == _head)
				{
					_head = del->next;
				}
				del = del->next;
				delete forDel;
				--_size;
			}
		}
	}
	return pNewList;
}
