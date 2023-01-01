#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);
void printMaze();
void playerMove(int x, int y);

int main()
{
  system("cls");
  printMaze();

  int x = 3;
  int y = 3;

  while(true)
  {
    playerMove(x,y);
    if (y < 7)
    {
      y  = y + 1;
    }
    if (y == 6)
    {
      gotoxy(3,6);
      cout << " ";
      y = 1;
    }
  }

}

void playerMove(int x, int y)
{
  gotoxy(x,y);
  cout << " ";
  gotoxy(x,y+1);
  cout << "P";
  Sleep(500);

}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}



void printMaze()
{
  cout << "* * * * * * * * * * * * * * *"  << endl;
  cout << "*                           *"  << endl;
  cout << "*                           *"  << endl;
  cout << "*                           *"  << endl;
  cout << "*                           *"  << endl;
  cout << "*                           *"  << endl;
  cout << "*                           *"  << endl;
  cout << "* * * * * * * * * * * * * * *"  << endl;




}