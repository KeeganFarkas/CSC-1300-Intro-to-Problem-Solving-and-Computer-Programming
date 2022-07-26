/*
    Title:      lab_2c.cpp
    Author:     Keegan Farkas
    Date:       9/3/21
    Purpose:    This program is written to help students find the
                average of three test grades.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string StudentName;
    float Test1, Test2, Test3, Average;
    const int TotalGrades = 3;

    cout << "\n\nEnter the student's name: ";

    getline(cin, StudentName);

    cout << "Enter " << StudentName << "'s first test grade: ";

    cin >> Test1;

    cout << "Enter " << StudentName << "'s second test grade: ";

    cin >> Test2;

    cout << "Enter " << StudentName << "'s third test grade: ";

    cin >> Test3;

    Average = (Test1 + Test2 + Test3) / TotalGrades;

    cout << endl << StudentName << " has a test average of " << Average;

    return 0;
}