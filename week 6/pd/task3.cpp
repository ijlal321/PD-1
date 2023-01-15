# include<iostream>
using namespace std;
#include<conio.h>

void calculateZodiac(int, int , string);

int main()
{
    int date, year;
    string month;
    cout <<"enter date: ";
    cin >> date;
    cout <<"enter year: ";
    cin >> year;
    cout <<"enter month: ";
    cin >> month;

    calculateZodiac(date, year, month);

    getch();
}

void calculateZodiac(int date , int year, string month)
{
    string sign, symbol;
    if ((month == "March" && date >= 21) || (month == "April" && date <=19)){
        sign = "Aries";
        symbol = "Ram";}
    if ((month == "April" && date >= 20) || (month == "May" && date <= 20)){
        sign = "Tarus";
        symbol = "Bull";}
    if ((month == "May" && date >= 21) || (month == "June" && date <= 20)){
        sign = "Gemini";
        symbol = "twins";}
    if ((month == "June" && date >= 21) || (month == "July" && date <= 22) ){
        sign = "Cancer";
        symbol = "crab";}
    if ((month == "July" && date >= 23)  || (month == "August" && date <= 22) ){
        sign = "Leo";
        symbol = "lion";}
    if ((month == "August" && date >= 23)   || (month == "September" && date <= 22) ){
        sign = "Virgo";
        symbol = "virgin";}
    if ((month == "September" && date >= 23)   || (month == "October" && date <= 22) ){
        sign = "libra";
        symbol = "scale";}
    if ((month == "October" && date >= 23)   || (month == "November" && date <= 21) ){
        sign = "scorpio";
        symbol = "scorpion";}
    if ((month == "November" && date >= 22)   || (month == "December" && date <= 21) ){
        sign = "sagatarius";
        symbol = "archer";}
    if ((month == "December" && date >= 22)   || (month == "Janurary" && date <= 19) ){
        sign = "capricon";
        symbol = "Goat";}
    if ((month == "Janurary" && date >= 20)   || (month == "February" && date <= 18) ){
        sign = "aquarius";
        symbol = "Water bearer";}
    if ((month == "February" && date >= 19)   || (month == "Match" && date <= 20) ){
        sign = "pisces";
        symbol = "fishes";}

    cout << sign << "\t\t" << symbol;

    
}
