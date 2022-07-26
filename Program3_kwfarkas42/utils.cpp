#include <iostream>
using namespace std;

// For loop to add up all the numbers in the array
long long Sum(int* myArray, int arraySize)
{
    long long result = 0;
    for (short i = 0; i < arraySize; i++)
    {
        result += myArray[i];
    }
    return result;
}

// For loop to decide if each number is odd or even and then prints the amount of each
void CountOddsAndEvens(int* myArray, int arraySize)
{
    int odd = 0, even = 0;

    for (short i = 0; i < arraySize; i++)
    {
        if (myArray[i] % 2 != 0)
            odd += 1;
        else
            even += 1;
    }

    cout << "\nCount of even number(s): " << even << endl;
    cout << "Count of odd number(s): " << odd << endl;
}

// For loop to decide if each number is positive or negative and then prints the amount of each
void CountPositivesAndNegatives(int* myArray, int arraySize)
{
    int positive = 0, negative = 0;

    for (short i = 0; i < arraySize; i++)
    {
        if (myArray[i] > 0)
            positive += 1;
        else
            negative += 1;
    }

    cout << "Count of positive number(s): " << positive << endl;
    cout << "Count of negative number(s): " << negative << endl;
}

// While loop that adds the mirror index pairs until they cross or are equal
// If they are equal it prints the lone number
void SumOfMirrorIndexPairs(int* myArray, int arraySize)
{
    short i = 0, j = arraySize - 1;

    while (i < j)
    {
        cout << "The sum of " << myArray[i] << " and " << myArray[j] << " is ";
        cout << myArray[i] + myArray[j] << endl;
        
        i += 1;
        j -= 1;
    }

    if (i == j)
        cout << "Lone item: " << myArray[i] << endl;
}

// For loop to print the numbers in the order they were given
void DisplayArrayForward(int* myArray, int arraySize)
{
    cout << "Forward traversal of the array:\n";

    for (short i = 0; i < arraySize; i++)
        cout << myArray[i] << " "; 
}

// For loop to display the numbers opposite of the way they were given
void DisplayArrayBackward(int* myArray, int arraySize)
{
    cout << "\nBackward traversal of the array:\n";

    for (short i = arraySize - 1; i >= 0; i--)
        cout << myArray[i] << " ";
}