#include <iostream>
using namespace std;

int main()
{

 double megaByte, bits;
 int conversion = 1000000 * 8;


 cout << "enter MegaByte " ;
 cin >> megaByte;

 bits = megaByte * conversion;
 cout << megaByte << " MB is equal to "<< bits << " bits";


}