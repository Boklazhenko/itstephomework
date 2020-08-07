#include <iostream>
#include "BitString.h"

using namespace std;

int main()
{
	
	Bitstring str("0101");
	Bitstring str1("0001");
	cout << str.toString()<<endl;
	Bitstring str2 = str + str1;
	cout << str2.toString() << endl;
	
}

