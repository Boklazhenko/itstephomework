#include <iostream>
#include <time.h>

using namespace std;
void printArr(int arr[], int size);

int main()
{
    
     srand(time(NULL));
     
     int sizeArrOne;
     
     cout << "Input size arr one"<<endl;
     cin >> sizeArrOne;
    
     int* arrOne = new int [sizeArrOne];
    
      for (int i=0 ; i< sizeArrOne ; ++i)
    {
        int userInput;
        cout << "Input number "<<i+1<< endl;
        cin >> userInput;  
        arrOne[i]=userInput;
             }
   
   cout << "Arr one: ";
   printArr(arrOne, sizeArrOne);
   
   int option=0;
   
   while(option<1 || option>2)
   {
   cout << "press 1 to delete non even numbers "<<endl;
   cout <<"press 2 to delete even numbers "<<endl;
   cin >> option;
                 }
   if (option = 1) 
   {
           for (int i=0 ; i< sizeArrOne ; ++i)
           {
               if(arrOne[i]<0)
               {
                   int change=arrOne[i];
                   arrOne[i]=arrOne[i+1];
                   arrOne[i+1]=change;
                   --sizeArrOne;           
                              }
                   }     
              
              }       
   else
   {
       for (int i=0 ; i< sizeArrOne ; ++i)
           {
               if(arrOne[i]>0)
               {
                   int change=arrOne[i];
                   arrOne[i]=arrOne[i+1];
                   arrOne[i+1]=change;
                    --sizeArrOne;            
                              }
                   }     
       }
   
   cout << "Arr one: ";
   printArr(arrOne, sizeArrOne);
   
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
