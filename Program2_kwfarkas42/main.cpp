/*
 * Author: Keegan Farkas
 * Email: kwfarkas42@tntech.edu
 * 
 * The purpose of this program is to perform a set of standard
 * math fuctions for a given positive number.
 * 
 * Last edited on Saturday, October 16, 2021 @ 12:30 AM
 */ 

#include <iostream>
#include "utils.h"

using namespace std;

// Driver code
int main()
{
    long long n = 1;

    //Intro Statements
    cout << "Welcome to the Standard Math Program.\n";
    cout << "Given a positive number (n), the program can compute:\n";
    cout << "- Sum from 1 to n\n- Factorial of n\n- Display the times table of n\n";
    cout << "- Checks whether n is even or odd\n- Checks whether or not n is a prime n\n";
    cout << "- Checks whether or not n is an Armstrong number\n\n";

    //While loop to keep the program going until the user enters 0
    while (n != 0)
    {
        //Do while loop to keep asking the user for an input until it is positive or 0
        do
        {
            cout << "Please enter a positive number (0 to terminate the program): ";

            cin >> n;

            if (n < 0)
            {
                cerr << "Sorry, no negative number please.\n";
            }
        }
        while (n < 0);

        //If statement to exit the loop when the user enters 0
        if (n == 0)
        {
            cout << "Thank you! See you again.";
            break;
        }

        //Statement to output the sum from 1 to n
        cout << "The summation from 1 to " << n << " is: " << Sum(n) << "\n\n";

        //Statement to output the factorial of n
        cout << "The factorial of " << n << " is: " << Factorial(n) << "\n\n";

        //Statement to display the times table of n
        cout << "The times table for " << n << " is as follows:\n";
        TimesTable(n);

        //Statement to check whether n is even or odd
        if (IsEven(n))
            cout << endl << n << " is an even number.\n\n";
        else
            cout << endl << n << " is an odd number.\n\n";

        //Statement to check whether or not n is prime
        if (IsPrime(n))
            cout << n << " is a prime number.\n\n";
        else
            cout << n << " is NOT a prime number.\n\n";

        //Statement to check whether or not n is an armstrong number
        if (IsArmstrongNumber(n))
            cout << n << " is an armstrong number.\n\n";
        else
            cout << n << " is NOT an armstrong number.\n\n";
    }

    return 0;
}