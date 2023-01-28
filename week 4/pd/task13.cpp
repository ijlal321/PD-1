# include<iostream>
using namespace std;

int main()
{
  int catHolidays, hours;

  cout << "Enter no of holidays: ";
  cin >> catHolidays;

  float workingDays = (365 - catHolidays);
  float timeForGames = (workingDays * 63 + 20 * 127);
  float diff = (30000 - timeForGames );
  float tempor = (diff / 60);
  hours = tempor;
  int minutes = (tempor - hours) * 60;

  int reqHours;
  int reqMin;

  cout << "Enter no of hours cat need to play ";
  cin  >> reqHours;
  cout << "Enter no of minutes cat need to play ";
  cin >> reqMin;

  if (hours >= reqHours)
  {
    if (minutes >= reqMin)
    { 
      cout << "Cat will play, it has " << hours << " hours and " << minutes << " minutes to play" << endl;
    }
  }
  if (hours < reqHours)
  {
    if (minutes < reqMin)
    { 
      cout << "Cat will not play, it has " << hours << " hours and " << minutes << " minutes to play" << endl;
    }
  }





}