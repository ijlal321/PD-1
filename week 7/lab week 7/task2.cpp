#include <iostream>
using namespace std;
int totalDigits(int num);
int main()
{
    int num;
    cin >> num;
    int result = totalDigits(num);
    cout << result;
}
int totalDigits(int num)
{
    int count = 0;
    while (num != 0)
    {
        num = num / 10;
        count = count + 1;
    }
    return count;
}