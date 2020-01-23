#include <iostream>

#include <time.h>

using namespace std;
void printArr(int arr[], int size);
int checkRepeat(int arr[], int size, int checkElement , int* ch);

int main()
{
    
    srand(time(NULL));
    
    int sizeArrOne, sizeArrTwo;
            
    cout << "Input size arr one"<<endl;
    cin >> sizeArrOne;
    cout << "Input size arr two"<<endl;
    cin >> sizeArrTwo;
    
    int* arrOne = new int [sizeArrOne];
    int* arrTwo = new int [sizeArrTwo];
    
      for (int i=0 ; i< sizeArrOne ; ++i)
    {
        arrOne[i]=rand()%10;
       
        }
    
   cout << "Arr one: ";
   printArr(arrOne, sizeArrOne);
   
   
   
    for (int i=0 ; i< sizeArrTwo ; ++i)
    {
        arrTwo[i]=rand()%10;
       
        }
    
   cout << "Arr two: ";
   printArr(arrTwo, sizeArrTwo);
   
   
    int sizeArrThree=0;
    int* arrThree = new int [sizeArrThree];
    int b=0;
    int* pB=&b;
    
     for (int i=0 ; i< sizeArrOne ; ++i)
   {
         int checkElement=arrOne[i];
         
         
         checkRepeat(arrThree, sizeArrThree, checkElement, &b);
         cout << "b" <<*pB<<endl;
         
         if(b==0)
         {
         ++sizeArrThree;
         arrThree[sizeArrThree-1]=arrOne[i];
         }
   
                                            }
                                            
     for (int i=0 ; i< sizeArrTwo ; ++i)
   {
         ++sizeArrThree;
         arrThree[sizeArrThree-1]=arrTwo[i];
   
                                            }  
                                            
      cout << "Arr three: ";
   printArr(arrThree, sizeArrThree);    
   
   
    delete[] arrOne;
   delete[] arrTwo;
   delete[] arrThree;                                                                        
   
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

int checkRepeat(int arr[], int size, int checkElement, int* ch)
{
        
    for(int i=0 ; i<size; i++)
    {
            if(checkElement==arr[i])
            {return *ch=0;
             //break;
            }
            
            else
            return *ch=1;
            }
    
    
    }
