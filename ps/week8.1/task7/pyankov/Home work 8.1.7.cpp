#include <iostream>

using namespace std;

int* distributionNumbers(int* pArr ,const int sizeArr);



int main()
{
    const int sizeArr=10;
    int arrOne[sizeArr]={0,-1,-6,0,8,4,-3,3,0,7};
    int* pArr=&arrOne[sizeArr];
   
    distributionNumbers(pArr ,sizeArr);
   
    cin.get();
    system("pause");
    return 0;
}

int* distributionNumbers(int* pArr ,const int sizeArr)
{
    
    int sizeArrPositiv=0;
    int sizeArrNegativ=0;
    int sizeArrNull=0;
    
    int* arrPositiv = new int [sizeArrPositiv];
    int* arrNegativ = new int [sizeArrNegativ];
    int* arrNull = new int [sizeArrNull];
    
    
    for (int i=0 ; i<sizeArr ; ++i)
    {
        if( *(pArr+i) > 0 )
        {
         int countArrPos=0;   
         ++sizeArrPositiv;
         arrPositiv[countArrPos]=*(pArr+i);      
         ++countArrPos;
                         }
        
        
        if( *(pArr+i) < 0 )
        {
        int countArrNeg=0;     
        ++sizeArrNegativ;
        arrNegativ[countArrNeg]=*(pArr+i);
        ++countArrNeg;
                         }
        
        
        if( *(pArr+i) == 0 )
        {
        int countArrNull=0;    
        ++sizeArrNull;
        arrNull[countArrNull]=*(pArr+i);
        ++countArrNull;
                      }
        
        }
      
   return  arrPositiv,sizeArrNegativ,arrNull;
    }
