#include<iostream>
using namespace std;
#include<conio.h>

int main()
{
    int arrayLength;
    cout << "enternr of boxes: ";
    cin >> arrayLength;

    int boxes[arrayLength*3];

    for(int i = 0; i < arrayLength*3; i++)
    {
        if (i%3 == 0)
            cout << "enter length of box "<< i + 1<< " ";
        if (i%3 == 1)
            cout << "enter width of box "<< i + 1<< " ";
        if (i%3 == 2)
            cout << "enter height of box "<< i + 1<< " ";
        cin >> boxes[i];
    }

    int boxesDimension[arrayLength];
    int product=boxes[0], sum=0;

    for(int i =1; i<arrayLength*3; i++)
    {
        if(i%3 == 0)
        {
            sum += product;
            // cout << sum << " good";
            product = boxes[i];
        }
        else{

            // cout << product << endl;
            product = product * boxes[i];
        }


    }
    sum += product;
    cout << sum;
    getch();



}