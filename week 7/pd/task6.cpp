#include<iostream>
using namespace std;
# include <conio.h>

void treated();

int main()
{

    treated();
    getch();


}

void treated()
{
    int nrDays, totalTreated = 0, totalUntreated = 0;
    cout << "enter nrDays";
    cin >> nrDays;
    int nrPatients;
    int nrDoctors = 7;

    for (int i = 1; i<= nrDays; i++)
    {
        cout << "enter nr of patients: ";
        cin >>  nrPatients;

        if (i % 3 == 0 && (totalUntreated > totalTreated))
        {
            nrDoctors += 1;
        }
        
        if (nrPatients > nrDoctors)
        {
            totalUntreated += (nrPatients - nrDoctors);
            totalTreated += (nrDoctors);

            cout << "total treated are " << totalTreated <<  " and total untreated are " << totalUntreated;
        }
        else if (nrPatients <= nrDoctors)
        {
            totalTreated += nrPatients;
            cout << "total treated are " << totalTreated <<  " and total untreated are " << totalUntreated;
        }
    }
    // cout << "total treated are " << totalTreated <<  " and total untreated are " << totalUntreated;
}