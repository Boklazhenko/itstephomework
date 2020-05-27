#include <iostream>
void replacingSpaces(char line[]);

using namespace std;

int main()
{
    char text[]="Hello World Hello World Hello World ";
    
    cout << text <<endl;
    
    replacingSpaces(text);
    
    cout << text <<endl;
   
   
    cin.get();
    system("pause");
    return 0;
}

void replacingSpaces(char line[])
{
     char symbol ='\t';
     char check =' ';
     
     for (int i=0; line[i]!='\0'; ++i)
     {
         if (line[i]==check)
         line[i]=symbol;
         
         }
     
     
     }
