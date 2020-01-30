#include <iostream>
#include <string>
using namespace std;


void main()
{
    int counter = 0;
    cout << "Enter offer: ";
    string st;
    getline(cin, st);

    for (int i = 1; i < st.size(); i++)
    {
        if (st[i - 1] != ' ' && (st[i] == ' ' || st[i + 1] == '\0')) counter++;
    }

    cout << "Number of words in this sentence " << counter << endl;
}