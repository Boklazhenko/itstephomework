#pragma once
#include <iostream>

template<typename Tkey, typename Tvalue>
struct Node
{
	Tkey _key;
	Tvalue _value;
	Node* _left = nullptr;
	Node* _right = nullptr;
};

template<typename Tkey, typename Tvalue>
class BinaryTree
{
public:
	BinaryTree() {
		_root = nullptr;
	}
	~BinaryTree() {
		destroyTree();
	}

	void add(const Tkey& key, const Tvalue& value) {
		if (_root != nullptr)
			add(key, value, _root);
		else
			_root = new Node<Tkey, Tvalue>{ key, value };
	}
	void destroyTree() {
		destroy(_root);
	}
	void print() const {
		print(_root);
		std::cout << std::endl;
	}
	Node<Tkey, Tvalue>* search(const Tkey& key, int (*compare) (Tkey lhs, Tkey rhs)) const {
		return search(key, _root, compare);
	}
	void printNode(Node<Tkey, Tvalue>* node) {
		if (node != nullptr)
			std::cout << "[" << node->_key << " - " << node->_value << "]" << std::endl;
	}

private:
	void add(const Tkey& key, const Tvalue& value, Node<Tkey, Tvalue>* leaf) {
		if (key < leaf->_key)
			if (leaf->_left != nullptr)
				add(key, value, leaf->_left);
			else {
				leaf->_left = new Node<Tkey, Tvalue>{ key, value };
			}
		else if (key > leaf->_key) {
			if (leaf->_right != nullptr)
				add(key, value, leaf->_right);
			else
			{
				leaf->_right = new Node<Tkey, Tvalue>{ key, value };
			}
		}
		else if (key == leaf->_key)
			leaf->_value += value;
	}
	void destroy(Node<Tkey, Tvalue>* leaf) {
		if (leaf != nullptr) {
			destroy(leaf->_left);
			destroy(leaf->_right);
			delete leaf;
		}
	}
	void print(Node<Tkey, Tvalue>* leaf) const {
		if (leaf != nullptr) {
			print(leaf->_left);
			std::cout << "[ " << leaf->_key << " - " << leaf->_value << " ]" << std::endl;
			print(leaf->_right);
		}
	}
	Node<Tkey, Tvalue>* search(const Tkey& key, Node<Tkey, Tvalue>* leaf, int(*compare) (Tkey lhs, Tkey rhs)) const {
		if (leaf != nullptr)
			if (compare(key, leaf->_key) == 0)
				return leaf;
			else if (compare(key, leaf->_key) < 0)
				search(key, leaf->_left, compare);
			else {
				search(key, leaf->_right, compare);
			}
		else
		{
			return nullptr;
		}
	}

private:
	Node<Tkey, Tvalue>* _root;
};