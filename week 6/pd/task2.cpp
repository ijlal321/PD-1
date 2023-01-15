# include<iostream>
using namespace std;
#include<conio.h>

void calculateResult(int, int, int, int, int, string);

int main()
{
    int subject1, subject2, subject3, subject4, subject5;
    string studentName;
    cout <<"enter marks for english: ";
    cin >> subject1;
    cout <<"enter marks for math: ";
    cin >> subject2;
    cout <<"enter marks for chemistry: ";
    cin >> subject3;
    cout <<"enter marks for social sciences: ";
    cin >> subject4;
    cout <<"enter marks for biology: ";
    cin >> subject5;

    cout <<"enter name of student: ";
    cin >> studentName;

    calculateResult(subject1, subject2, subject3, subject4, subject5, studentName);

    getch();
}

void calculateResult(int subject1,int subject2,int subject3,int subject4,int subject5,string studentName)
{
    double total = subject1 + subject2 + subject3 + subject4 + subject5;
    double percentage = total / 5;
    string grade;
    if (percentage < 60)
        grade = "C";
    else if (percentage < 70)
        grade = "B";
    else if (percentage < 80)
        grade = "B+";
    else if (percentage < 90)
        grade = "A";
    else if (percentage <= 100)
        grade = "A+";

    cout << "total marks of student "<< studentName << " are "<< total << " and percentage is " << percentage << "% with grade " << grade; 
}
