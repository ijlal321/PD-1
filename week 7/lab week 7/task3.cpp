#include <iostream>
using namespace std;
int digitFrequency(int num, int digit);
int main()
{
    int num;
    cin >> num;
    int digit;
    cin >> digit;
    int result = digitFrequency(num, digit);
    cout << result;
}
int digitFrequency(int num, int digit)
{
    int frequency = 0;
    while (num != 0)
    {
        int digit1 = num % 10;
        if (digit1 == digit)
        {
            frequency = frequency + 1;
        }
        num = num / 10;
    }
    return frequency;
}