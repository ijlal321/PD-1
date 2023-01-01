# include<iostream>
using namespace std;

void isEQUAL(int a, int b);

int main()
{
  int a, b;

  cout << "enter 1st number: " << endl;
  cin >> a;

  cout << "enter 2st number: " << endl;
  cin >> b;

  isEQUAL(a,b);

}

void isEQUAL(int a, int b)
{
  if (a == b)
  {
    cout << "EQUAL" << endl;
  }
  if (a != b)
  {
    cout << "NOT EQUAL" << endl;
  }
}


    