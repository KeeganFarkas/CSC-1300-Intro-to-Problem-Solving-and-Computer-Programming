#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;

int choice;
double PI = M_PI;
double height, width, base, base_a, base_b, radius, area, result;
string shapename;
ofstream myFile;

short displayMenu ();
void print (string, double, double, double, double, double, double, double);
double areaTrapezoid (double &, double &, double &);
double areaCone (double &, double &);
double areaParallelogram (double &, double &);
double areaCircle (double &);

int main()
{
    do
    {
        displayMenu ();

        switch (choice)
        {
            case 1:

                print ("parallelogram", area, height, width, base, radius, base_a, base_b);

                cout << "The area of your trapezoid with height " << height << ", base a of " << base_a;
                cout << ", and base b of " << base_b << " is " << "\n\n";
                break;
            
            case 2:
                cout << "\nEnter the height of your cone:  ";

                cin >> height;

                cout << "\nEnter the radius of your cone:  ";

                cin >> radius;

                cout << "The surface area of your cone with radius of " << radius << " and height of ";
                cout << height << " is " << areaCone(height, radius) << "\n\n";
                break;

            case 3:
                cout << "\nEnter the base and height of the parallelogram, seperated by a space:\n";

                cin >> base;
                cin >> height;

                cout << "The area of your parallelogram with base of " << base << " and height of ";
                cout << height << " is " << areaParallelogram(base, height) << "\n\n";
                break;

            case 4:
                cout << "\nEnter the radius of the circle:\n";
                
                cin >> radius;

                cout << "The area of your circle with radius of " << radius << " is " << areaCircle(radius) << "\n\n";
                break;

            case 5:
                cout << "\n\nGoodbye!";
        }
    }
    while (choice != 5);

    return 0;
}

short displayMenu ()
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
    return choice;
}

double areaTrapezoid (double base_a, double base_b, double height)
{
    cout << "\nEnter the height of the trapezoid:  ";

    cin >> height;

    cout << "\nEnter base 'a' of the trapezoid:  ";

    cin >> base_a;

    cout << "\nEnter base 'b' of the trapezoid:  ";

    cin >> base_b;

    result = (base_a + base_a) / 2 * height;

    return result;
}

double areaCone (double &height, double &radius)
{
    result = PI * radius * (radius + sqrt(pow(height, 2) + pow(radius, 2)));

    return result;
}

double areaParallelogram (double &base, double &height)
{
    result = base * height;

    return result;
}

double areaCircle (double &radius)
{
    result = PI * pow(radius, 2);

    return result;
}

void print (string shapeName, double area, double height, double width, double base, double radius, double base_a, double base_b)
{
    myFile.open("result.txt");

    if(shapename == "trapezoid")
    {

        cout << "The area of your trapezoid with height " << height << ", base a of " << base_a;
        cout << ", and base b of " << base_b << " is " << area << "\n\n";

        myFile << "The area of your trapezoid with height " << height << ", base a of " << base_a;
        myFile << ", and base b of " << base_b << " is " << area << "\n\n";
    }

    myFile.close();
}