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
    
    if (xCor == yCor && yCor == height)
    {
        cout << "Border";
        return 0;
    }
    if ((xCor > base || yCor> roof ) || (xCor < 0 || yCor < 0))
    {
        cout << "outside ";
        return 0;
    }

    if (yCor==0 || yCor ==height)
    {
        if (xCor >=0 && xCor <= base)
        {
            cout << "border ";
            return 0;     
        }
    }
    if ((xCor==height) || (xCor ==height*2))
    {
        if(yCor >= height && yCor <= roof)
        {
        cout << "border ";
        return 0; 
        }    
    }
    if ((xCor == 0 || xCor == base ) && (yCor <= height && yCor >=0))
    {
        cout << "border ";
        return 0;         
    }


    if (xCor % height == 0 && yCor % height ==0)
    {
        if (xCor==0)
        {
            if (yCor <= height)
            {
            cout << "Border";
            return 0;
            }
        }
        else if (yCor == 0)
        {
            if (xCor <= base)
            {
            cout << "Border";
            return 0;
            }
        }
        // else if (x>= height &&  x<= height * 2 && y>= height && y< height )
        // {
        //     /* code */
        // }
        
        // cout << "Border";
        // return 0;
    }

    if (yCor < (height))
    {
        if (xCor < base)
        {
        cout << "inside";
        return 0;
        }
    }
    if (xCor > (height) && xCor < (height * 2))
    {
        if (yCor > height && yCor < roof)
        {
        cout << "inside";
        return 0;
        }
    }
    cout << "outside";
    return 0;




}
