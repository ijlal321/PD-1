# include <iostream>
using namespace std;


void  calculatePrice(int price, string country);

int main()
{
  string country;
  float price;

  while(true)
  {

    cout << "Enter name of youor country: ";
    cin >> country;

    cout << "Enter your ticket price: ";
    cin >> price;

    calculatePrice(price, country);
  }

}

void  calculatePrice(int price, string country)
{

  if (country == "pakistan")
  {
    price = (price * 95)/100;
  }

  if (country == "ireland")
  {
    price = (price * 90)/100;
  }

  if (country == "india")
  {
    price = (price * 80)/100;
  }

  if (country == "england")
  {
    price = (price * 70)/100;
  }

  if (country == "canada")
  {
    price = (price * 65)/100;
  }

  cout << "Your Total price is: " << price << endl;

}