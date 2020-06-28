

#include <iostream>
#include "tree.h"
#include <string> 
int main()

{
	Tree tree1;
	std::string num =  "h786mj";
	std::string kv = "h1111111";
	tree1.insert(num, kv);
	std::string num1 = "h786mj";
	std::string kv1 = "h22222";
	tree1.insert(num1, kv1);
	std::string num3 = "f789mj";
	std::string kv3 = "f333333";
	std::string num4 = "f789mj";
	std::string kv4 = "f44444";
	tree1.insert(num3, kv3);
	tree1.insert(num4, kv4);
	tree1.inorderPrint();
	/*tree1.elemPrint(num3);*/
}

