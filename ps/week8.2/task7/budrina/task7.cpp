// Дана строка символов. Заменить в ней все пробелы на табуляции.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string str("123 gs sdg ");

	cout << str << std::endl;

	replace(str.begin(), str.end(), ' ', '\t');

	cout << str << std::endl;
}
