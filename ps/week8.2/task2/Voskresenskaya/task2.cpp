// Написать функцию, которая удаляет из строки все вхождения в нее заданного символа
//

#include <iostream>
#include <string>
using namespace std;

string Delete(string str, char character)
{
	
	int i = 0, j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != character)
		{ 
			str[j] = str[i];
		      ++j;
	}
		i++;
	}
	str[j] = '\0'; //почему печатет после 0? отладчиком пробежалась, возвращает без символов, которые удаляли.
	return str;
}

int main()
{
	string str;
	cout << "Enter offers" << endl;
	getline(cin, str);
	cout << Delete(str, 's');
}
    

