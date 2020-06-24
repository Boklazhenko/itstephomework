#pragma once
#include "BinaryTree.h"

class  DataGai
{
public:
	 DataGai();
	~ DataGai();
	void add(const char* number, std::string offenses);
	void print() const;
	void printCar(const char* number);

private:
	BinaryTree<const char*, std::string>* _Data;
};