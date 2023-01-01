#include <iostream>
using namespace std;

void pass(int marks);
void fail(int marks);

int main()
{
  int marks;

  cout << "enter your marks: ";
  cin >> marks;
  
  pass(marks);

  
}

void pass(int marks)
{
  if (marks >= 50)
    cout << "YOU PASSED " << endl;
  if (marks < 50)
    cout << "YOU FAILED " << endl;
}



