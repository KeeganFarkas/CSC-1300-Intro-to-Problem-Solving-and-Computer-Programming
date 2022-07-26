/*
    Title:      lab3c.cpp
    Author:     Keegan Farkas
    Date:       9/17/21
    Purpose:    This program is written to find the total change amount
                as an integer number.
*/
#include <iostream>

using namespace std;

int main()
{
    int Change;

    cout << "Please enter amount: ";

    cin >> Change;

    //No Change
    if (Change == 0)
    {
        cout << "\nNo Change";
    }
    else
    {

        cout << "\nYour change is:";

        //Dollars
        if ((Change >= 100) && (Change < 200))
        {
            cout << "\n1 Dollar";
        } 
        if (Change >= 200)
        {
            cout << endl << Change / 100 << " Dollars";        
        }

        Change %= 100;

        //Quarters
        if ((Change >= 25) && (Change < 50))
        {
            cout << "\n1 Quarter";
        } 
        if (Change >= 50)
        {
            cout << endl << Change / 25 << " Quarters";
        }

        Change %= 25;
    
        //Dimes
        if ((Change >= 10) && (Change < 20))
        {
            cout << "\n1 Dime";
        }
        if (Change >= 20)
        {
            cout << "\n2 Dimes";
        }

        Change %= 10;

        //Nickels
        if (Change >= 5)
        {
            cout << "\n1 Nickel";
        }

        Change %= 5;

        //Pennies
        if (Change == 1)
        {
            cout << "\n1 Penny";
        }
        if (Change >= 2)
        {
            cout << endl << Change << " Pennies";
        }
    }
    
    return 0;
}