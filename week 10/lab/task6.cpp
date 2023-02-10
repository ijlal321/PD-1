#include<iostream>
using namespace std;
#include<conio.h>

int main()
{
    int arrayLength = 10;
    int pakageArray[arrayLength];

    for(int i = 0; i < arrayLength; i++)
    {
        cout << "enter value "<< i + 1<< " ";
        cin >> pakageArray[i];
    }

    int temp;
    int min = pakageArray[0], max = pakageArray[0], minIndex = 0;


    for (int j = 0; j<arrayLength; j++)
    {
        min = pakageArray[j];
        for(int i = j; i < arrayLength; i++)
        {
            if(pakageArray[i] <= min)
            {
                min = pakageArray[i];
                minIndex = i;
                // cout << pakageArray[i];
            }
        }
        // cout << "min is: " << pakageArray[minIndex];
        // cout << pakageArray[minIndex] << "   " << pakageArray[j] << endl;
        temp = pakageArray[j];
        pakageArray[j] = pakageArray[minIndex];
        pakageArray[minIndex] = temp;
    }

    for (int i = 0; i < arrayLength; i++)
    {
        cout << pakageArray[i] << " ";
    }


    getch();



}