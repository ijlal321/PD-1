# include<iostream>

using namespace std;

float taxCalculator(char type, float price);

int main()
{
    char type;
    float price;

    cout << "enter price: ";
    cin >> price;

    cout << "enter type: ";
    cin >> type;

    cout << taxCalculator(type, price);


}

float taxCalculator(char type, float price)
{
    if (type == 'M')
    {
        price = price * 1.06;
    }
    if (type == 'E')
    {
        price = price * 1.08;
    }
    if (type == 'S')
    {
        price = price * 1.1;
    }
    if (type == 'V')
    {
        price = price * 1.12;
    }
    if (type == 'T')
    {
        price = price * 1.15;
    }

    return price;



}
