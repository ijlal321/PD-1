#include<iostream>
using namespace std;
# include<conio.h>

int main()
{
    string testArray[4];
    for (int i =0; i<4; i++)
    {
        cout << "enter string";
        cin >> testArray[i];
    }
    if(testArray[0] == testArray[1] && testArray[0]== testArray[2] && testArray[0] == testArray[3])
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    
    getch();

}