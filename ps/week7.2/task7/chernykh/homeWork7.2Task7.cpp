#include <iostream>
#include <random>
#include <chrono>
#include <cstdlib>

using namespace std;

int searchMinimalSumOfTenElements(int array[100], int beginElement, int& position)
{
    int sum = 0;
    for (int i = beginElement; i < beginElement + 10; ++i)
    
        sum += array[i];
        cout << "Sum 0f ten elements from: " << beginElement << "; sum: " << sum << endl;
        if (100 - beginElement == 10)
        {
            position = beginElement;
            return sum;
        }
        else
        {
            int sum2 = searchMinimalSumOfTenElements(array, beginElement + 1, position);
            if (sum <= sum2)
            {
                position = beginElement;
                return sum;
            }
            else return sum2;
        }
    
}

int main()
{
    int array[100];
    int position;

    std::default_random_engine generator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> rnd(-100, 100);

    for (int i = 0; i < 100; ++i) array[i] = rnd(generator);
    for (int i = 0; i < 100; ++i) cout << array[i] << '\t';
    cout << endl << endl;

    searchMinimalSumOfTenElements(array, 0, position);

    cout << "Minimum position: " << position << endl << endl;

    system("pause");
}
