
#include <iostream>
#include <bitset>
using namespace std;

enum Option {
	Blocked = 1, 
	Bronze = 2, 
	Silver = 4, 
	Gold = 8, 
	Debtor = 16 
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
	client.Options &= ~options;

}

int main(int argc, char** argv) {

	Client client{ "Vasya", 35, Gold | Debtor };

	print(client); 
	cout << boolalpha;
	cout << isSetOptions(client, Silver) << endl; 
	cout << isSetOptions(client, Gold) << endl; 
	cout << isSetOptions(client, Silver | Debtor) << endl; 
	cout << isSetOptions(client, Gold | Debtor) << endl; 

	setOptions(client, Blocked);
	print(client); 
	unsetOptions(client, Blocked | Debtor);
	print(client); 
	return 0;
}