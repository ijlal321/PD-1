# include<iostream>
using namespace std;
#include<conio.h>

void activity(string, string);

int main()
{
    string temperature, humidity;
    cout <<"enter temperature: ";
    cin >> temperature;

    cout <<"enter humidity: ";
    cin >> humidity;

    activity(temperature, humidity);

    getch();
}

void activity(string temperature, string humidity)
{
    if (temperature == "warm")
    {
        if (humidity == "dry")
            cout << "play tennis";
        if (humidity == "humid")
            cout << "swim";
    }
    if (temperature == "cold")
    {
        if (humidity == "dry")
            cout << "play basketball";
        if (humidity == "humid")
            cout << "watch tv";
    }
}
