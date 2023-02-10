#include<iostream>
using namespace std;
#include<conio.h>

int main()
{
    int arrayLength;
    cout << "enter how many words you want to enter";
    cin >> arrayLength;

    string words[arrayLength];

    for(int i = 0; i < arrayLength; i++)
    {
        cout << "enter word "<< i + 1<< " ";
        cin >> words[i];
    }

    char findLetter;
    cout << "enter word you want to find";
    cin >> findLetter;


    int count = 0;
    for (int i = 0; i<arrayLength; i++)
    {
        for (int j=0; j<words[i].length(); j++)
        {
            if (findLetter == words[i][j])
            {
                count +=1;
            }
        }
    }
    cout << "total count is: " << count;
    getch();



}