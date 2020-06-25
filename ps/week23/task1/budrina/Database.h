#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
#pragma once
#include <iostream>
#include <string> 

using namespace std;

struct ListViolations
{
	char* violat;
	ListViolations* next;
};

void push(ListViolations*& node, const char* newStr)
{
	ListViolations* tmp = new ListViolations;
	tmp->violat = new char[strlen(newStr) + 1];
	strcpy(tmp->violat, newStr);
	tmp->next = nullptr;

	if (node == nullptr)
		node = tmp;
	else
	{
		tmp->next = node;
		node = tmp;
	}
}

void clearList(ListViolations*& Head)
{
	ListViolations* curr = Head;
	while (curr)
	{
		ListViolations* temp = curr->next;
		delete[] curr->violat;
		delete curr;
		curr = temp;
	}
}

void printList(ListViolations* Head)
{
	ListViolations* curr = Head;
	while (curr)
	{
		cout << curr->violat << endl;
		curr = curr->next;
	}
}

struct TreeNode
{
	TreeNode* parent;
	TreeNode* left;
	TreeNode* right;

	int number;
	ListViolations* list;
};

class Database
{

public:
	Database();
	~Database();

	void add(int value, const char* str);
	void addNode(TreeNode*&, TreeNode*, int, const char*);
	void printAll(TreeNode*);
	void printNumber(int);
	TreeNode* returnRoot();
	void deleteAll(TreeNode* temp);

private:
	int size;
	TreeNode* root;

};

Database::Database()
{
	root = nullptr;
	size = 0;
}
Database::~Database()
{
	deleteAll(root);
}
//метод получени€ корн€
TreeNode* Database::returnRoot()
{
	return root;
}
//метод удалени€ всего
void Database::deleteAll(TreeNode* temp)
{
	if (temp)
	{
		deleteAll(temp->left);
		deleteAll(temp->right);
		clearList(temp->list);
		delete temp;
	}
}

//метод добавлени€ 
void Database::addNode(TreeNode*& head, TreeNode* parent, int value, const char* str)
{
	TreeNode* temp = new TreeNode;
	temp->number = value;
	temp->list = nullptr;
	temp->left = temp->right = temp->parent = nullptr;

	if (!head)
	{
		head = temp;
		push(head->list, str);
	}
	else
	{
		if (value < head->number)
			addNode(head->left, head, value, str);

		else if (value > head->number)
			addNode(head->left, head, value, str);
		else
			push(head->list, str);
	}
}


void Database::add(int value, const char* str)
{
	addNode(root, nullptr, value, str);
}


//метод печати полной базы данных
void Database::printAll(TreeNode* temp)
{
	if (temp)
	{
		printAll(temp->left);
		cout << "Ќомер машины: " << temp->number << endl;
		printList(temp->list);
		printAll(temp->right);
	}
}


void Database::printNumber(int num)
{
	if (root)
	{
		TreeNode* temp = root;
		int k = 0;
		while (temp)
		{
			if (num == temp->number)
			{
				k = 0;
				break;
			}
			if (num < temp->number) {
				++k;
				temp = temp->left;
			}
			else if (num > temp->number) {
				++k;
				temp = temp->right;
			}
		}
		if (k == 0)
		{
			cout << "Ќомер машины: " << temp->number << endl;
			printList(temp->list);
		}
		else
			cout << "ћашины с таким номером в базе нету\n";

	}

}


