#include<iostream>
using namespace std;
# include<conio.h>

int main()
{
    int arrayLength;
    cout << "enter nr of items: ";
    cin >> arrayLength;
    string itemsArray[arrayLength];

    for(int i=0; i<arrayLength; i++)
    {
        cout << "enter value: ";
        cin >> itemsArray[i];
    }

    int similar_Count = 0;
    for(int i=0; i<arrayLength-1; i++)
    {
        if (itemsArray[i] == itemsArray[i+1])
        {
            similar_Count += 1;
        }
    }


    int ans = (arrayLength * 2) + (arrayLength -1 - similar_Count);

    cout << ans;
    
    getch();

}