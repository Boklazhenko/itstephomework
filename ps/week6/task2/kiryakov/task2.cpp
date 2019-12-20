
#include <iostream>
using namespace std;

int sum(int firstNum,int secondNum)
{
	int s = 0;
	for (int i = firstNum + 1; i < secondNum; i++)
		s += i;
	return (s);
}

int main()
{
	int firstNum, secondNum;
	cout << "enter num1" << endl;
	cin >> firstNum;
	cout << "enter num2" << endl;
	cin >> secondNum;
	cout << "sum = " << (sum(firstNum, secondNum));

}
