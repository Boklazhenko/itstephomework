#include <iostream>
using namespace std;

int findDegree(int a, int b);

int main()
{
   
	cout << findDegree(2, 5);


}


int findDegree(int a, int b) {

	
	if (b == 1) {
		return a;
	}
	
	return  (a*findDegree(a, b-1));
}