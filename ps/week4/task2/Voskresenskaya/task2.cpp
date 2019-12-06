
#include <iostream>
using namespace std;
int main()
{

	for (int x = 0; x < 8; ++x)
	{
		for ( int y = 0; y < 8; ++y)
		{
			if ((x + y) % 2 == 0)
			{
				for (int i = 0; i < 3; ++i)
				{
			      cout << "1";
				}
			}
			else
			{
				for (int i = 0; i < 3; ++i)
				{
				
					cout << "0";
				}
			}
		}
		cout << endl;
	}
	return 0;
}

