#include <iostream>
void insertSymbol(char line[], char symbol, int position);

using namespace std;

int main()
{
    
   char str[]= "Hello World !";
   
   char sym = '*';
   
   int pos =6;
    
   cout << str<<endl;
   
   insertSymbol(str, sym,pos);
   cout << str;
   
   
    cin.get();
    system("pause");
    return 0;
}

void insertSymbol(char line[], char symbol, int position)
{
     
     for (int i=0 ; line[i]!= '\0' ; ++i)
     {
       if(i==position-1)
       line[i]=symbol;
         
         }
     
     
     }
