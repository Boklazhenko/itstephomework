#include <iostream>

#define N 10

using namespace std;

int main() {
	int v[N], count = 0, sum = 0;
	
	cout << "Fill the array" << endl;
	for (int i = 0; i < N; i++)
		cin >> v[i];
	system("cls");
	
	cout << "Entered array:" << endl;
	for (int i = 0; i < N; i++)
		cout << v[i] << " ";
	cout << endl;
	
	for (int i = 0; i < N; i++) {
		if (v[i] > 0)
			sum += v[i];
		if (v[i] < 0)
			count++;
	}
	cout << "Sum of positive elements " << sum << "  \nnumber of negative elements " << count << endl;
	
}