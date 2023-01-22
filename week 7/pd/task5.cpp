#include<iostream>
using namespace std;
# include <conio.h>

void triangle(int);

int main()
{
    int number;
    cout << "enter a number";
    cin >> number;
    triangle(number);
    getch();


}

void triangle(int number)
{
    int j = 0;

    for (int i = 1; i <= number; i++)
    {
        j += i;
    }
    cout << j;
}