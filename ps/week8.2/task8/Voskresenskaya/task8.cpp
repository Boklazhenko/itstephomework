// Подсчитать количество слов во введенном предложении

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cout << "Enter any string" << endl;
	getline(cin, str);
	

	int count = 0;
	for (int i = 1; i < str.size(); ++i)
	{
		if (str[i - 1] != ' ' && (str[i] == ' ' || str[i + 1] == '\0'))
        ++count;
		
	}
	cout << count;
	return 0;
}


