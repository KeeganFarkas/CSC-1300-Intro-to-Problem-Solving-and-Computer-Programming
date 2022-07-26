#include <iostream>
#include <string>
#include "Paranormal.h"
using namespace std;

void getParanormalData (int numEVP [INVESTIGATORS], string name [INVESTIGATORS], string date [INVESTIGATORS])
{
    for (short i = 0; i < 5; i++)
    {
        cout << "INVESTIGATOR " << i + 1 << ":\n        NAME - ";

        cin.ignore();
        getline (cin, name[i]);

        cout << "        DAY (ex: 10-22-2021) - ";

        getline (cin, date[i]);

        cout << "        NUMBER OF EVPs - ";

        cin >> numEVP[i];
    }    
}

void getStats (int numEVP [INVESTIGATORS], int *totalEVP, float *aveEVP, int *mostEVP)
{
    for (short i = 0; i < 5; i++)
    {
        *totalEVP += numEVP[i];        
    }

    *aveEVP = *totalEVP / 5.0;

    *mostEVP = numEVP[0];

    for (short i = 1; i < 5; i++)
    {
        if (*mostEVP < numEVP[i])
            *mostEVP = numEVP[i];
    }
}