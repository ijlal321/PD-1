#include <iostream>
using namespace std;

int main()
{

 string name;
 float inter, matric , ecat;
 double aggregate;

 cout << "enter your Name: " ;
 cin >> name;
 cout << "enter marks in matric (out of 1100): " ;
 cin >> matric;
 cout << "enter marks in inter (out of 1100): " ;
 cin >> inter;
 cout << "enter marks in ecat(out of 400): " ;
 cin >> ecat;
 aggregate = ( inter / 1100 * 50 ) + ( matric / 1100 * 40 ) + ( ecat/ 400 * 10 );
 cout << "Your Aggregate is: " << aggregate << " %";

}