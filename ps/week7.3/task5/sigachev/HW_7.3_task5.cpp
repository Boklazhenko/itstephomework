// Используя указатели и оператор разыменования, определить знак числа, введённого с клавиатуры.
#include <iostream>
using namespace std;

void signNumber(int* pA) {
    cout << "Sign of number " << (*pA > 0 ? "positive." : "negative.");
}
int main()
{
    int a;
    cout << "Enter number: ";
    cin >> a;
    if (a == 0) {
        cout << "your number zero!";
        return 0;
    }
    signNumber(&a);
}
