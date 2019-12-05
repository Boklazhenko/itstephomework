#include <iostream>
using namespace std;

enum figureNumber {a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8,i=9,j=10};
int figureNumber;

int main()
{
	while (true) {
		cout << "Enter the figure`s number, using numerals from 1 to 10\n";
		cin >> figureNumber;


		switch (figureNumber)
		{
		case a:
			for (int y = 1; y <= 10; ++y) {

				for (int x = 1; x <= 10; ++x) {
					if ((y == 1 && x <= 10) || (y == 10 && x <= 10) || (x == 1 && y <= 10) || (x == 10 && y <= 10) || (x >= y))
						cout << "* ";
					else cout << "  ";
				}
				cout << "\n";
			}
			break;
		case b:
			for (int y = 1; y <= 10; ++y) {

				for (int x = 1; x <= 10; ++x) {
					if ((y == 1 && x <= 10) || (y == 10 && x <= 10) || (x == 1 && y <= 10) || (x == 10 && y <= 10) || (x <= y))
						cout << "* ";
					else cout << "  ";
				}
				cout << "\n";
			}
			break;
		case c:

			for (int y = 1; y <= 10; ++y) {

				for (int x = 1; x <= 10; ++x) {
					if ((y == 1 && x <= 10) || (y == 10 && x <= 10) || (x == 1 && y <= 10) || (x == 10 && y <= 10) || (x >= y && x + y <= 11))
						cout << "* ";
					else cout << "  ";
				}
				cout << "\n";
			}
			break;
		case d:
			for (int y = 1; y <= 10; ++y) {

				for (int x = 1; x <= 10; ++x) {
					if ((y == 1 && x <= 10) || (y == 10 && x <= 10) || (x == 1 && y <= 10) || (x == 10 && y <= 10) || (x <= y && x + y >= 11))
						cout << "* ";
					else cout << "  ";
				}
				cout << "\n";
			}
			break;
		case e:
			for (int y = 1; y <= 10; ++y) {

				for (int x = 1; x <= 10; ++x) {
					if ((y == 1 && x <= 10) || (y == 10 && x <= 10) || (x == 1 && y <= 10) || (x == 10 && y <= 10) || (x >= y && x + y <= 11) || (x <= y && x + y >= 11))
						cout << "* ";
					else cout << "  ";
				}
				cout << "\n";
			}
			break;
		case f:
			for (int y = 1; y <= 10; ++y) {

				for (int x = 1; x <= 10; ++x) {
					if ((y == 1 && x <= 10) || (y == 10 && x <= 10) || (x == 1 && y <= 10) || (x == 10 && y <= 10) || (x <= y && x + y <= 11) || (x >= y && x + y >= 11))
						cout << "* ";
					else cout << "  ";
				}
				cout << "\n";
			}
			break;
		case g:
			for (int y = 1; y <= 10; ++y) {

				for (int x = 1; x <= 10; ++x) {
					if ((y == 1 && x <= 10) || (y == 10 && x <= 10) || (x == 1 && y <= 10) || (x == 10 && y <= 10) || (x <= y && x + y <= 11))
						cout << "* ";
					else cout << "  ";
				}
				cout << "\n";
			}
			break;
		case h:
			for (int y = 1; y <= 10; ++y) {

				for (int x = 1; x <= 10; ++x) {
					if ((y == 1 && x <= 10) || (y == 10 && x <= 10) || (x == 1 && y <= 10) || (x == 10 && y <= 10) || (x >= y && x + y >= 11))
						cout << "* ";
					else cout << "  ";
				}
				cout << "\n";
			}
			break;
		case i:
			for (int y = 1; y <= 10; ++y) {

				for (int x = 1; x <= 10; ++x) {
					if ((y == 1 && x <= 10) || (y == 10 && x <= 10) || (x == 1 && y <= 10) || (x == 10 && y <= 10) || (x + y < 11))
						cout << "* ";
					else cout << "  ";
				}
				cout << "\n";
			}
			break;
		case j:
			for (int y = 1; y <= 10; ++y) {

				for (int x = 1; x <= 10; ++x) {
					if ((y == 1 && x <= 10) || (y == 10 && x <= 10) || (x == 1 && y <= 10) || (x == 10 && y <= 10) || (x + y > 11))
						cout << "* ";
					else cout << "  ";
				}
				cout << "\n";
			}
			break;
		default:
			cout << "Wrong numeral" << endl;
		}
	}
}
