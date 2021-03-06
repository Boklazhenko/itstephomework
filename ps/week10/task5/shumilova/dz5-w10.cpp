﻿// Задача 5 (неделя 10)
// реализовать функцию которая убирает опции из флагов Клиента. (пример который выполняли в классе)
// код урока. надо реализовать функцию unsetOptions

#include <iostream>
#include <bitset>
using namespace std;

enum Option {
	Blocked = 1,	// 0000 0001
	Bronze = 2,		// 0000 0010
	Silver = 4,		// 0000 0100
	Gold = 8,		// 0000 1000
	Debtor = 16,	// 0001 0000
	Fool = 32,		// 0010 0000
	Looser = 64,	// 0100 0000
	Megamaster = 128// 1000 0000
};

struct Client {
	char Name[256];
	uint8_t Age;
	uint8_t Options;
};

void print(const Client& client) {
	cout << client.Name << ": " << static_cast<uint16_t>(client.Age) << ": "
		<< bitset<sizeof(client.Options) * 8>(client.Options) << endl;
}

bool isSetOptions(const Client& client, uint8_t options) {
	return (client.Options & options) == options;
}

void setOptions(Client& client, uint8_t options) {
	client.Options |= options;
}

void unsetOptions(Client& client, uint8_t options) {
	client.Options &=~ options;
}

int main(int argc, char** argv) {

	Client client{ "Alexandr", 31, Gold | Debtor };
	print(client); // Alexandr: 31: 00011000

	cout << boolalpha;
	cout << isSetOptions(client, Silver) << endl; //false
	cout << isSetOptions(client, Gold) << endl; //true
	cout << isSetOptions(client, Silver | Debtor) << endl; //false
	cout << isSetOptions(client, Gold | Debtor) << endl; //true

	setOptions(client, Blocked);
	print(client); // Alexandr: 31: 00011001

	unsetOptions(client, Blocked | Debtor);
	print(client); // Alexandr: 31: 00001000

	setOptions(client, Silver);
	print(client); // Alexandr: 31: 00001100

	setOptions(client, 128 | 32);
	print(client); // Alexandr: 31: 10101100

	unsetOptions(client, 4 | 32);
	print(client); // Alexandr: 31: 10001000

	Client client2{ "Govind", 28, 64 };
	print(client2); // Govind: 28: 01000000

	setOptions(client2, 1 | 16);
	print(client2); // Govind: 28: 01010001

	setOptions(client, 64);
	print(client); // Alexandr: 31: 11001000

	return 0;
}
