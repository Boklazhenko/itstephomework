//7 (неделя 7.3)
//Написать примитивный калькулятор, пользуясь только указателями.
#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	float* pa = &a, * pb = &b, * pc = &c;
	cin >> *pa;
	char key;
	cin >> key;
	cin >> *pb;

	switch (key)
	{
	case '+':
		*pc = *pa + *pb;
		break;
	case '-':
		*pc = *pa - *pb;
		break;
	case '*':
		*pc = *pa * *pb;
		break;
	case '/':
		if (*pb != 0)
			*pc = *pa / *pb;
		else cout << "error";
	}
	cout << "=" << *pc << endl;
}