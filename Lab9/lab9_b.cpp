/*
*   Title:      lab9_b.cpp
*   Author:     Keegan Farkas
*   Date:       11/05/2021
*   Purpose:    This program was written to take inputs from user until they enter a
*               number between 9 & 77.
*/
#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number between 9 and 77 (including 9 & 77): ";

    cin >> num;

    while (!cin || num < 9 || num > 77)
    {
        if ((num < 9 || num > 77) && cin)
            cout << "Oops!  You need to enter in a number between 9 and 77 (including 9 & 77).";
        else
            cout << "Oops!  It looks like you didn't enter a number.";
        
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\n\nEnter a number between 9 and 77 (including 9 & 77): ";

        cin >> num;
    }

    cout << "You entered a valid number!";

    return 0;
}