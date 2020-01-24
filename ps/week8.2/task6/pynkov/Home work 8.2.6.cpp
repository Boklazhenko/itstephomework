#include <iostream>

using namespace std;
void countLetAndNum(char line[]);

int main()
{
    
    int size=1000;
    
    char userText[size];
       
    cout << "Input text \n";
    cin >> userText;
   
    countLetAndNum(userText);
   
    cin.get();
    system("pause");
    return 0;
}

void countLetAndNum(char line[])
{
     int countLet=0;
     int countNum=0;
     
     for (int i=0; line[i]!='\0'; ++i)
     {
         int check= (int)line[i];
         
         if (check>=48 && check<=57)
         ++countNum;
         
         else
         ++countLet;
         
         }
  
  cout << "Letters: "<<countLet<<endl;   
  cout << "Numbers: "<<countNum<<endl;
     
     }
