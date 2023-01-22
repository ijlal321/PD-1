#include <iostream>
using namespace std;
void printTable(int num);
int main()
{
    int num;
    cin >> num;
    printTable(num);
}
void printTable(int num)
{
    for (int i = 1; i <= 10; i++)
        cout << num << "*" << i << "=" << num * i << endl;
}