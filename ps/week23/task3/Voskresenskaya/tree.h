#pragma once
#include <list>     // подключаем заголовок списка
#include <iterator> // заголовок итераторов
#include <iostream>
#include <string> 
struct Node
{
	char key;
	char value;
	Node* left = nullptr;
	Node* right = nullptr;
};
class Tree
{
public:
	Tree();
	~Tree();
	void insert(char key, int value);//вставка в дерево
	Node* search(char key); //поиск элемента*/
	void destroyTree();//разрушить дерево
	char callNumber(char key);
	void elemPrint(char key);
private:
	void destroyTree(Node* elem);
	void insert(char key, int value, Node* elem);
	Node* search(char key, Node* elem);
	char callNumber(char key, Node* elem);
	void setValue(int value, Node* elem);
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
		delete elem;
	}
}
void Tree::destroyTree()
{
	destroyTree(root);
}
inline char Tree::callNumber(char key)
{
	return callNumber(key, root);
}
/*inline void Tree::inorderPrint()
{
	inorderPrint(root);
	std::cout << std::endl;
}*/
void Tree::insert (char key, int value, Node* elem)
{
	if (key < elem->key)
	{
		if (elem->left != nullptr)
		{
			insert(key, value, elem->left);
		}
		else
		{
			elem->left = new Node;
			elem->left->key = key;
			setValue(value, elem->left);
		}
	}
	else  
	{
		if (elem->right != nullptr)
		{
			insert(key, value, elem->right);
		}
		else
		{
			elem->right = new Node;
			elem->right->key = key;
			setValue(value, elem->right);
		}
	}

}
inline void Tree::insert(char key, int value)
{
	if (root != nullptr)
		insert(key, value, root);
	else
	{
		root = new Node;
		root->key = key;
		setValue(value, root);
	}
}
/*inline void Tree::inorderPrint(Node* elem)
{

	if (elem != nullptr)
	{
		inorderPrint(elem->left);
		std::cout << elem->numСar << ":  ";
		copy(elem->kvmtant.begin(), elem->kvmtant.end(), std::ostream_iterator<std::string>(std::cout, " "));
		std::cout << std::endl;
		inorderPrint(elem->right);
	}
}*/
inline Node* Tree::search(char key)
{
	return search(key, root);
}
inline Node* Tree::search(char key, Node* elem)
{
	if (elem != nullptr)
	{
		if (elem->key == key)
		{
			return elem;
		}

		if (elem->key > key)
		{
			return search(key, elem->left);
		}
		if (elem->key < key)
		{
			return search(key, elem->right);
		}
	}
	else
	{
		return nullptr;
	}
}
inline char Tree::callNumber(char key, Node* elem)
{
	if (elem != nullptr)
	{
		if (elem->key == key)
		{
			return elem->value;
		}

		if (elem->key > key)
		{
			return callNumber(key, elem->left);
		}
		if (elem->key < key)
		{
			return callNumber(key, elem->right);
		}
	}
	else
	{
		std::cerr << "no elem" << std::endl;
		return 0;
	}
}
inline void Tree::setValue(int value, Node* elem)
{
	int keyInt = elem->key;
	/*keyInt = keyInt + value;
	elem->value = (char)keyInt;*/


	if (keyInt <= 90 && keyInt >= 65)
	{
		if (keyInt + value <= 90)
		{
			elem->value =(char)(keyInt + value);
		}
		if (keyInt + value > 90)
		{
			elem->value = 64 + (char)(keyInt + value) - 90;
		}
	}
	else
		if (keyInt <= 122 && keyInt >= 97)
		{
			if (keyInt + value <= 122)
			{
				elem->value = (char)(keyInt + value);
			}
			if (keyInt+ value > 122)
			{
				elem->value = 96 + (char)(keyInt + value) - 122;
			}
		}
	
}
inline void Tree::elemPrint(char key)
{
	Node* elem = search(key);
	if (elem != nullptr)
	{
		std::cout << elem->key << std::endl;
		std::cout << elem->value << std::endl;
	}
	else
	{
		std::cout << "no number" << std::endl;
	}
}