/*
    Title:      lab3d.cpp
    Author:     Keegan Farkas
    Date:       9/17/21
    Purpose:    This program is written to create login names for users.
*/
#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string firstname, lastname, finalname;
    int number;

    cout << "Please enter your login information: ";

    cin >> firstname;
    cin >> lastname;
    cin >> number;

    cout << "\nYour login name is: ";

    lastname.substr(0,5);
    firstname[0];

    finalname = lastname.substr(0,5) + firstname[0] + to_string(number % 100);

    if (lastname.length() < 5)
    {
        finalname = lastname + firstname[0] + to_string(number % 100);
    }

    cout << finalname;

    return 0;
}