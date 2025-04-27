#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int minutesPerHour = 60;
    int hoursPerDay = 24;
    int daysPerWeek = 7;
    int weeksPerYear = 52;
    int minutesPerDay = minutesPerHour * hoursPerDay;
    int minutesPerWeek = minutesPerDay * daysPerWeek;
    int minutesPerYear = minutesPerWeek * weeksPerYear;         
    cout << "Minutes in a year: " << minutesPerYear << endl;
    cout << "Minutes in a week: " << minutesPerWeek << endl;        
    cout << "Minutes in a day: " << minutesPerDay << endl;
    cout << "Minutes in an hour: " << minutesPerHour << endl;
    cout << "Hours in a day: " << hoursPerDay << endl;
    cout << "Days in a week: " << daysPerWeek << endl;

    cout << "Weeks in a year: " << weeksPerYear << endl;
    cout << "Hours in a week: " << hoursPerDay * daysPerWeek << endl;
    cout << "Hours in a year: " << hoursPerDay * daysPerWeek * weeksPerYear << endl;
    cout << "Days in a year: " << daysPerWeek * weeksPerYear << endl;
    cout << "Minutes in a month: " << minutesPerYear / 12 << endl;
    cout << "Hours in a month: " << hoursPerDay * daysPerWeek * weeksPerYear / 12 << endl;
    cout << "Days in a month: " << daysPerWeek * weeksPerYear / 12 << endl;
    cout << "Weeks in a month: " << weeksPerYear / 12 << endl;
    cout << "Seconds in a year: " << minutesPerYear * 60 << endl;
    cout << "Seconds in a week: " << minutesPerWeek * 60 << endl;
    cout << "Seconds in a day: " << minutesPerDay * 60 << endl;
    cout << "Seconds in an hour: " << minutesPerHour * 60 << endl;
    cout << "Seconds in a month: " << minutesPerYear * 60 / 12 << endl;
    cout << "Seconds in a week: " << minutesPerWeek * 60 / 12 << endl;
    cout << "Seconds in a day: " << minutesPerDay * 60 / 12 << endl;
    cout << "Seconds in an hour: " << minutesPerHour * 60 / 12 << endl;
    cout << "Seconds in a year: " << minutesPerYear * 60 << endl;
    cout << "Seconds in a week: " << minutesPerWeek * 60 << endl;
    cout << "Seconds in a day: " << minutesPerDay * 60 << endl;
    cout << "Seconds in an hour: " << minutesPerHour * 60 << endl;
    cout << "Seconds in a month: " << minutesPerYear * 60 / 12 << endl;
    cout << "Seconds in a week: " << minutesPerWeek * 60 / 12 << endl;
    cout << "Seconds in a day: " << minutesPerDay * 60 / 12 << endl;

    return 0; //returning 0 to the operating system
}