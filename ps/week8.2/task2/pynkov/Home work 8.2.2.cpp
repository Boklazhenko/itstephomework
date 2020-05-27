#include <iostream>

using namespace std;

void delRepleySymbol(char line[], char delSymbol);


int main()
{
    
    
    char str[] = "Hello World";
    
    char symbol = 'l';
    
   cout << str;
   cout<< endl;
  
   delRepleySymbol(str, symbol);
   
   cout << str;
   
    cin.get();
    system("pause");
    return 0;
}

void delRepleySymbol(char line[], char delSymbol)
{
    for (int i=0; line[i]!='\0' ; ++i)
    {
    
        if(line[i]==delSymbol)
        {
        line[i]=' ';
         }           
          
    }           

    
}
