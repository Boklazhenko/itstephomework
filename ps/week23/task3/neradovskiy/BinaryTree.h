#pragma once
#include <iostream>

template<typename T>
struct Node
{
	T _key;
	T _value = 0;
	Node* _left = nullptr;
	Node* _right = nullptr;
};

template<typename T>
class BinaryTree
{
public:
	BinaryTree() {
		_root = nullptr;
	}
	~BinaryTree() {
		destroyTree();
	}

	void add(const T& key) {
		if (_root != nullptr)
			add(key, _root);
		else
			_root = new Node<T>{ key, key + 3 };
	}

	void addDecoded(const T& key) {
		if (_root != nullptr)
			addDecoded(key, _root);
		else
			_root = new Node<T>{ key, key - 3 };
	}

	void destroyTree() {
		destroy(_root);
	}
	void print() const {
		print(_root);
		std::cout << std::endl;
	}
	Node<T>* search(const T& key, int (*compare) (T lhs, T rhs)) const {
		return search(key, _root, compare);
	}
	void printNode(Node<T>* node) {
		if (node != nullptr)
			std::cout << "[" << node->_key << " - " << node->_value << "]" << std::endl;
	}

	T getValue(T& key) const {
		if (_root != nullptr)
			return getValue(key, _root);
	}

private:
	void add(const T& key, Node<T>* leaf) {
		T tempKey = key;
		if (tempKey >= 'X' && tempKey <= 'Z')
			tempKey -= 26;
		else if (tempKey >= 'x' && tempKey <= 'z')
			tempKey -= 26;
		if (key < leaf->_key)
			if (leaf->_left != nullptr)
				add(key, leaf->_left);
			else {
				leaf->_left = new Node<T>{ key, tempKey + 3 };
			}
		else if (key > leaf->_key) {
			if (leaf->_right != nullptr)
				add(key, leaf->_right);
			else
			{
				leaf->_right = new Node<T>{ key, tempKey + 3 };
			}
		}
	}

	void addDecoded(const T& key, Node<T>* leaf) {
		T tempKey = key;
		if (tempKey >= 'A' && tempKey <= 'C')
			tempKey += 26;
		else if (tempKey >= 'a' && tempKey <= 'c')
			tempKey += 26;
		if (key < leaf->_key)
			if (leaf->_left != nullptr)
				addDecoded(key, leaf->_left);
			else {
				leaf->_left = new Node<T>{ key, tempKey - 3 };
			}
		else if (key > leaf->_key) {
			if (leaf->_right != nullptr)
				addDecoded(key, leaf->_right);
			else
			{
				leaf->_right = new Node<T>{ key, tempKey - 3 };
			}
		}
	}

	void destroy(Node<T>* leaf) {
		if (leaf != nullptr) {
			destroy(leaf->_left);
			destroy(leaf->_right);
			delete leaf;
		}
	}
	void print(Node<T>* leaf) const {
		if (leaf != nullptr) {
			print(leaf->_left);
			std::cout << "[ " << leaf->_key << " - " << leaf->_value << " ]" << std::endl;
			print(leaf->_right);
		}
	}

	Node<T>* search(const T& key, Node<T>* leaf, int(*compare) (T lhs, T rhs)) const {
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

	T getValue(T& key, Node<T>* leaf) const {
		if (leaf != nullptr)
			if (key == leaf->_key)
				return leaf->_value;
			else if (key < leaf->_key)
				getValue(key, leaf->_left);
			else {
				getValue(key, leaf->_right);
			}
		else
		{
			return -1;
		}
	}

private:
	Node<T>* _root;
};