#include <iostream>
using namespace std;

int paintStars(int a);

int main()
{
    
	paintStars(50);

}

int paintStars(int a) {

	if (a == 0) {
		return 0;
	}

	cout << "*";
	return paintStars(a-1);
}