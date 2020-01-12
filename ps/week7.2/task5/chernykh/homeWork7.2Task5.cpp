#include <iostream>

using namespace std;

//void printStars(int stars)
//{
//    for (int i = 0; i < stars; ++i)
//    {
//        cout << " * ";
//    }
//}

int printStarsR(int quantityOfStars)
{
    if (quantityOfStars < 1)
    {
        return 1;
    }
    cout << " * ";
    printStarsR(quantityOfStars - 1);
}

int main()
{
    int quantityOfStarts;

    cout << "How much stars would you like to see?" << endl;
    cin >> quantityOfStarts;

    printStarsR(quantityOfStarts);
}