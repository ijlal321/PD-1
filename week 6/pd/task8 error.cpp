# include<iostream>
using namespace std;
#include<conio.h>

int findBorder(int, int, int);

int main()
{

    int height, xCor, yCor;
    cout <<"enter height: ";
    cin >> height;

    cout <<"enter x cordinate: ";
    cin >> xCor;

    cout <<"enter y cordinate: ";
    cin >> yCor;

    findBorder(height, xCor, yCor);

    getch();
}

int findBorder(int height,int xCor,int yCor)
{
    int x_boundary, y_boundary;
    int base = height * 3;
    int roof = height * 4;

    if ((xCor > base || yCor> roof ) || (xCor < 0 || yCor < 0))
    {
        cout << "outside";
        return 0;
    }

    if (x_cor < base)
    {
        if 
    }




}
