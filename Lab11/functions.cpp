/*
	Title:  	functions.cpp
	Author:  	Keegan Farkas
	Date:  		11/19/2021
	Purpose:  	A lab assignment to practice with array of pointers
*/
#include <iostream>
#include <string>
#include "pollution.h"
using namespace std;

void enterFactoryNames(string* factoryNames)
{
    for (short i = 0; i < SIZE; i++)
    {
        cout << "\nName of FACTORY " << i + 1 << ":  ";
        
        getline(cin, *(factoryNames + i));
    }
}

float* makeArray(int years)
{
    float* Array = (float*) malloc(sizeof(float) * years);
    return Array;
}

void enterCOData(float* factoryCOData, int years)
{
    cout << "\n\nCarbon Monoxide (CO) average level per hour (in parts per million)\n";

    for(short i = 0; i < years; i++)
    {
        cout << "\tYEAR " << i + 1 << ":  ";

        cin >> *(factoryCOData + i);
    }
}

void enterNO2Data(float* factoryNO2Data, int years)
{
    cout << "\nNitrogen Dioxide (NO2) average level per hour (in parts per billion)\n";

    for(short i = 0; i < years; i++)
    {
        cout << "\tYEAR " << i + 1 << ":  ";

        cin >> *(factoryNO2Data + i);
    }
}

void enterO3Data(float* factoryO3Data, int years)
{
    cout << "\nOzone (O3) average level per 8 hours (in parts per million)\n";

    for(short i = 0; i < years; i++)
    {
        cout << "\tYEAR " << i + 1 << ":  ";

        cin >> *(factoryO3Data + i);
    }
}

void printOverLimit(string* factoryNames, float** data, int years, float limit)
{
    for(short i = 0; i < SIZE; i++)
    {
        bool flag = false;

        for (short j = 0; j < years; j++)
        {
            if(*(*(data + i) + j) > limit)
                flag = true;
        }
        if(flag)
            cout << *(factoryNames + i) << endl;
    }
}

void getLargest(string* factoryNames, float** data, int years, float& largest, string& largestFactory, int& largestYear)
{
    largest = 0;
    for(short i = 0; i < SIZE; i++)
    {
        for(short j = 0; j < years; j++)
        {
            if(*(*(data + i) + j) > largest)
            {
                largest = *(*(data + i) + j);
                largestFactory = *(factoryNames + i);
                largestYear = j;
            }

        }
    }
}

