#pragma once
#include <list>     // ���������� ��������� ������
#include <iterator> // ��������� ����������
#include <iostream>
#include <string> 
struct Node
{
	std::list <std::string> kvmtant;
	std::string num�ar;
	Node* left = nullptr;
	Node* right = nullptr;
};
class Tree
{
public:
	Tree();
	~Tree();
	void insert(std::string num�ar, std::string violation);//������� � ������
	Node* search(std::string num�ar); //����� ��������*/
	void destroyTree();//��������� ������
	void inorderPrint();//���������� ������
	void elemPrint(std::string num�ar);
private:
	void destroyTree(Node* elem);
	void insert(std::string num�ar, std::string violation, Node* elem);
	Node* search(std::string num�ar, Node* elem);
	void inorderPrint(Node* elem);
private:
	Node* root;
};
Tree::Tree()
{
	root = nullptr;
}
Tree::~Tree()
{
	destroyTree();
}
void Tree::destroyTree(Node* elem)
{
	if (elem != nullptr)
	{
		destroyTree(elem->left);
		destroyTree(elem->right);
		elem->kvmtant.clear();
		delete elem;
	}
}
void Tree::destroyTree()
{
	destroyTree(root);
}
inline void Tree::inorderPrint()
{
	inorderPrint(root);
	std::cout << std::endl;
}
void Tree::insert(std::string num�ar, std::string violation, Node* elem)
{
	if (num�ar < elem->num�ar)
	{
		if (elem->left != nullptr)
		{
			insert(num�ar, violation, elem->left);
		}
		else
		{
			elem->left = new Node;
			elem->left->num�ar = num�ar;
			elem->left->kvmtant.push_back(violation);
		}
	}
	else if (num�ar > elem->num�ar)
	{
		if (elem->right != nullptr)
		{
			insert(num�ar, violation, elem->right);
		}
		else
		{
			elem->right = new Node;
			elem->right->num�ar = num�ar;
			elem->kvmtant.push_back(violation);
		}
	}
	else
	{
		elem->kvmtant.push_back(violation);
	}
}
inline void Tree::insert(std::string num�ar, std::string violation)
{
	if (root != nullptr)
		insert(num�ar, violation, root);
	else
	{
		root = new Node;
		root->num�ar = num�ar;
		root->kvmtant.push_back(violation);
	}
}
inline void Tree::inorderPrint(Node* elem)
{

	if (elem != nullptr)
	{
		inorderPrint(elem->left);
		std::cout << elem->num�ar << ":  ";
		copy(elem->kvmtant.begin(), elem->kvmtant.end(), std::ostream_iterator<std::string>(std::cout, " "));
		std::cout << std::endl;
		inorderPrint(elem->right);
	}
}
inline Node* Tree::search(std::string num�ar)
{
	return search(num�ar, root);
}
inline Node* Tree::search(std::string num�ar, Node* elem)
{
	if (elem != nullptr)
	{
		if (elem->num�ar == num�ar)
		{
			return elem;
		}

		if (elem->num�ar > num�ar)
		{
			return search(num�ar, elem->left);
		}
		if (elem->num�ar < num�ar)
		{
			return search(num�ar, elem->right);
		}
	}
	else
	{
		return nullptr;
	}
}
inline void Tree::elemPrint(std::string num�ar)
{
	Node* elem = search(num�ar);
	if (elem != nullptr)
	{
		std::cout << elem->num�ar << ":  ";
		copy(elem->kvmtant.begin(), elem->kvmtant.end(), std::ostream_iterator<std::string>(std::cout, " "));
		std::cout << std::endl;
	}
	else
	{
		std::cout << "no number" << std::endl;
	}
}