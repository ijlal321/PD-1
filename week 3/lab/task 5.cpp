#include <iostream>
using namespace std;

void add(float, float);
void multiply(float, float);
void divide(float, float);
void subtract(float, float);

int main()
{
  float no1, no2;
  string operation = "+";  

  while (operation != "break")
  {
    cout << "enter no 1: ";
    cin >> no1;

    cout << "enter no 2: ";
    cin >> no2;

    cout << "enter operation: ";
    cin >> operation;

    if (operation == "+")
      add(no1, no2);
    if (operation == "-")
      subtract(no1, no2) ; 
    if (operation == "*")
      multiply(no1, no2);
    if (operation == "/")
      divide(no1, no2);
  }

}

void add(float no1, float no2)
{
  cout << "the sum is "<< no1 + no2 << endl; 
}

void subtract(float no1, float no2)
{
  cout << "the subtract is "<< no1 - no2 << endl; 
}

void multiply(float no1, float no2)
{
  cout << "the product is "<< no1 * no2 << endl; 
}

void divide(float no1, float no2)
{
  cout << "the divisison is "<< no1 / no2 << endl; 
}