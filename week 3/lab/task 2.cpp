#include <iostream>
using namespace std;

void add(int, int);

int main()
{
  int no1, no2, no3, no4, no5, no6;
  int sum;

  cout << "enter no 1: ";
  cin >> no1;
  cout << "enter your no 2: ";
  cin >> no2; 
  sum = no1 + no2;
  cout << "the sum of no's is " << sum << endl;

  cout << "enter no 3: ";
  cin >> no3;
  cout << "enter your no 4: ";
  cin >> no4; 
  sum = no3 + no4;
  cout << "the sum of no's is " << sum << endl;

  cout << "enter no 5: ";
  cin >> no5;
  cout << "enter your no 6: ";
  cin >> no6; 
  sum = no5 + no6;
  cout << "the sum of no's is " << sum << endl;

  add(no1, no2);
  
}

void add(int no_1, int no_2)
