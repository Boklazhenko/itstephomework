#include <iostream>


using namespace std;
void delSymbol(char line[], int size , int numberSymbol);

int main()
{
    
    int arrSize=13;
    char str[] = "Hello World";
    
    for(int i=0 ; i<arrSize ; ++i)
    {
            cout<<str[i];
            }
    cout << endl;
    
   delSymbol(str, arrSize , 1);
   
   for(int i=0 ; i<arrSize ; ++i)
    {
            cout<<str[i];
            }
   
    cin.get();
    system("pause");
    return 0;
}

void delSymbol(char line[], int size , int numberSymbol)
{
    
    char* newArr = new char[size];
    
    for (int i=0 ; i<size; ++i)
    {
        if (numberSymbol!=i)
        newArr[i]=line[i];
        else
        newArr[i]=' ';        
        }
    
    for (int i=0 ; i<size; ++i)
    {
        
        line[i]=newArr[i];
                
        }
    
    delete[] newArr;
    
        }
