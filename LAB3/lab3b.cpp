/*
    Title:      lab3b.cpp
    Author:     Keegan Farkas
    Date:       9/17/21
    Purpose:    This program is written to find whether or not a 
                given year is a leap year or not.
*/
#include <iostream>

using namespace std;

int main()
{
    int Year;

    cout << "Please enter a year: ";

    cin >> Year;

    if (((Year % 4 == 0) && (Year % 100)) || (Year % 400 == 0))
    {
        cout << "\nTrue. " << Year << " is a leap year.";
    }
    else 
    {
        cout << "\nFalse. " << Year << " is not a leap year.";
    }

    return 0;
}