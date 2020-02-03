
#include <iostream>
#include <bitset>
using namespace std;
enum Option
{
	Bloced =1, // 0000 0001
	Bronz=2, //0000 0010
	Silver =4, // 0000 0100
	Debtor =16, // 0001 0000
	Gold =8 // 0000 1000
};
struct Client {
	char Name[256];
	uint8_t Age;
	uint8_t Options;

};

void print(const Client& client)
{
	cout << client.Name << ":" << static_cast<uint16_t>(client.Age) << ": " << bitset<sizeof(client.Options) * 8>(client.Options) << endl;
}
void unsetOpsions( Client  &client, uint8_t options)
{
	
	client.Options &= ~options;	
}
int main()
{
	Client client{
		"Aleksandr",
		31,
		Gold|Bloced|Debtor
	};
	unsetOpsions(client, Bloced | Debtor);
	print(client);
	return 0;
}


