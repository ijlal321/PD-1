#include<iostream>
using namespace std;
# include <conio.h>

void amplify(int);

int main()
{
    int number;
    cout << "enter a number";
    cin >> number;
    amplify(number);
    getch();


}

void amplify(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if(i % 4 == 0)
        {
            cout << i* 10 << "\t";
        }
        else
        {
            cout << i << "\t";
        }
    }
}