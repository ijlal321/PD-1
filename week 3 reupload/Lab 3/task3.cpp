#include <iostream>
using namespace std;

int main()
{

 float pound, kg;
 float conversion = 0.45;


 cout << "enter weight in lbs (pounds): " ;
 cin >> pound;
 kg = pound * conversion;
 cout << pound << " pounds is equal to "<<  kg << " kg";


}