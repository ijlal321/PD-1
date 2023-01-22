#include <iostream>
using namespace std;
int digitSum(int num);
int main()
{
    int num;
    cin >> num;
    int result = digitSum(num);
    cout << result;
}
int digitSum(int num)
{
    int count = 0;
    while (num != 0)
    {
        int digit = num % 10;
        count = count + digit;
        num = num / 10;
    }
    return count;
}