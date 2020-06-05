// task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    char open[] = { '(','[','{' };
    char close[] = { ')',']','}' };
    char str[255];
    std::cout << "Input line" << std::endl;
    std::cin.getline(str,255);
    Stack stack;
    bool ok = true;
    char tempTop;
    int index=-1;
    for(int i=0;ok&&str[i]!=';';++i)
        for (int j = 0; j < 3; ++j) {
            if (str[i] == open[j]) {
                stack.push(str[i]);
                break;
            }
            else if (str[i] == close[j]) { 
               tempTop = stack.pop();
               if (tempTop != open[j]) {
                   ok = false;
                   index=i;
               }
                break;
            }
        }
    if (ok && stack.isEmpty())
        std::cout << "Right input" << std::endl;
    else {
        std::cout << "Wrong input" << std::endl;
        for (int i = 0; i < index; ++i)
            std::cout << str[i];
    }

    return 0;
  }
