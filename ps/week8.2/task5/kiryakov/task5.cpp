#include <iostream>
using namespace std;

int main()
{
	int size = 0;
	char symbol;
	char str[256];
	cout << "Input the text\n";
	cin.getline(str, 256);
	cout << "Input the symbol, you are looking for\n";
	cin >> symbol;
	for (int i = 0; str[i] != '\0'; ++i) {
		++size;
	}
	int counter = 0;
	for (int i = 0; i < size; ++i) {
		if (str[i] == symbol) {
			++counter;
		}
	}
	cout << "Yor text contain " << counter << " " << symbol;
}