#include <iostream>

void checkPalindrom(char line[]);
using namespace std;

int main()
{
    
    int size=1000;
    
    char userText[size];
      
    cout << "Input text \n";
    cin >> userText;
    checkPalindrom(userText);
   
   
    cin.get();
    system("pause");
    return 0;
}

void checkPalindrom(char line[])
{
     
     int count=0;
     char newLine[count];
     bool check;
     
     for(int i=0; line[i]!='\0' ; ++i)
     {
             ++count;
             }
             
     for(int i=0; line[i]!='\0' ; ++i)
     {
             newLine[count-1]=line[i];
             --count;
             }
     
     for(int i=0; line[i]!='\0' ; ++i)
     {
             if(newLine[i]==line[i])
             check=true;
             if (check==false)
             break;
             
             }
   if(check==true)
   cout << "Yes \n"; 
   
   else  
   cout << "No \n";   
     }
