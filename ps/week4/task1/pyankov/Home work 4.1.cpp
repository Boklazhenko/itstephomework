
#include <iostream>
using namespace std;
const char arr[2] = { 'y' , 'n' };


int main()
{
			
		char repley;

		do {

			int userInput = -1;

		while (userInput < 0 || userInput > 10)
		{
			cout << "Enter number 1-10" << endl;
			cin >> userInput;
			system("cls");
		}


		if (userInput == 1)
		{
			for (int x = 0; x < 10; ++x)
			{
				for (int y = 0; y < 10; ++y)
				{
					if (x == y || x < y)
						cout << " *";
					else
						cout << " " << " ";
				}
				cout << endl;
			}

		}

		if (userInput == 2)
		{
			for (int x = 0; x < 10; ++x)
			{
				for (int y = 0; y < 10; ++y)
				{
					if (x == y || x > y)
						cout << " *";
					else
						cout << " " << " ";
				}
				cout << endl;
			}

		}


		if (userInput == 3)
		{
			for (int x = 0; x < 10; ++x)
			{
				for (int y = 0; y < 11; ++y)
				{
					if (x + y <= 10 && x <= y)
						cout << " *";
					else
						cout << " " << " ";
				}
				cout << endl;
			}

		}


		if (userInput == 4)
		{
			for (int x = 0; x < 11; ++x)
			{
				for (int y = 0; y < 11; ++y)
				{
					if (x + y >= 10 && x >= y )
						cout << " *";
					else
						cout << " " << " ";
				}
				cout << endl;
			}

		}

		if (userInput == 5)
		{
			for (int x = 0; x < 11; ++x)
			{
				for (int y = 0; y < 11; ++y)
				{
					if (x + y <= 10 && x <= y || x + y >= 10 && x >= y)
						cout << " *";
					else
						cout << " " << " ";
				}
				cout << endl;
			}

		}


		if (userInput == 6)
		{
			for (int x = 0; x < 11; ++x)
			{
				for (int y = 0; y < 11; ++y)
				{
					if (x + y >10 && x > y || x + y < 10 && x < y)
						cout << " "<<" ";
					else
						cout << " *"; 
				}
				cout << endl;
			}

		}


		if (userInput == 7)
		{
			for (int x = 0; x < 11; ++x)
			{
				for (int y = 0; y < 11; ++y)
				{
					if (x + y <= 10 && y <= x )
						cout << " *";
					else
						cout << " "<< " ";
				}
				cout << endl;
			}

		}


		if (userInput == 8)
		{
			for (int x = 0; x < 11; ++x)
			{
				for (int y = 0; y < 11; ++y)
				{
					if (x + y >= 10 && y >= x)
						cout << " *";
					else
						cout << " " << " ";
				}
				cout << endl;
			}

		}

		if (userInput == 9)
		{
			for (int x = 0; x < 11; ++x)
			{
				for (int y = 0; y < 11; ++y)
				{
					if (x + y >= 10 )
						cout << " *";
					else
						cout << " " << " ";
				}
				cout << endl;
			}

		}

		if (userInput == 10)
		{
			for (int x = 0; x < 10; ++x)
			{
				for (int y = 0; y < 10; ++y)
				{
					if (x + y <= 9)
						cout << " *";
					else
						cout << " " << " ";
				}
				cout << endl;
			}

		}

		cout << "Repeat ?" << endl
			<< "Y / N" << endl;
		cin >> repley;
		system("cls");

	} while (repley != arr[1]);
	
		

	

}


