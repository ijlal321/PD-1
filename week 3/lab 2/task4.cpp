#include <iostream>
using namespace std;

void calculateBill(int ,string);

int main()
{
  float amount;
  string day;

  cout << "enter purchase amount: " ;
  cin >> amount;

  cout << "enter day: " ;
  cin >> day;
  
  calculateBill(amount, day);
}

void calculateBill(int amount, string day)
{
  if (day == "sunday")
  {
    amount = amount * 0.90;
  }
  cout << "Your total amount is: " << amount;
}		


