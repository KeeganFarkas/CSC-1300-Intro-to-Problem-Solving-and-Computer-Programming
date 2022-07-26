/*
    Title:      lab3a.cpp
    Author:     Keegan Farkas
    Date:       9/17/21
    Purpose:    This program is written to find the lowest number out
                three given integers.
*/
#include <iostream>

using namespace std;

int main()
{
    int FirstNumber, SecondNumber, ThirdNumber;

    cout << "Please enter 3 numbers." << endl;
    cout << "First number: ";

    cin >> FirstNumber;

    cout << "Second number: ";

    cin >> SecondNumber;

    cout << "Third number: ";

    cin >> ThirdNumber;

    cout << "Smallest number is: ";

    if ((FirstNumber <= SecondNumber) && (FirstNumber <= ThirdNumber))
    {
        cout << FirstNumber;
    }
    else if ((SecondNumber <= FirstNumber) && (SecondNumber <= ThirdNumber))
    {
        cout << SecondNumber;
    }
    else
    {
        cout << ThirdNumber;
    }
    return 0;
} 