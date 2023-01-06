# include<iostream>
using namespace std;

void pyramidVolume(int length, int width, int height, string unit);

int main()
{
    double length, width, height, volume;
    string unit;
    cout << "enter length: ";
    cin >> length;

    cout << "enter width: ";
    cin >> width;

    cout << "enter height: ";
    cin >> height;

    cout << "enter unit: ";
    cin >> unit;

    pyramidVolume(length, width, height, unit);

}

void pyramidVolume(int length, int width, int height, string unit)
{

    double volume = (length * width * height) / 3;

    if (unit == "cm")
    {
        volume = volume * 1000000;
    } 
    if (unit == "km")
    {
        volume = volume / 1000000000;
    } 
    if (unit == "mm")
    {
        volume = volume * 1000000000;
    } 

    cout << volume;


}
