
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str = "Home Work";
	for (int i = 1; i < str.size(); ++i)
	{
		if (str[i] != ' ')
		{
			continue;
		}
		else
		{
			str[i] = '\t';
		}
	}
	cout << str;
	return 0;
}
