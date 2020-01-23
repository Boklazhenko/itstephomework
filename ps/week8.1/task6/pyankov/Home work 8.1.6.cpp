#include <iostream>

#include <time.h>

void printArr(int arr[], int size);
int* removPrimeNumbers(int* arr, int size);

using namespace std;

int main()
{
   srand(time(NULL)); 
    
   int sizeArrOne;
   
    cout << "Input size arr one"<<endl;
    cin >> sizeArrOne;
   
   int* arrOne = new int [sizeArrOne];
   
   for(int i=0; i<sizeArrOne; ++i)
   {
           arrOne[i]=rand()%20;
           
           }
    
   cout << "Arr one: ";
   printArr(arrOne, sizeArrOne);
   
   int* newArr = removPrimeNumbers(arrOne, sizeArrOne);
   
  
   
   delete[] newArr;
   
    cin.get();
    system("pause");
    return 0;
}

void printArr(int arr[], int size)
{
     
  for (int i=0 ; i< size ; ++i)
    {
       cout << arr[i] << " ";
        }
        cout<< endl;
     }


int* removPrimeNumbers(int* arr, int size)
{
    int sizeArr=1;
    int* arrTwo = new int [sizeArr];
    int count=0;
    for (int i=1 ; i<size ; ++i)
    {
        
        if(arr[i]%i==0)
        {
        arrTwo[count]=arr[i-1];
        ++count;
        ++sizeArr;
              }
       
        }
  return arrTwo;  
}  

