# include<iostream>
using namespace std;

void printMenu();
void calculateAggregate(string name, float matric, float inter, float ecat);
void compareMarks(string st1, int st1Ecat, string st2,int st2Ecat);

int main()
{
 
  printMenu();
  int option;

  cin>> option;

  if (option == 1)
  {
    calculateAggregate("ijlal", 1053, 1024, 283);
  } 
  if (option == 2)
  {
    compareMarks("ijla", 10, "bilal", 20);
  } 



}


void printMenu()
{
  cout << "     UNIVERSITY OF ENGINEERING AND TECHNOLOGY  \n\n\n\n\n" << endl;
  cout << "1. Calculate Aggregate "<< endl;
  cout << "2. Compare score" << endl;
  

}

void calculateAggregate(string name, float matric, float inter, float ecat)
{
  cout << "enter inter, matric, ecat marks ";
  cin >> inter;
  cin >> matric;
  cin >> ecat;
  float aggregate = (matric /1100* 20) + (inter /1100 * 50) + (ecat / 400 * 30);
  cout << "\nYour total aggregate is: " << (aggregate );

}

void compareMarks(string st1, int st1Ecat, string st2, int st2Ecat)
{
  cout << "enter name and marks of studnt 1";
  cin >>st1;
  cin >> st1Ecat;

  cout << "enter name and marks of studnt 2";
  cin >>st2;
  cin >> st2Ecat;

  if (st1Ecat > st2Ecat)
  {
    cout << st1 << " has higher score" << endl;
  }

  if (st1Ecat < st2Ecat)
  {
    cout << st2 << " has higher score" << endl;
  }


}

