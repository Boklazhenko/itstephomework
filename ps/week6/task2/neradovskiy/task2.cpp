#include <iostream>
int summOfRange(int a, int b);

int main()
{
   
}
int summOfRange(int a, int b)
{
    int summ = 0;
    if (a < b) {
        for (int i = a + 1; i < b; ++i)
            summ += i;
    }
    else {
        for (int i = b + 1; i < a; ++i)
            summ += i;
    }
    return summ;
}