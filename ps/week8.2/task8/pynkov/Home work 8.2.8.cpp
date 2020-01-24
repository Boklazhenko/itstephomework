#include <iostream>
int wordCounter(char line[]);

using namespace std;

int main()
{
    
    int size=1000;
    
    char userText[size];
      
    cout << "Input text \n";
    cin >> userText;
    cout << wordCounter(userText);
   
    cin.get();
    system("pause");
    return 0;
}

int wordCounter(char line[])
{
     int count=0;
     char check =' ';
     
     for (int i=0; line[i]!='\0'; ++i)
     {
         if (line[i]==check)
         ++count;
                          
         }

     return count;
     }
