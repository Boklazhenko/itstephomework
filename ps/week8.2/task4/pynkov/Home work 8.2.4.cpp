#include <iostream>

void replacingPoints(char line[]);
using namespace std;

int main()
{
    int size=1000;
    
    char userText[size];
    
    cout << "Input text \n";
    cin >> userText;
    
   
    replacingPoints(userText);
   
    cout << userText << endl;
   
    cin.get();
    system("pause");
    return 0;
}

void replacingPoints(char line[])
{
     char check='.';
     char newSymbol='!';
     
     for(int i=0 ; line[i]!='\0' ; ++i)
     {
             if(line[i]==check)
             line[i]=newSymbol;
             
             }
     
     
     }
