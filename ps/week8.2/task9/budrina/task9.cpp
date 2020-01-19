// Дана строка символов. Необходимо проверить является ли эта строка палиндромом.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string str("12321");

    string buf = str;
    reverse(buf.begin(), buf.end());

    cout << (str == buf ? "true" : "false") << std::endl;
}