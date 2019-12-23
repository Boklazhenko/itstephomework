#include <iostream>

using namespace std;

int inputSizeCell=0;

int main()
{
   
    cout << "Input size cell \n";
    cin >> inputSizeCell;
    cout << endl;
    
    for (int x=8 ; x > 0 ; --x)
    {
    
    for (int z=inputSizeCell; z>0 ; --z){
    
     for (int y=4 ; y> 0; --y)
        {
                  
                  
                  
                  if(x%2!=0)
                  {
                  int a=inputSizeCell;       
                  while (a>0)
                  {
                   cout << "+";
                        --a;
                        
                        }
                                     
                  int b=inputSizeCell;       
                   while (b>0)
                  {
                   cout << "0";
                        --b;
                       
                        }                    
                   }
                        
                    else {
                         int a=inputSizeCell;       
                  while (a>0)
                  {
                   cout << "0";
                        --a;
                        
                        }
                  
                  int b=inputSizeCell;       
                   while (b>0)
                  {
                   cout << "+";
                        --b;
                        
                        }    
                         }    
                        
             
              }
       cout << endl; 
}
                    
        }
      
    
    
   
   
    cin.get();
    system("pause");
    return 0;
}
