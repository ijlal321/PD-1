#include<iostream>
using namespace std;
#include<conio.h>

int main()
{
    int arrayLength;
    cout << "enter how many numbers you want to enter";
    cin >> arrayLength;

    int words[arrayLength];

    for(int i = 0; i < arrayLength; i++)
    {
        cout << "enter number "<< i + 1<< " ";
        cin >> words[i];
    }

    int count = 0;


    for (int i = 1; i < arrayLength-1; i++)
    {
        if(words[i] > words[i+1] && words[i] > words[i-1])
        {
            count ++;
        }
    }

    int ansArray[count];
    int z = 0;
    for (int i = 1; i < arrayLength-1; i++)
    {
        if(words[i] > words[i+1] && words[i] > words[i-1])
        {
            ansArray[z] = words[i] ;
            z++;
        }
    }


    if (z==0)
    {
        cout << "no peak found";
    }
    else
    {
        cout << "{";
        for (int i=0; i < z; i ++)
        {
            cout << ansArray[i] << ",";
        }
        cout << "}";
    }


    getch();



}