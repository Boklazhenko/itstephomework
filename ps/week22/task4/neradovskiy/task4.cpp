#include <iostream>
#include "Array.h"

int main()
{
    std::string str = "Hello World!";
    Array<char> test;
    for (int i = 0; i < str.size(); ++i)
        test.add(str[i]);
    Array <char>testAppend(test);
    for (int x = 0; x < test.getSize(); ++x)
        std::cout << test.getAt(x);
    char symb = 'M';
    test.setAt(5, symb);
    for (int x = 0; x < test.getSize(); ++x)
        std::cout << test.getAt(x);
    testAppend.append(test);
    testAppend.removeAt(1);
    std::cout << std::endl;
    testAppend.insertAt(1, symb);
    for (int z = 0; z < testAppend.getSize(); ++z)
        std::cout << testAppend[z];
}