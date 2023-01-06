# include <iostream>
using namespace std;



int main()
{
    double neededHours, availableDays, nrWrokers;
    double availableHours, neededDays;
    cout << "Enter no of hours needed[0 - 200000]: ";
    cin >> neededHours;

    cout << "Enter no of days available [0 - 20000]: ";
    cin >> availableDays;

    cout << "Enter no of workers available [0 - 200]: ";
    cin >> nrWrokers;

    availableDays = (availableDays * 0.9);

    availableHours = availableDays * 10;

    int totalHours = availableHours * nrWrokers;

    totalHours = totalHours-neededHours;

    if (totalHours >0)
    {
        cout << "Yes, you have "<< totalHours << " Hours left."<< endl;
    }
    if (totalHours <0)
    {
        cout << "Not enough time, you need "<< totalHours*(-1) << " Hours."<< endl;
    }










}