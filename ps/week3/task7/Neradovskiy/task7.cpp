//Пользователь вводит два целых числа. Необходимо вывести все целые числа, на
//которые оба введенных числа делятся без остатка.

#include <iostream>

int main()
{
    int num1, num2;
   std::cout << "Enter num1 and num2: ";
   std::cin >> num1 >> num2;
   if (num1 < 0){
    num1 = -num1;
}
    for (int i = 1; num1 >= i; ++i){
       if (num1 % i == 0 && num2 % i ==0)
           std::cout << i << " ";
   }
}
