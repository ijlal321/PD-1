# include <iostream>
using namespace std;

void is_eligible(int age);

int main()
{
 
  while(true)
  {
    int age;

    cout << "enter your age: ";
    cin >> age;
  
    is_eligible(age);
  }

}

void is_eligible(int age)
{

  if (age >= 18)
    cout << "You are Eligible" << endl;

  if (age < 18)
    cout << "You are not Eligible" << endl;

}