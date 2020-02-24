#define INTEGER
//#define DOUBLE
//#define CHAR
#include "function.h"
#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    // --------------------------------массив INTEGER
    int arr[size];
    cout << "Firsy array: " << endl;
    fillArr(arr, size);
    showArr(arr, size);
    findMinArr(arr, size);
    findMaxArr(arr, size);
    cout << "Sort first array: " << endl;
    sortArr(arr, size);
    showArr(arr, size);
    editArr(arr);
    showArr(arr, size);         
          // ---------------------------------массив DOUBLE
   /* double arr1[size];
    cout << "Second array: " << endl;
    fillArr(arr1, size);
    showArr(arr1, size);
    findMinArr(arr1, size);
    findMaxArr(arr1, size);
    cout << "Sort second array: " << endl;
    sortArr(arr1, size);
    showArr(arr1, size);
    editArr(arr1);
    showArr(arr1, size);*/
            // ------------------------------------массив CHAR
    /*char arr2[size];
    cout << "Third array: " << endl;
    fillArr(arr2, size);
    showArr(arr2, size);
    findMinArr(arr2, size);
    findMaxArr(arr2, size);
    cout << "Sort third array: " << endl;
    sortArr(arr2, size);
    showArr(arr2, size);
    editArr(arr2);
    showArr(arr2, size);*/
}