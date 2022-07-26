#include <iostream>
using namespace std;

// Utility function to perform the selection sort
void SortArray(int* myArray, int arraySize)
{
    for(int i = 0; i < arraySize - 1; i++)
    {
        int minIndex = i;
        for(int j = i + 1; j < arraySize; j++)
        {
            if(myArray[j] < myArray[minIndex])
                minIndex = j;
        }

        // Swaping elements
        int temp = myArray[i];
        myArray[i] = myArray[minIndex];
        myArray[minIndex] = temp;
    }
}

// Function returns the last element since they are ordered from least to greatest
int MaximumElement(int* myArray, int arraySize)
{
    int result = myArray[arraySize - 1];
    return result;
}

// Function returns the first element since they are ordered from least to greatest
int MinimumElement(int* myArray, int arraySize)
{
    int result = myArray[0];
    return result;
}

// Adds up all the numbers in the array and divides by the size to return the average
double Mean(int* myArray, int arraySize)
{
    double result = 0;

    for (short i = 0; i < arraySize; i++)
    {
        result += myArray[i];
    }

    result /= arraySize;
    return result;
}

// If the array size is odd, then the function devides the array size by 2 since that 
// is the middle number
// If the array size is even, then the function finds the 2 middle numbers and divides
// them by 2
double Median(int* myArray, int arraySize)
{
    double result;
    if (arraySize % 2 == 1)
        result = myArray[arraySize / 2];
    else
    {
        result = myArray[arraySize / 2] + myArray[arraySize / 2 - 1];
        result /= 2;
    }
    return result;
}