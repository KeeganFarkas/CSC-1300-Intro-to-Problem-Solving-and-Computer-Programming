/*
*   Title:      main.cpp
*   Author:     Keegan Farkas
*   Date:       11/07/2021
*   Purpose:    This program was written to read numbers from a text file and 
*               perform the following tasks:
*               1) The summation of all the items
*               2) The number of odd and even values
*               3) The number of positive and negative values
*               4) The summation of mirror index pairs
*               5) The maximum value among all the items
*               6) The minimum value among all the items
*               7) The mean value among all the items
*               8) The median value among all the items
*               9) Display all the items as it is stored (forward traversal)
*               10) Display the items backward
*/
#include <iostream>
#include "fileio.h"
#include "utils.h"
#include "statistics.h"

using namespace std;

int main(int argc, char* argv[])
{
    // Checks only the name of the file is passed as an argument
    if(argc != 2)
    {
        cerr << "The usage of the program: ./<name_of_the_exectuable> <name_of_the_text_file>" << endl;
        return -1;
    }

    // Variable to hold the size of the array
    int arraySize;

    // Assigning myArray with the ReadFile function which will read the numbers from the file   
    int *myArray = ReadFile(argv[1], &arraySize);

    // Statement to print the sumation of all elements
    cout << "The sumation of all the elements of array is " << Sum(myArray, arraySize);
    
    // Function to print the count of all odds and evens
    CountOddsAndEvens(myArray, arraySize);

    // Function to print the count of all positive and negative numbers
    CountPositivesAndNegatives(myArray, arraySize);

    // Function to print the som of the mirror index pairs
    SumOfMirrorIndexPairs(myArray, arraySize);

    // Function to print the array forwards
    DisplayArrayForward(myArray, arraySize);

    // Function to print the array backwards
    DisplayArrayBackward(myArray, arraySize);

    // Function to sort the array from least to greatest
    SortArray(myArray, arraySize);

    // Statement to print the largest number
    cout << "\nThe maximum element is " << MaximumElement(myArray, arraySize) << endl;

    // Statement to print the smallest number
    cout << "The minimum element is " << MinimumElement(myArray, arraySize) << endl;

    // Statement to print the mean value
    cout << "The mean value of the array is " << Mean(myArray, arraySize) << endl;

    // Statement to print the median value
    cout << "The median value of the array is " << Median(myArray, arraySize);

    // End of the program
    return 0;
}