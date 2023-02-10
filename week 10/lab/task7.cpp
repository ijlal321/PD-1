#include<iostream>
using namespace std;
#include<conio.h>

int main()
{
    string word;
    cout << "enter word: ";
    getline(cin,word);

    // string fullword[20];
    // int limits;
    // cout << word.length();

    int limitWord[word.length()], z = 0;

    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == ' ')
        {
            limitWord[z] = i;
            z+=1;
        }
    }
    limitWord[z]= word.length();
    // cout << limitWord[0] << limitWord[1] << limitWord[2] ;

    // cout << z;

    for (int i = z-1; i >= 0; i --)
    {
        for (int j = limitWord[i]+1; j<limitWord[i+1]; j++)
        {
            cout << word[j];
        }
        cout << endl;
    }
        for (int j = 0; j<limitWord[0]; j++)
            cout << word[j];

    getch();
    return 0;

}