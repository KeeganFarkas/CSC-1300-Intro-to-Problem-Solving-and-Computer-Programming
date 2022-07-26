/*
*   Title:      Lab7.cpp
*   Author:     Keegan Farkas
*   Date:       10/28/2021
*   Purpose:    This program was written to calculate the area of certain shapes
*               given certain measurements.
*
*       I Know this is not what you wanted but it was all I could figure out because Mr. Ahsun
*       has not went over most of the stuff in this lab yet. The output is still the same but
*       I could not figure out how to use the reference variables.
*/
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int choice;
double PI = M_PI;
double height, width, base, base_a, base_b, radius, result;

void displayMenu ()
{
    cout << "\nChoose a shape to calculate area or 5 to quit:\n";
    cout << "        1. Trapezoid\n        2. Cone\n        3. Parallelogram\n";
    cout << "        4. Circle\n        5. End Program\nCHOOSE 1-5: ";

    cin >> choice;

    while ((choice < 1) || (choice > 5))
        {
            cout << "\nInvalid input.\nCHOOSE 1-5: ";

            cin >> choice;
        }
}

double areaTrapezoid (double base_a, double base_b, double height)
{
    result = (base_a + base_b) / 2 * height;

    return result;
}

double areaCone (double &height, double &radius)
{
    result = PI * radius * (radius + sqrt(pow(height, 2) + pow(radius, 2)));

    return result;
}

double areaParallelogram (double base, double height)
{
    result = base * height;

    return result;
}

double areaCircle (double radius)
{
    result = PI * pow(radius, 2);

    return result;
}

int main()
{
    ofstream myFile;
    myFile.open("result.txt");
    do
    {
        displayMenu ();

        switch (choice)
        {
            case 1:
                cout << "\nEnter the height of the trapezoid:  ";

                cin >> height;

                cout << "\nEnter base 'a' of the trapezoid:  ";

                cin >> base_a;

                cout << "\nEnter base 'b' of the trapezoid:  ";

                cin >> base_b;

                cout << "The area of your trapezoid with height " << height << ", base a of " << base_a;
                cout << ", and base b of " << base_b << " is " << areaTrapezoid (base_a, base_b, height) << "\n\n";

                myFile << "The area of your trapezoid with height " << height << ", base a of " << base_a;
                myFile << ", and base b of " << base_b << " is " << areaTrapezoid (base_a, base_b, height) << "\n";
                break;
            

            case 2:
                cout << "\nEnter the height of your cone:  ";

                cin >> height;

                cout << "\nEnter the radius of your cone:  ";

                cin >> radius;

                cout << "The surface area of your cone with radius of " << radius << " and height of ";
                cout << height << " is " << areaCone(height, radius) << "\n\n";

                myFile << "The surface area of your cone with radius of " << radius << " and height of ";
                myFile << height << " is " << areaCone(height, radius) << "\n";
                break;

            case 3:
                cout << "\nEnter the base and height of the parallelogram, seperated by a space:\n";

                cin >> base;
                cin >> height;

                cout << "The area of your parallelogram with base of " << base << " and height of ";
                cout << height << " is " << areaParallelogram(base, height) << "\n\n";

                myFile << "The area of your parallelogram with base of " << base << " and height of ";
                myFile << height << " is " << areaParallelogram(base, height) << "\n";
                break;

            case 4:
                cout << "\nEnter the radius of the circle:\n";
                
                cin >> radius;

                cout << "The area of your circle with radius of " << radius << " is " << areaCircle(radius) << "\n\n";

                myFile << "The area of your circle with radius of " << radius << " is " << areaCircle(radius) << "\n";
                break;

            case 5:
                cout << "\n\nGoodbye!";
        }
    }
    while (choice != 5);

    myFile.close();

    return 0;
}