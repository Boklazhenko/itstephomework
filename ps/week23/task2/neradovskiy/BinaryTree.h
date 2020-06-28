#pragma once
#include <iostream>

template<typename Tkey>
struct Node
{
	Tkey _key;
	int _value = 0;
	Node* _left = nullptr;
	Node* _right = nullptr;
};

template<typename Tkey>
class BinaryTree
{
public:
	BinaryTree() {
		_root = nullptr;
	}
	~BinaryTree() {
		destroyTree();
	}

	void add(const Tkey& key) {
		if (_root != nullptr)
			add(key, _root);
		else
			_root = new Node<Tkey>{ key, 1 };
	}

	void destroyTree() {
		destroy(_root);
	}
	void print() const {
		print(_root);
		std::cout << std::endl;
	}
	Node<Tkey>* search(const Tkey& key, int (*compare) (Tkey lhs, Tkey rhs)) const {
		return search(key, _root, compare);
	}
	void printNode(Node<Tkey>* node) {
		if (node != nullptr)
			std::cout << "[" << node->_key << " - " << node->_value << "]" << std::endl;
	}

	int getValue(Tkey& key) const {
		if (_root != nullptr)
			return getValue(key, _root);
	}

	int getSumValue() const {
		if (_root != nullptr)
			return getSumValue(_root);
	}

private:
	void add(const Tkey& key, Node<Tkey>* leaf) {
		if (key < leaf->_key)
			if (leaf->_left != nullptr)
				add(key, leaf->_left);
			else {
				leaf->_left = new Node<Tkey>{ key, 1 };
			}
		else if (key > leaf->_key) {
			if (leaf->_right != nullptr)
				add(key, leaf->_right);
			else
			{
				leaf->_right = new Node<Tkey>{ key, 1 };
			}
		}
		else if (key == leaf->_key)
			++leaf->_value;
	}
	void destroy(Node<Tkey>* leaf) {
		if (leaf != nullptr) {
			destroy(leaf->_left);
			destroy(leaf->_right);
			delete leaf;
		}
	}
	void print(Node<Tkey>* leaf) const {
		if (leaf != nullptr) {
			print(leaf->_left);
			std::cout << "[ " << leaf->_key << " - " << leaf->_value << " ]" << std::endl;
			print(leaf->_right);
		}
	}

	Node<Tkey>* search(const Tkey& key, Node<Tkey>* leaf, int(*compare) (Tkey lhs, Tkey rhs)) const {
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

	int getValue(Tkey& key, Node<Tkey>* leaf) const {
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
			return 0;
		}
	}
	int getSumValue(Node<Tkey>* leaf) const {
		int sum = 0;
		if (leaf != nullptr)
			sum += leaf->_value;
		if (leaf->_left)
		sum += getSumValue(leaf->_left);
		if (leaf->_right)
		sum += getSumValue(leaf->_right);
		return sum;
	}

private:
	Node<Tkey>* _root;
};