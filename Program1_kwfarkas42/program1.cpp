/*
 *  Title:      program1.cpp
 *	Author:     Keegan Farkas	
 *	Date:       9/24/21
 *	Purpose:    This program was made to help elementary students with arithmetic operations and
 *              even/odd numbers.
 */
#include <iostream>

using namespace std;

int main()

{   //Declaration of variables
    short parity, sign, correctAnswer, answer, num, firstRandValue, secondRandValue;

    //Assigning random values to variables
    firstRandValue = rand() % 100;
    secondRandValue = rand() % 100;

    //Introduction phrases
    cout << "Welcome to the Basic Arithmetic Operations with two random numbers." << endl;
    cout << "Please select one arithmetic operation from the choices given below:" << endl;

    //Switch choices
    cout << "(1) Addition" << "\n(2) Subtraction" << "\n(3) Multiplication" << endl;

    //User choice
    cin >> num;

    //Switch statement for arithmetic options
    switch (num)
    {
        //Addition problem set
        case 1:
            cout << "You've selected addition. Please answer the result below -" << endl;
            cout << firstRandValue << " + " << secondRandValue << " =" << endl;

            cin >> answer;

            correctAnswer = firstRandValue + secondRandValue;
            break;
        
        //Subtraction problem set
        case 2:
            cout << "You've selected subtraction. Please answer the result below -" << endl;
            cout << firstRandValue << " - " << secondRandValue << " =" << endl;

            cin >> answer;

            correctAnswer = firstRandValue - secondRandValue;
            break;
        
        //Multiplication problem set
        case 3:
            cout << "You've selected multiplication. Please answer the result below -" << endl;
            cout << firstRandValue << " * " << secondRandValue << " =" << endl;

            cin >> answer;

            correctAnswer = firstRandValue * secondRandValue;
            break;
        
        //Program termination if user enters wrong input
        default:
            cerr << "Sorry, you've chosen a wrong option." << endl;
            cerr << "Exiting the program, please come back again!!";

            return -1;
        }

    //Output if answer is correct
    if (answer == correctAnswer)
        cout << "Congratulations, you are right." << endl;

    //Output if answer is incorrect
    else
        cout << "Sorry , the correct answer is " << correctAnswer << endl;

    //Introduction phrases for second part of program
    cout << "Answer the following questions for the correct result (" << correctAnswer << ")" << endl;
    cout << "Is it a (1) positive number, (2) negative number, or (3) zero?" << endl;

    //User input
    cin >> sign;

    //Switch statement for answer sign
    switch (sign)
    {
        //Outputs if user says the number is positive
        case 1:
            if (correctAnswer > 0)
                cout << "That's right, it's a positive number. Good job!" << endl;
            
            else if (correctAnswer < 0)
                cout << "Sorry, it's a negative number." << endl;
            
            else
                cout << "Sorry, it's zero." << endl;
            break;
        
        //Outputs if the user says the number is negative
        case 2:
            if (correctAnswer < 0)
                cout << "That's right, it's a negative number. Good job!" << endl;
            
            else if (correctAnswer > 0)
                cout << "Sorry, it's a positive number." << endl;

            else
                cout << "Sorry, it's zero." << endl;
            break;

        //Outputs if the user says the number is zero
        case 3:
            if (correctAnswer == 0)
                cout << "That's right, it's zero. Good job!" << endl;

            else if (correctAnswer < 0)
                cout << "Sorry, it's a negative number." << endl;

            else
                cout << "Sorry, it's a positive number." << endl;
            break;
            
        //Program termination if user enters wrong input
        default:
            cerr << "Sorry, you've chosen a wrong option." << endl;
            cerr << "Exiting the program, please come back again!!";

            return -1;
    }

    //Introduction for last part of program
    cout << "Is it a (1) even number (including zero), or (2) odd number?" << endl;

    //user input
    cin >> parity;

    //Switch statement for parity
    switch (parity)
    {
        //Outputs if user says the number is even
        case 1:
            if (correctAnswer % 2 == 0)
                cout << "That's right, it's an even number, Good job!";

            else
                cout << "Sorry, it's an odd number.";
            break;
        
        //Outputs if user says the number is odd
        case 2:
            if (correctAnswer % 2 != 0)
                cout << "That's right, it's an odd number, Good job!";

            else
                cout << "Sorry, it's an even number.";
            break;
        
        //Program termination if user enters wrong input
        default:
            cerr << "Sorry, you've chosen a wrong option." << endl;
            cerr << "Exiting the program, please come back again!!";

            return -1;
    }
            
    return 0;
}