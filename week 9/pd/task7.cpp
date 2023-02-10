#include<iostream>
using namespace std;
# include<conio.h>

int main()
{
    string letter1, letter2;
    cout << "enter word 1: ";
    cin >> letter1;
    cout << "enter word 2: ";
    cin >> letter2;

    int temp, count = 0;

    for(int i = 0; i < letter1.length(); i++)
    {
        temp = letter1[i];
        for (int j=0; j<letter2.length(); j++)
        {
            // cout << temp << "  "<< letter2[j];
            if(temp == letter2[j])
            {
                letter2[j] = '`';
                count += 1;
                break;
            }
        }
    }
    cout << count;
    
    getch();

}