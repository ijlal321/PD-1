#include <iostream>
using namespace std;

void chk_eligibility(int age);

int main()
{
  int age;

  cout << "enter your age: ";
  cin >> age;
  
  chk_eligibility(age);
  
}

void chk_eligibility(int age)
{

  if (age >= 18)
    cout << "You are eligible"<< endl;

  if (age < 18)
    cout << "You are not eligible"<< endl;

}



