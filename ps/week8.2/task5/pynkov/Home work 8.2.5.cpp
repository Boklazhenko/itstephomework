#include <iostream>

using namespace std;

int searchSymbol(char line[], char searSymbol);

int main()
{
    int size=1000;
    
    char userText[size];
    char symbol;
    
    cout << "Input text \n";
    cin >> userText;
    cout << "Input search symbol \n";
    cin >> symbol;
    
    cout<<searchSymbol(userText, symbol);
   
    cin.get();
    system("pause");
    return 0;
}

int searchSymbol(char line[], char searSymbol)
{
     int count=0;
     
     for (int i=0 ; line[i]!='\0' ;++i)
     {
         
         if(line[i]==searSymbol)
         ++count;
         
         }
     
    return count; 
     }
