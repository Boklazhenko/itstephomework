#include <iostream>

using namespace std;

const int sizeArr=5;
int arr1[sizeArr]={1,2,3,4,5};
int arr2[sizeArr]={1,2,3,4,5};
int arrSum[sizeArr];

int main()
{
    for (int i=0; i<5 ; ++i)
    {
        arrSum[i]=arr1[i]+arr2[i];
        
        cout<< arrSum[i]<<" ";
                
        }
    
    
   
   
    cin.get();
    system("pause");
    return 0;
}
