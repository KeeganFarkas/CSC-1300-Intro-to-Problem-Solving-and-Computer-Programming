/*
*   Title:      Lab5a.cpp
*   Author:     Keegan Farkas
*   Date:       10/6/2021
*   Purpose:    This program was written to find the mean of two positive
*               numbers where the second number is greater than the first.
*/
#include <iostream>
using namespace std;

int main()
{
    int first, last;

    cout << "Please enter the beginning positive integer: ";

    cin >> first;

    cout << "\nPlease enter the ending positive integer: ";

    cin >> last;

    if ((first <= 0) || (last <= 0) || (first > last))
    {
        cerr << "\nInvalid input - integers must be positive and last must be >= to first.";

        return -1;
    }

    cout << "\nThe mean average of the consecutive positive integers from " << first << " to " << last << " is ";

    if (first == last)
        cout << first << ".";
    else
    {
        int j = last - first - 1;
        float mean = first;

        for (int i = 0; i <= j; i++)
        {
            first++;           
            mean += first;
        } 

        cout << mean / (j + 2.0) << ".";
    }
    return 0;
}