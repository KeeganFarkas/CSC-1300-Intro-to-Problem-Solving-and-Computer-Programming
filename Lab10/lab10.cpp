/*
*   Title:      lab10.cpp
*   Author:     Keegan Farkas
*   Date:       11/12/2021
*   Purpose:    This program was written to help the user make a secure password 
*               at the length of their choice.
*/
#include <iostream>
#include <limits>
#include <windows.h>
#include <unistd.h>
#include <cctype>
#include <string>
using namespace std;

bool testPassWord(char *);

int main()
{
    int num;

    cout << "How many characters should the password be (must be at least 4)?  ";

    cin >> num;

    while (!cin || num < 4)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nThere was a problem with what you entered.\n\n";
        cout << "How many characters should the password be (must be at least 4)?  ";

        cin >> num;
    }

    char *password = (char*) malloc(sizeof(num + 1));

    bool flag;
    
    do
    {
        cout << "\nEnter a password consisting of exactly 5 characters.\n";
        cout << "You must have at least one capital letter, one lowercase letter, one digit,\n";
        cout << "and one punctuation character (examples:  !#$%.?@).\n";
        cout << "The password can't contain any spaces.\n";

        cin.ignore();

        cin.get(password, numeric_limits<streamsize>::max());

        if (strlen(password) != num)
            do
            {
                cin.ignore();

                cout << "\nThere was a problem with what you entered.\nMaybe you didn't enter ";
                cout << num << " characters?  Please Try again:  ";

                cin.get(password, numeric_limits<streamsize>::max());
            }
            while(strlen(password) != num);

        cout << "Please wait - your password is being verified\n\n";

        sleep(3); // 3000 was doing 3000 seconds for me

        flag = testPassWord(password);
    }
    while(!flag);

    return 0;
}

bool testPassWord(char* password)
{
    bool flag = false, result = true;
    int i = 0;

    // Checking for uppercase letter
    while (*(password + i) != '\0')
    {
        if (isupper(*(password + i)))
            flag = true;

        i += 1;
    }
    if (flag == false)
    {
        cout << "Oops!  you didn't enter at least one uppercase letter!\n";

        result = false;
    }

    i = 0;
    flag = false;

    // Checking for lowercase letter
    while (*(password + i) != '\0')
    {
        if (islower(*(password + i)))
            flag = true;

        i += 1;
    }
    if (flag == false)
    {
        cout << "Oops!  you didn't enter at least one lowercase letter!\n";

        result = false;
    }

    i = 0;
    flag = false;

    // Checking for digit
    while (*(password + i) != '\0')
    {
        if (isdigit(*(password + i)))
            flag = true;

        i += 1;
    }
    if (flag == false)
    {
        cout << "Oops!  you didn't enter at least one digit!\n";

        result = false;
    }

    i = 0;
    flag = false;

    // Checking for punctuation
    while (*(password + i) != '\0')
    {
        if (ispunct(*(password + i)))
            flag = true;

        i += 1;
    }
    if (flag == false)
    {
        cout << "Oops!  you didn't enter at least one punctuation mark!\n";

        result = false;
    }

    i = 0;
    flag = true;

    // Checking for spaces
    while (*(password + i) != '\0')
    {
        if (*(password + i) == ' ')
            flag = false;

        i += 1;
    }
    if (flag == false)
    {
        cout << "Oops!  Your password contains a space!\n";

        result = false;
    }

    if (result == true)
        cout << "Yay! You came up with a valid password!";
    else
        cout << "----------Invalid password!----------\n";

    return result;
}
