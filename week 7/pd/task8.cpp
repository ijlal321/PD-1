#include<iostream>
using namespace std;
# include <conio.h>

void cargo(double);

int main()
{
    double number;
    cout << "enter nr of cargo: ";
    cin >> number;
    cargo(number);
    getch();


}

void cargo(double number)
{
    double weight = 0;
    int minibus = 0, truck = 0, train = 0;
    double weightMinibus = 0, weightTruck = 0, weightTrain = 0;

    for (int i = 1; i <= number; i++)
    {
        cout << "enter weight: ";
        cin >> weight;

        if (weight <= 3)
        {
            minibus += 1;
            weightMinibus += weight;
        } 
        else if (weight <=11)
        {
            truck += 1;
            weightTruck += weight;
        } 
        else if (weight >11)
        {
            train += 1;
            weightTrain += weight;            
        } 
    }
    double totalcargo = weightMinibus + weightTrain + weightTruck;
    double perMinibus = (weightMinibus * 100) / totalcargo;
    double perTruck = (weightTruck * 100) / totalcargo;
    double perTrain = (weightTrain * 100) / totalcargo;

    double avgprice = ((weightMinibus * 200) + (weightTruck * 175) + (weightTrain * 120)) / totalcargo;

    cout << avgprice << endl << perMinibus << endl << perTruck << endl << perTrain << endl ;
    // cout << minibus << truck << train;
}