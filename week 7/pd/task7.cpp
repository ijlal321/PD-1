#include<iostream>
using namespace std;
# include <conio.h>

void percentage(float);

int main()
{
    float number;
    cout << "enter nr of integers";
    cin >> number;
    percentage(number);
    getch();


}

void percentage(float number)
{
    float p1=0, p2=0, p3=0;
    int tempValue;

    for (int i = 1; i <= number; i++)
    {
        cout << "enter a value: ";
        cin >> tempValue;

        if (tempValue % 2 == 0)
        {
            p1 += 1;
        }
        if (tempValue % 3 == 0)
        {
            p2 += 1;
        }
        if (tempValue % 4 == 0)
        {
            p3 += 1;
        }
    }
    cout << "percentage of p1 is " << (p1/ number * 100) <<  " and percentage of p2 is " << (p2/ number * 100) <<  " and percentage of p2 is " << (p3/ number * 100) ;
}