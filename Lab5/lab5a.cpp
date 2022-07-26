/*
*   Title:      Lab5a.cpp
*   Author:     Keegan Farkas
*   Date:       10/6/2021
*   Purpose:    This program was written to generate a nickname for the user from
*               random numbers.
*/
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
    int num;
    char first, second, third; 
    string name = "";

    srand ((unsigned) time(0));

    cout << "Hello!  Let's figure out a nickname for you!" << endl;
    cout <<  "Choose a number between (and including) 65 to 90:  ";

    cin >> num;

    while ((num < 65) || (num > 90))
    {
        cerr << "Oops!  Invalid entry.  Choose between 65-90:  ";

        cin >> num;
    }

    first = static_cast<char>(num);

    num = rand() % 5 + 1;

    if (num == 1)
        second = 'a';
    else if (num == 2)
        second = 'e';
    else if (num == 3)
        second = 'i';
    else if (num == 4)
        second = 'o';
    else
        second = 'u';
    
    num = rand() % 26 + 97;

    third = static_cast<char>(num);

    name = name + first + second + third + 'y';

    cout << endl << name;
    
    return 0;
}