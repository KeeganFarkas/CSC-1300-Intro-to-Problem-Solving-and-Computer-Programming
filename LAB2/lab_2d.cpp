/*
    Title:      lab_2d.cpp
    Author:     Keegan Farkas
    Date:       9/3/21
    Purpose:    This program is written to help to help dogs 
                calculate how many years they will be in prison
                for stealling bones.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int BonesStolen, TotalDays;
    const int Days = 83;
    float TotalYears;

    cout <<"\n\nHow many bones have you stolen?  ";

    cin >> BonesStolen;

    TotalDays = BonesStolen * Days;
    TotalYears = TotalDays / 365.0;

    cout << "\nYou must go to prison for " << TotalDays << " days, which is " << TotalYears << " years.";

    return 0;
}