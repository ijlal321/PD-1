#include<iostream>
using namespace std;
#include<conio.h>


int cycleArray[10];
bool isRepeatingCycle(int);

int main()
{
    int cycleLength;
    cout << "enter cycle length: ";
    cin >> cycleLength;

    cout << isRepeatingCycle(cycleLength);
    getch();

}

bool isRepeatingCycle(int cycleLength)
{
    int arrayLength;
    cout << "enter how many words you want to enter: ";
    cin >> arrayLength;

    for (int i=0; i<arrayLength; i++)
    {
        cout << "enter value: ";
        cin >> cycleArray[i];
    }

    // int extralimit;
    // if (arrayLength % cycleLength != 0)
    // {
    //     extralimit = arrayLength - cycleLength;   
    // }


    for(int i = 0; i < (arrayLength-cycleLength); i ++)
    {
        if(cycleArray[i] != cycleArray[i+3])
        {
            return false;
        }
    }
    return true;
}
