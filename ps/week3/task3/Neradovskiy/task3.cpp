//Пользователь вводит любое целое число. Необходимо из этого целого числа удалить
//все цифры 3 и 6 и вывести обратно на экран.

#include <iostream>

int main()
{
    int num, digit, sum = 0;
    int count = 1;
    std::cout << "Enter num: ";
    std::cin >> num;
    for (; num != 0; num /= 10)  {
       digit = num % 10;

       if (digit ==3 || digit ==6 || digit == -3 || digit == -6) {
           continue;
       }
       count*= 10;
       sum = sum + digit * (count / 10);

    }
    std::cout << sum << " ";
}
