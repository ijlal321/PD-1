#include <iostream>
using namespace std;

void chk_even(int);

int main()
{
  int no;

  while(true)
  {
    cout << "enter a no: ";
    cin >> no;
    chk_even(no);
  }

}


void chk_even(int no)
{
  if (no % 2 == 0)
    cout << "no is even"<< endl;
  if (no % 2 != 0)
    cout << "no is odd" << endl;s
}
