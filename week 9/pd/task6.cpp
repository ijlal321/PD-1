#include<iostream>
using namespace std;
# include<conio.h>

int main()
{
    int testArray[3];
    for (int i=0; i<3; i++)
    {
        cout << "enter array: ";
        cin >> testArray[i];
    }
    int nrIter;
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> nrIter;

    for (int i=0; i<nrIter; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (testArray[j] % 2 == 0)
            {
                testArray[j] -=2;
            }
            else
            {
                testArray[j] +=2;
            }
        }
    }

    cout << "{ " << testArray[0] << " " << testArray[1]<< " " << testArray[2] << " }";  

    getch();

}