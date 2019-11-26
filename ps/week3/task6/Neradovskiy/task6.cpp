//Пользователь вводит целое число. Необходимо вывести все целые числа, на которое
//заданное число делиться без остатка
#include <iostream>

int main()
{
   int num;
   std::cout << "Enter num: ";
   std::cin >> num;
   if (num < 0) {
       num = -num;
   }
   for (int i = 1; num >= i; ++i){
       if (num % i == 0)
           std::cout << i << " ";
   }
}
