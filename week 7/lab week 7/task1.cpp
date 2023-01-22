#include <iostream>
using namespace std;
void isSum(int num);
int main()
{
    int num;
    cin >> num;
    isSum(num);
}
void isSum(int num)
{
    int n1 = 0;
    int n2 = 1;
    int sum;
    cout << n1 << "," << n2;
    for (int x = 1; x <= num - 2; x++)
    {
        sum = n1 + n2;
        cout << "," << sum;
        n1 = n2;
        n2 = sum;
    }
}