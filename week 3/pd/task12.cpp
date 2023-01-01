#include<iostream>
using namespace std;



int main()
{

  int redRoses, whiteRose, tulip;

  float price;

  cout << "Enter no. of red roses: ";
  cin >> redRoses;

  cout << "Enter no. of white roses: ";
  cin >> whiteRose;

  cout << "Enter no. of tulip: ";
  cin >> tulip;

  price = (redRoses * 2) + (whiteRose * 4.10) + (tulip * 2.5);

  if (price > 200)
  {
    cout << "Original Price is "<< price<< endl;   
    price = (price * 80)/100;
  }

  cout << "Your total Price is "<< price;





}