#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);
void printI();
void printJ();
void printL();
void printA();

int main()
{
  system("cls");


  printI();
  printJ();
  printL();
  printA();

}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

void printI()
{
  gotoxy(10,10);
  cout << "* * * * *\n";
  gotoxy(10,11);
  cout << "    *    \n";
  gotoxy(10,12);
  cout << "    *    \n";
  gotoxy(10,13);
  cout << "    *    \n";
  gotoxy(10,14);
  cout << "* * * * *\n";
}

void printJ()
{
  gotoxy(24,10);
  cout << "* * * * *\n";
  gotoxy(24,11);
  cout << "       * \n";
  gotoxy(24,12);
  cout << "       * \n";
  gotoxy(24,13);
  cout << "      *  \n";
  gotoxy(24,14);
  cout << "  * *    \n";
}

void printL()
{
  gotoxy(38,10);
  cout << "*        \n";
  gotoxy(38,11);
  cout << "*        \n";
  gotoxy(38,12);
  cout << "*        \n";
  gotoxy(38,13);
  cout << "*        \n";
  gotoxy(38,14);
  cout << "* * * * *\n";
}

void printA()
{
  gotoxy(52,10);
  cout << "    *    \n";
  gotoxy(52,11);
  cout << "   * *   \n";
  gotoxy(52,12);
  cout << "  * * *  \n";
  gotoxy(52,13);
  cout << " *     * \n";
  gotoxy(52,14);
  cout << "*       *\n";
}



