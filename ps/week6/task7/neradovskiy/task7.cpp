#include <iostream>

void PosNegZeroInArr(double arr[], int size);

int main()
{
    double arr[10] = { 0, 1, 2, 3, 4, -1, -2, -3, -4, -5 };
    PosNegZeroInArr(arr, 10);
}
void PosNegZeroInArr(double arr[], int size) {
    int countPos = 0, countZero = 0, countNeg = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0)
            countPos++;
        else if (arr[i] == 0)
            countZero++;
        else
            countNeg++;
    }
    std::cout << "Number of positive in array: " << countPos << std::endl;
    std::cout << "Number of zero int array: " << countZero << std::endl;
    std::cout << "Number of negative in array: " << countNeg << std::endl;
}