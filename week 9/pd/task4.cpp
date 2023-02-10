#include<iostream>
using namespace std;
# include<conio.h>

int main()
{
    string letter;
    cout << "enter string: ";
    cin >> letter;
    if (letter.length() %2 == 0)
    {
        cout << "True";
    }
    else
    {
        cout << "false";
    }
    
    getch();

}