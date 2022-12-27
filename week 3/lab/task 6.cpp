#include <iostream>
using namespace std;

void pass(string name);

int main()
{
  string marks;

  while(true)
  {
    cout << "enter your name: ";
    cin >> marks;
  
    pass(marks);
  }
  
}

void pass(string name)
{
  cout << "my name is " << name << endl;
}



