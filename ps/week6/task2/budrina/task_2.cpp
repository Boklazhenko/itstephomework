// Написать функцию, которая получает в качестве параметров 2 целых числа
// и возвращает сумму чисел из диапазона между ними.

#include <iostream>
using namespace std;
int mySum(int startNum, int endNum) {
    int sum = 0;
    for (int i = startNum; i <= endNum; ++i) // В решение включила числа начала и конца диапазона
        sum += i;
        return sum;
}
int main()
{
    int startNum;
    int endNum;
    cout << "Enter start num: ";
    cin >> startNum;
    cout << "Enter end num: ";
    cin >> endNum;
    int res = mySum(startNum, endNum);
    cout << "Sum = "<<res<<"\n";
}