#include <iostream>
using namespace std;

int main()
{

int no_1, no_2, no_3, no_4, no_5, no_6, no_7, no_8, no_9 , no_10;

cout << "enter no 1: ";
cin >> no_1;
cout << "enter no 2: ";
cin >> no_2;
cout << "enter no 3: ";
cin >> no_3;
cout << "enter no 4: ";
cin >> no_4;
cout << "enter no 5: ";
cin >> no_5;
cout << "enter no 6: ";
cin >> no_6;
cout << "enter no 7: ";
cin >> no_7;
cout << "enter no 8: ";
cin >> no_8;
cout << "enter no 9: ";
cin >> no_9;
cout << "enter no 10: ";
cin >> no_10;

/*
int add = no_1 + no_2 + no_8+ no_9;
int subtract = no_5 - no_6;
float divide = no_3 / no_7;
float multiply = no_4 * no_10;

cout << "add is " << add << "\nsubtract is " << subtract << "\ndivide is "<< divide << "\nmultiply is " << multiply << endl;
*/

float result = (no_1 + no_2 + no_8+ no_9) + (no_5 - no_6) + (no_3 / no_7) + (no_4 * no_10); 
cout << "result is " << result;

}