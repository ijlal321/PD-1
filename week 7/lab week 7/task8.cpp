#include <iostream>
using namespace std;
int sum();
int main()
{
    int result = sum();
    cout << result;
}
int sum()
{
    int total;
    total = 0;
    for (int i = 1; i <= 100; i++)
    {
        total = total + i;
    }
    return total;
}