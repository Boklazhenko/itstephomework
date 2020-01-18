#include <iostream>
using namespace std;

int deegreInnumber(int number, int deegreNum)
{

	if (deegreNum == 0)
		return 1;
	if (deegreNum == 1)
		return number;
	int result = number;
	for (int i = 0; i < deegreNum - 1; i++)
		result *= number;
	return result;

}
int main()
{
	int number, deegreNum;
	cout << "Enter number : ";
	cin >> number;
	cout << "Enter deegre : ";
	cin >> deegreNum;
	cout << "Sum = " << deegreInnumber(number, deegreNum) << endl;
}