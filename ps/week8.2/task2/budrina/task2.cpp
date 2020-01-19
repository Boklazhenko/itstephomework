// Написать функцию, которая удаляет из строки все вхождения в неё заданного символа.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void RemoveCharacterFromString(char character_for_remove, string& string) {
	auto it = remove_if(begin(string), end(string), [=](char c) {
		return c == character_for_remove;
		});
	string.erase(it, end(string));
}

int main() {
	string string = "aaa bbb ccc ddd ccc fff";
	cout <<"Row before: "<< string << "\n\n";
	RemoveCharacterFromString('c', string);
	cout << "Row after remove: " << string << '\n';
}