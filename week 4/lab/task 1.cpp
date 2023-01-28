#include <iostream>
using namespace std;

void info(int, string, string, float);

int main()
{
  int marks;
  float aggregate;
  string name, section;
  cout << "enter your marks: ";
  cin >> marks;
  cout << "enter your name: ";
  cin >> name;
  cout << "enter your aggregate: ";
  cin >> aggregate;
  cout << "enter your section: ";
  cin >> section;
  info(marks, name, section, aggregate);  

}

void info(int marks, string name, string section, float aggregate)
{
  cout << "my name is "<< name << " and my marks are "<< marks << " and my aggregate is " << aggregate << " and my section is " << section  ;
}
