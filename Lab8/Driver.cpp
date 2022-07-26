/*
*   Title:      Driver.cpp
*   Author:     Keegan Farkas
*   Date:       11/02/2021
*   Purpose:    This program was written to take inputs from user about 5 investigators
*               and output certain statistics.
*/
#include <iostream>
#include <string>
#include "Paranormal.h"
using namespace std;

int main()
{
    int totalEVP = 0, mostEVP = 0, numEVP[INVESTIGATORS];
    float aveEVP;
    char location[100];
    string name[INVESTIGATORS], date[INVESTIGATORS];

    cout << "Hello!  What haunted location are you investigating?\n";

    cin.getline (location, 100);

    cout << "\n\nEnter the investigator's name, the day of their investigation, and the number";
    cout << " of EVPs they recorded on their voice recorder.\n";

    getParanormalData (numEVP, name, date);

    getStats (numEVP, & totalEVP, & aveEVP, & mostEVP);

    cout << "------------------------------------------------------------------------------\n";
    cout << "The total amount of EVPs recorded by all 5 investigators at " << location;
    cout << " is " << totalEVP << " recordings.\n\nThe average amount of EVPs recorded at ";
    cout << location <<  " is " << aveEVP << " recordings.\n\n\n\nThe investigator who ";
    cout << "recorded the most (" << mostEVP << " recordings) is ";

    for (short i = 0; i < 5; i++)
    {
        if (mostEVP == numEVP[i])
            cout << name[i] << " on " << date[i] << "!!\n";
    }

    cout << "------------------------------------------------------------------------------";

    return 0;
}