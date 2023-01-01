#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);

void printA(int x, int y);
void printW(int x, int y);
void printA(int x, int y);
void printI(int x, int y);
void printS(int x, int y);


int main()
{
  system("cls");
  int x = 10;
  int y = 10;

  printA(x,y-4);
  printW(x, y-3);
  printA( x,  y-2);
  printI( x, y-1);
  printS( x, y);
  

}

void printA(int x, int y)
{
  gotoxy(x,y);
  cout << "A";
}

void printW(int x, int y)
{
  gotoxy(x,y);
  cout << "W";
}


void printI(int x, int y)
{
  gotoxy(x,y);
  cout << "I";
}
void printS(int x, int y)
{
  gotoxy(x,y);
  cout << "S";
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}