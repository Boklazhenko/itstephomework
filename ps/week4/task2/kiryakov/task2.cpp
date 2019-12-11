#include <iostream>
using namespace std;
int main()
{
	int h, s, w;
	cout << "Enter height.\nh = ";
	cin >> h;
	cout << "Enter width.\nw = ";
	cin >> w;
	cout << "Enter cell size.\ns = ";
	cin >> s;
	for (int i = 0; i < h; i++)     
	{
		if (i % 2 == 0)
			for (int i = 0; i < w / 2; i++)    
			{
				for (int i = 0; i < s; i++)
					cout << "*";
				for (int i = 0; i < s; i++)
					cout << "-";
			}
		else
			for (int i = 0; i < w / 2; i++)     
			{
				for (int i = 0; i < s; i++)
					cout << "-";
				for (int i = 0; i < s; i++)
					cout << "*";
			}
		cout << "\n";
	}
	
}