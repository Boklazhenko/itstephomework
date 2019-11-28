//Пользователь вводит любое целое число А. Необходимо вывести все целые числа В,
//для которых А делиться без остатка на В*В и не делиться без остатка на В*В*В

#include <iostream>

int main()
{
    int num, result;
    std::cout <<"Enter num: ";
    std::cin >> num;
    if (num < 0)
        num = -num;
    for (int i = 1; i <= num; ++i){
        result = i * i;
        if (num % result == 0 && num % (result * i) != 0)
        std::cout << i << "\n";
    }
}
