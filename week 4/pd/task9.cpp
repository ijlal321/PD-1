# include<iostream>
using namespace std;

void chkValue(string a);

int main()
{
  string isValid;

  cout << "INPUT TRUE OR FALSE: ";
  cin >> isValid;

  chkValue(isValid);

}

void chkValue(string isValid)
{

  if (isValid == "true")
  {  
    cout << "False"<< endl;
  }

  if (isValid == "flase")
  {  
    cout << "TRUE"<< endl;
  }
}