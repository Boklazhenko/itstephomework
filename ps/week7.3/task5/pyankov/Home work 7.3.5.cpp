#include <iostream>


using namespace std;

int main()
{

	int userInput;
	int* pUserInput = &userInput;
	cout << "Input number " << endl;
	cin >> userInput;
	cout << endl;

	if (*pUserInput > 0)
		cout << "+" << endl;
	else
		cout << "-" << endl;



	cin.get();
	system("pause");
	return 0;
}
