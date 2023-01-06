# include <iostream>
using namespace std;

int main()
    {
    int number, remainder, head;
    cout << "enter a number: " ;
    cin >> number;

    remainder = number % 10;
    head = number - remainder;
    head = head / 10;
    // cout << remainder << " " << head; 



        if (head == 2)
        {
            cout << "twenty";
        }
        if (head == 3)
        {
            cout << "thirty";
        }
        if (head == 4)
        {
            cout << "fourty";
        }
        if (head == 5)
        {
            cout << "fifty";
        }
        if (head == 6)
        {
            cout << "sixty";
        }
        if (head == 7)
        {
            cout << "seventy";
        }
        if (head == 8)
        {
            cout << "eighty";
        }
        if (head == 9)
        {
            cout << "ninty";
        }


        cout << " ";


        if (head != 1){
            if (remainder == 0)
            {
                cout << "zero";
            }
            if (remainder == 1)
            {
                cout << "one";
            }
            if (remainder == 2)
            {
                cout << "two";
            }
            if (remainder == 3)
            {
                cout << "three";
            }
            if (remainder == 4)
            {
                cout << "four";
            }
            if (remainder == 5)
            {
                cout << "five";
            }
            if (remainder == 6)
            {
                cout << "six";
            }
            if (remainder == 7)
            {
                cout << "seven";
            }
            if (number == 8)
            {
                cout << "eight";
            }
            if (remainder == 9)
            {
                cout << "nine";
            }
        }

if (number == 10)
    {
        cout << "ten";
    }
if (number == 11)
    {
        cout << "eleven";
    }
if (number == 12)
    {
        cout << "twelve";
    }
if (number == 13)
    {
        cout << "thirteen";
    }
if (number == 14)
    {
        cout << "fourteen";
    }
if (number == 15)
    {
        cout << "fifteen";
    }
if (number == 16)
    {
        cout << "sixteen";
    }
if (number == 17)
    {
        cout << "seventeen";
    }
if (number == 18)
    {
        cout << "eighteen";
    }
if (number == 19)
    {
        cout << "ninteen";
    }



    







}