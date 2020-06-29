#pragma once

#include <iostream>
using namespace std;

// ���������, ����������� ����
template <typename T>
struct NodeStack
{
	T item;
	NodeStack<T>* next;
};

// ��������� ����� ���� �� ���� ������������ ������
template <typename T>
class StackList
{

public:
	// ����������� �� ���������
	StackList() { pTop = nullptr; }

	// ����������� �����������
	StackList(const StackList& SL)
	{
		NodeStack<T>* p; // �������������� ���������
		NodeStack<T>* p2;
		NodeStack<T>* p3;

		pTop = nullptr;
		p3 = nullptr;

		p = SL.pTop; // ��������� p �������� �� ������ SL.pTop->...
		while (p != nullptr)
		{
			// 1. ������������ ���� p2
			try {
				// ������� ��������� ������
				p2 = new NodeStack<T>;
			}
			catch (bad_alloc e)
			{
				// ���� ������ �� ��������, �� �����
				cout << e.what() << endl;
				return;
			}
			p2->item = p->item;
			p2->next = nullptr;

			// 2. pTop = pTop + p2
			if (pTop == nullptr) // ������� �������
			{
				pTop = p2;
				p3 = p2;
			}
			else
			{
				p3->next = p2;
				p3 = p3->next;
			}

			// 3. ������� �� ��������� �������
			p = p->next;
		}
	}

	// ��������� ������� � ����
	// ������� ���������� �� ������ ������
	void push(T item)
	{
		NodeStack<T>* p;

		// 1. ������������ �������
		try {
			p = new NodeStack<T>; // ������� �������� ������
		}
		catch (bad_alloc e)
		{
			// ���� ������ �� ����������, �� �����
			cout << e.what() << endl;
			return;
		}
		p->item = item;
		p->next = pTop; // p ��������� �� 1-� �������

		// 2. ������������� pTop �� p
		pTop = p;
	}

	// ���������� ��������� � �����
	int count()
	{
		if (pTop == nullptr)
			return 0;
		else
		{
			NodeStack<T>* p = pTop;
			int count = 0;

			while (p != nullptr)
			{

				count++;
				p = p->next;

			}
			cout << "Counter :" << count << "\n\n";
		}
	}

	// ������� ���� - ������� ��� �������� �� �����
	void empty()
	{
		NodeStack<T>* p; // �������������� ���������
		NodeStack<T>* p2;

		p = pTop;

		while (p != nullptr)
		{
			p2 = p; // ������� ����� �� p
			p = p->next; // ������� �� ��������� ������� �����
			delete p2; // ������� ������, ���������� ��� ����������� ��������
		}
		pTop = nullptr; // ��������� ������� �����

	}

	// �������� �����������
	StackList<T>& operator=(const StackList<T>& LS)
	{
		// ���� �� �������� � �����?
		if (pTop != nullptr) empty();

		NodeStack<T>* p; // �������������� ���������
		NodeStack<T>* p2;
		NodeStack<T>* p3;

		// ���������������� pTop
		pTop = nullptr;
		p3 = nullptr;

		p = LS.pTop; // ��������� p ��������� �� ������ SL.pTop->...
		while (p != nullptr)
		{
			// 1. ������������ ���� p2
			try {
				// ������� �������� ������
				p2 = new NodeStack<T>;
			}
			catch (bad_alloc e)
			{
				// ���� ������ �� ��������, �� �����
				cout << e.what() << endl;
				return *this;
			}
			p2->item = p->item;
			p2->next = nullptr;

			// 2. pTop = pTop + p2
			if (pTop == nullptr) // ������� ����
			{
				pTop = p2;
				p3 = p2;
			}
			else
			{
				p3->next = p2;
				p3 = p3->next;
			}

			// 3. ������� �� ��������� �������
			p = p->next;
		}
		return *this;
	}

	// ����� �����
	void print(const char* objName)
	{
		cout << "Object: " << objName << endl;
		if (pTop == nullptr)
			cout << "Stack is empty." << "\n\n";
		else
		{
			NodeStack<T>* p; // �������������� ���������
			p = pTop;
			while (p != nullptr)
			{
				cout << p->item << "\t";
				p = p->next;
			}
			cout << endl;
		}
	}

	// ����������
	~StackList()
	{
		empty();
	}

	// �����, ������������(���������) ������� �� �����
	T pop()
	{
		// ��������, ���� �� ����?
		if (pTop == nullptr)
			return 0;

		NodeStack<T>* p2; // �������������� ���������
		T item;
		item = pTop->item;

		// ������������� ��������� pTop, p2
		p2 = pTop;
		pTop = pTop->next;

		// ���������� ������, ���������� ��� 1-� �������
		delete p2;

		cout << "pop = " << item << endl;
		// ������� item
		return item;


	}

private:
	NodeStack<T>* pTop; // ��������� �� ������� �����
};
