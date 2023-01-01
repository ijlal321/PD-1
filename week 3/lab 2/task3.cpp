#include <iostream>
using namespace std;

void chk_max(int, int);
void chk_min(int, int);
void chk_equal(int, int);


int main()
{
  int number_1, number_2, choice;

  while(true)
  {
    cout << "\nenter choice(1-3)";
    cin >> choice;

    cout << "enter number 1: ";
    cin >> number_1;
    cout << "enter number 2: ";
    cin >> number_2;

    if (choice == 1){
    chk_max(number_1, number_2);
    }
    if (choice == 2){
    chk_min(number_1, number_2);
    }
    if (choice == 3){
    chk_equal(number_1, number_2);;
    }

  }

}		


void chk_max(int number_1,int number_2 )
{
  if (number_1 > number_2)
  {
    cout << "number 1 is greater "<< endl;
  }
  if (number_1 < number_2)
  {
    cout << "number 2 is greater "<< endl;
  } 
  if (number_1 == number_2)
  {
    cout << "both are equal "<< endl;
  }
}

void chk_min(int number_1,int number_2 )
{
  if (number_1 > number_2)
  {
    cout << "number 2 is lesser "<< endl;
  }
  if (number_1 < number_2)
  {
    cout << "number 1 is lesser "<< endl;
  } 
  if (number_1 == number_2)
  {
    cout << "both are equal "<< endl;
  }
}


void chk_equal(int number_1,int number_2)
{
  if (number_1 == number_2)
  {
    cout << "both are equal "<< endl;
  }
  if (number_1 != number_2)
  {
    cout << "both are not equal "<< endl;
  }

}
