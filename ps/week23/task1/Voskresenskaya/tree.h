#pragma once
#include <list>     // ïîäêëş÷àåì çàãîëîâîê ñïèñêà
#include <iterator> // çàãîëîâîê èòåğàòîğîâ
#include <iostream>
#include <string> 
struct Node
{
	std::list <std::string> kvmtant;
	std::string numÑar;
	Node* left = nullptr;
	Node* right = nullptr;
};
class Tree
{
public:
	Tree();
	~Tree();
	void insert(std::string numÑar, std::string violation);//âñòàâêà â äåğåâî
	Node* search(std::string numÑar); //ïîèñê ıëåìåíòà*/
	void destroyTree();//ğàçğóøèòü äåğåâî
	void inorderPrint();//íàïå÷àòàòü äåğåâî
	void elemPrint(std::string numÑar);
private:
	void destroyTree(Node* elem);
	void insert(std::string numÑar, std::string violation, Node* elem);
	Node* search(std::string numÑar, Node* elem);
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
void Tree::insert(std::string numÑar, std::string violation, Node* elem)
{
	if (numÑar < elem->numÑar)
	{
		if (elem->left != nullptr)
		{
			insert(numÑar, violation, elem->left);
		}
		else
		{
			elem->left = new Node;
			elem->left->numÑar = numÑar;
			elem->left->kvmtant.push_back(violation);
		}
	}
	else if (numÑar > elem->numÑar)
	{
		if (elem->right != nullptr)
		{
			insert(numÑar, violation, elem->right);
		}
		else
		{
			elem->right = new Node;
			elem->right->numÑar = numÑar;
			elem->kvmtant.push_back(violation);
		}
	}
	else
	{
		elem->kvmtant.push_back(violation);
	}
}
inline void Tree::insert(std::string numÑar, std::string violation)
{
	if (root != nullptr)
		insert(numÑar, violation, root);
	else
	{
		root = new Node;
		root->numÑar = numÑar;
		root->kvmtant.push_back(violation);
	}
}
inline void Tree::inorderPrint(Node* elem)
{

	if (elem != nullptr)
	{
		inorderPrint(elem->left);
		std::cout << elem->numÑar << ":  ";
		copy(elem->kvmtant.begin(), elem->kvmtant.end(), std::ostream_iterator<std::string>(std::cout, " "));
		std::cout << std::endl;
		inorderPrint(elem->right);
	}
}
inline Node* Tree::search(std::string numÑar)
{
	return search(numÑar, root);
}
inline Node* Tree::search(std::string numÑar, Node* elem)
{
	if (elem != nullptr)
	{
		if (elem->numÑar == numÑar)
		{
			return elem;
		}

		if (elem->numÑar > numÑar)
		{
			return search(numÑar, elem->left);
		}
		if (elem->numÑar < numÑar)
		{
			return search(numÑar, elem->right);
		}
	}
	else
	{
		return nullptr;
	}
}
inline void Tree::elemPrint(std::string numÑar)
{
	Node* elem = search(numÑar);
	if (elem != nullptr)
	{
		std::cout << elem->numÑar << ":  ";
		copy(elem->kvmtant.begin(), elem->kvmtant.end(), std::ostream_iterator<std::string>(std::cout, " "));
		std::cout << std::endl;
	}
	else
	{
		std::cout << "no number" << std::endl;
	}
}