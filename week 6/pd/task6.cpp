# include<iostream>
using namespace std;
#include<conio.h>

void price(int nrStays, string month );

int main()
{
    string month;
    int nrStays;
    cout <<"enter noof stays: ";
    cin >> nrStays;

    cout <<"enter month: ";
    cin >> month;

    price(nrStays,month);

    getch();
}

void price(int nrStays, string month )
{
    float appartment, studio, price;

    if (month == "May" || month == "October")
    {
        appartment = nrStays * 65;
        studio = nrStays * 50;
        if (nrStays > 14)
        {
            studio = studio * 0.70;
        }
        else if (nrStays > 7)
        {
            studio = studio * 0.95;
        }
    }
    else if (month == "June" || month == "September")
    {
        appartment = nrStays * 68.70;
        studio = nrStays * 75.20;
        if (nrStays > 14)
        {
            studio = studio * 0.80;
        }
    }
    else if (month == "July" || month == "August")
    {
        appartment = nrStays * 77;
        studio = nrStays * 76;
    }

    if (nrStays > 14)
    {
        appartment = appartment * 0.9;
    }

    cout << "price for apartment is: " << appartment << " and price for studio is "<< studio;
}
