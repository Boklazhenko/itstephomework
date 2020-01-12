#include <iostream>
using namespace std;
int sumRange(int min, int max);

int main()
{
   
	cout<< sumRange(1, 4);


}

int sumRange(int min, int max) {

	if (min == max-1) {
		return min-1;
	}

	return (min+ sumRange(min+1, max));
}